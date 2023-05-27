#include<bits/stdc++.h>
using namespace std;

class CommunicationAndDataManagement {
public:
    CommunicationAndDataManagement(){}
    virtual void processCommunication() = 0;
    virtual void manageData() = 0;
    virtual void recordCrewMember(const string& crewMember) = 0;
    virtual ~CommunicationAndDataManagement() {} // Virtual destructor for proper cleanup
};

class Email : public CommunicationAndDataManagement {
private:
    vector<string> emails;

public:
    void processCommunication() override;

    void manageData() override ;
    void recordCrewMember(const string& crewMember) override ;
};

class File : public CommunicationAndDataManagement {
private:
    vector<string> files;

public:
    void processCommunication() override ;

    void manageData() override;

    void recordCrewMember(const string& crewMember) override ;
};

class Chat : public CommunicationAndDataManagement {
private:
    vector<string> chatRecords;

public:
    void processCommunication() override;

    void manageData() override ;

    void recordCrewMember(const string& crewMember) override ;
};

void CommunicationDataManage();