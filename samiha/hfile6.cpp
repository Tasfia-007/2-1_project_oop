#include "hfile6.h"


    void Employee::displayInformation() const  {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Access Level: " << accessLevel << endl;
        cout << "Department: " << department << endl;
    }


    void  Visitor :: displayInformation() const  {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Access Level: " << accessLevel << endl;
        cout << "Purpose of Visit: " << purposeOfVisit << endl;
    }

    void Security()
    {
        vector<SecurityAccessControl*>records;
     string filename="access_control.txt";
     ofstream outputFile(filename);
     if(not outputFile)
     {
      cerr<<"Error opening the file\n";
     }
    else{
    records.push_back(new Employee("John Doe", 30, "Level 2", "IT Department"));
    records.push_back(new Employee("Jane Smith", 35, "Level 3", "HR Department"));
    records.push_back(new Visitor("Mike Johnson", 25, "Visitor", "Meeting with HR"));
    records.push_back(new Visitor("Sarah Parker", 27, "Visitor", "Tour of the facility"));
    for (const SecurityAccessControl* record : records) {
        record->displayInformation();
        outputFile << "Name: " << record->name << ", Age: " << record->age << ", Access Level: " << record->accessLevel << endl;
        outputFile << endl;
    }

    
    outputFile.close();
    for (SecurityAccessControl* record : records) {
        delete record;
    }
    records.clear();
    }

    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error opening the file." << endl;
       
    }
    else
    {
    string line;
    cout << "\nRecords read from the file:" << endl;
    while (getline(inputFile, line)) {
    cout << line << endl;
    }
    inputFile.close();
    }
    }