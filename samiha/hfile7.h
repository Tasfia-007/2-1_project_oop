#include<bits/stdc++.h>

using namespace std;

class CrewMember {

public:
    string name;
    int age;
    CrewMember(const string& n, int a)
        : name(n), age(a) {}

    virtual void displayDetails() const = 0;
};

class Astronaut : public CrewMember {
private:
    int missionsCompleted;

public:
    Astronaut(const string& n, int a, int missions)
        : CrewMember(n, a), missionsCompleted(missions) {}

    void displayDetails() const override ;
};

class Engineer : public CrewMember {
private:
    string specialization;

public:
    Engineer(const string& n, int a, const string& special)
        : CrewMember(n, a), specialization(special) {}

    void displayDetails() const override ;
};

class CrewManagement {
private:
    CrewMember* crewMember;

public:
    CrewManagement(CrewMember* member)
        : crewMember(member) {}

    void displayProgress() const ;
    void handleEmergency(const string& message) ;

    void operator()(const string& message) ;
};

void CrewManage();