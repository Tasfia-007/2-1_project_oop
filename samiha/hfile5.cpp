#include "hfile5.h"


    void LaunchMission :: displayDetails() const {
        cout << "Mission Name: " << missionName << endl;
        cout << "Mission Date: " << missionDate << endl;
        cout << "Launch Location: " << launchLocation << endl;
    }


    void SpacewalkMission :: displayDetails() const  {
        cout << "Mission Name: " << missionName << endl;
        cout << "Mission Date: " << missionDate << endl;
        cout << "Spacewalk Duration: " << duration << " hours" << endl;
    }


    void ScienceMission :: displayDetails() const {
        cout << "Mission Name: " << missionName << endl;
        cout << "Mission Date: " << missionDate << endl;
        cout << "Spacewalk Duration: " << duration << " hours" << endl;
        cout << "Experiments: ";
        for (const string& exp : experiments) {
            cout << exp << ", ";
        }
        cout << endl;
    }

ostream& operator<<(ostream& os, const ScienceMission& mission) {
    os << "Mission Name: " << mission.missionName << endl;
    os << "Mission Date: " << mission.missionDate << endl;
    os << "Spacewalk Duration: " << mission.duration << " hours" << endl;
    os << "Experiments: ";
    for (const string& exp : mission.experiments) {
        os << exp << ", ";
    }
    os << endl;
    return os;
}

void Launchmission()
{
    LaunchMission launchMission("Mission Alpha", "2023-06-15", "Cape Canaveral");
    SpacewalkMission spacewalkMission("Mission Beta", "2023-07-20", 6);
    vector<string> experiments = {"Experiment 1", "Experiment 2", "Experiment 3"};
    ScienceMission scienceMission("Mission Gamma", "2023-08-10", 8, experiments);

    cout << "Launch Mission Details:" << endl;
    launchMission.displayDetails();

    cout << "\nSpacewalk Mission Details:" << endl;
    spacewalkMission.displayDetails();

    cout << "\nScience Mission Details:" << endl;
    cout << scienceMission;
}