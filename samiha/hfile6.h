#include<bits/stdc++.h>
using namespace std;

class SecurityAccessControl {
    public:
    string name;
    int age;
    string accessLevel;

    SecurityAccessControl(const string& n, int a, const string& level)
        : name(n), age(a), accessLevel(level) {}

    virtual void displayInformation() const = 0;
};

class Employee : public SecurityAccessControl {
private:
    string department;

public:
    Employee(const string& n, int a, const string& level, const string& dept)
        : SecurityAccessControl(n, a, level), department(dept) {}

    void displayInformation() const override ;
};

class Visitor : public SecurityAccessControl {
private:
    string purposeOfVisit;

public:
    Visitor(const string& n, int a, const string& level, const string& purpose)
        : SecurityAccessControl(n, a, level), purposeOfVisit(purpose) {}

    void displayInformation() const override ;
};

void Security();