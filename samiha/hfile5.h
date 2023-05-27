#include<bits/stdc++.h>
using namespace std;

class MissionPlanning {
    protected:
    string missionName;
    string missionDate;
    public:
    MissionPlanning(const string& name, const string& date)
        : missionName(name), missionDate(date) {}

    virtual void displayDetails() const = 0;
};
class LaunchMission : public MissionPlanning {
    private:
    string launchLocation;

    public:
    LaunchMission(const string& name, const string& date, const string& location)
        : MissionPlanning(name, date), launchLocation(location) {}
    void displayDetails() const override ;
};
class SpacewalkMission : public MissionPlanning {
    public:
    int duration;
    SpacewalkMission(const string& name, const string& date, int duration)
        : MissionPlanning(name, date), duration(duration) {}
    void displayDetails() const override ;
};
class ScienceMission : public SpacewalkMission {
private:
    vector<string> experiments;
    public:
    ScienceMission(const string& name, const string& date, int duration, const vector<string>& exp)
        : SpacewalkMission(name, date, duration), experiments(exp) {}
    void displayDetails() const override ;
    friend ostream& operator<<(ostream& os, const ScienceMission& mission);
};


void Launchmission();