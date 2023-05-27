#include "hfile7.h"



    void Astronaut::displayDetails() const  {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Missions Completed: " << missionsCompleted << endl;
    }


    void Engineer :: displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Specialization: " << specialization << endl;
    }

   

    void CrewManagement::displayProgress() const {
        try {
            Astronaut& astronaut = dynamic_cast<Astronaut&>(*crewMember);
            cout << "Astronaut Progress:" << endl;
            astronaut.displayDetails();
        } catch (const bad_cast& e) {
            cout << "No progress available for non-astronaut crew members." << endl;
        }
    }

    void  CrewManagement::handleEmergency(const string& message) {
        cout << "Emergency Response: " << message << endl;
    }

    void  CrewManagement:: operator()(const string& message) {
        handleEmergency(message);
    }

void CrewManage()
{
    CrewMember* astronaut = new Astronaut("John Doe", 35, 3);
    CrewMember* engineer = new Engineer("Jane Smith", 30, "Structural Engineering");

    CrewManagement astronautManagement(astronaut);
    CrewManagement engineerManagement(engineer);

    cout << "Astronaut Details:" << endl;
    astronautManagement.displayProgress();
    cout << endl;

    cout << "Engineer Details:" << endl;
    engineerManagement.displayProgress();
    cout << endl;

    try {
        CrewManagement& astronautRef = dynamic_cast<CrewManagement&>(astronautManagement);
        astronautRef("Engine failure in module 2");
    } catch (const bad_cast& e) {
        cout << "Failed to cast to Astronaut Management." << endl;
    }

    delete astronaut;
    delete engineer;
}