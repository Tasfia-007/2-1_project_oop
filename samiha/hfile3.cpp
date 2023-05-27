#include "hfile3.h"


    void Email ::processCommunication() {
        cout << "Processing emails..." << endl;
    }

    void Email :: manageData() {
        cout << "Managing email data..." << endl;
    }

    void Email :: recordCrewMember(const string& crewMember)  {
        emails.push_back(crewMember);
    }



    void File :: processCommunication()  {
        cout << "Processing files..." << endl;
    }

    void File :: manageData()  {
        cout << "Managing file data..." << endl;
    }

    void File :: recordCrewMember(const string& crewMember)  {
        files.push_back(crewMember);
    }



    void Chat :: processCommunication()  {
        cout << "Processing chat messages..." << endl;
    }

    void Chat ::  manageData()  {
        cout << "Managing chat data..." << endl;
    }

    void Chat ::  recordCrewMember(const string& crewMember)  {
        chatRecords.push_back(crewMember);
    }


void CommunicationDataManage()
{
    vector<CommunicationAndDataManagement*> options;

    options.push_back(new Email());
    options.push_back(new File());
    options.push_back(new Chat());

    for (CommunicationAndDataManagement* option : options) {
        option->processCommunication();
        option->manageData();
        option->recordCrewMember("Crew Member 1");
        option->recordCrewMember("Crew Member 2");
        if (Chat* chatOption = dynamic_cast<Chat*>(option)) 
        {
            cout << "Chat option detected!" << endl;
        }

        delete option; 
    }
    options.clear();
}