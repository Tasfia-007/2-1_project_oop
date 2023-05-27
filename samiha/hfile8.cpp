#include "hfile8.h"

template<typename T>
    //void displayProcedure(const SafetyEmergencyProcedure<T>& procedure) {
    void SafetyEmergencyProcedure<T>::displayProcedure() const {
    cout << "Procedure Name: " << procedureName << endl;
    cout << "Procedure Details: " << procedureDetails << endl;
}

   template<typename T>
   bool SafetyEmergencyProcedure<T>::operator==(const SafetyEmergencyProcedure<T> &other) const {
    return procedureName == other.procedureName && procedureDetails == other.procedureDetails;
}

  template<class T> SafetyEmergencyProcedure<T> SafetyEmergencyProcedure<T>::operator+(const SafetyEmergencyProcedure<T> &other) const {
    string newName = procedureName + " + " + other.procedureName;
    T newDetails = procedureDetails + other.procedureDetails;
    return SafetyEmergencyProcedure<T>(newName, newDetails);
}

void Safety()
{
    SafetyEmergencyProcedure<int> procedure1("Evacuation Procedure", 12345);
    SafetyEmergencyProcedure<int> procedure2("Fire Safety Procedure", 1.456);
    
    cout << "Procedure 1:" << endl;
    procedure1.displayProcedure();
    cout << endl;

    cout << "Procedure 2:" << endl;
    procedure2.displayProcedure();
    cout << endl;

    SafetyEmergencyProcedure<int> combinedProcedure = procedure1 + procedure2;
    
    cout << "Combined Procedure:" << endl;
    combinedProcedure.displayProcedure();
    cout << endl;
}