#include<bits/stdc++.h>
using namespace std;

template<typename T>
class SafetyEmergencyProcedure {
private:
    string procedureName;
    T procedureDetails;

public:
    SafetyEmergencyProcedure(const string& name, const T& details)
        : procedureName(name), procedureDetails(details) {}

    void displayProcedure() const ;
    bool operator==(const SafetyEmergencyProcedure& other) const ;

    SafetyEmergencyProcedure operator+(const SafetyEmergencyProcedure& other) const ;
};

void Safety();