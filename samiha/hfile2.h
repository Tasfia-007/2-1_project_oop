#include<bits/stdc++.h>
using namespace std;

class Maintenance_and_Repair{
    public:
    Maintenance_and_Repair(){}
    string s;
    
    virtual void perform_task()=0;
    virtual void check_task()=0;
    virtual void schedule_task()=0;
    virtual ~Maintenance_and_Repair(){};  
};
class Electrical:public Maintenance_and_Repair
{
  public:
  void perform_task();
  void check_task();
  void schedule_task();
};
class Mechanical:public Maintenance_and_Repair
{
     public:
  void perform_task();
  void check_task();
  void schedule_task();
};
class Lifesupport:public Maintenance_and_Repair{
    public:
  void perform_task();
  void check_task();
  void schedule_task();
};
class Communication:public Maintenance_and_Repair
{
    public:
   void perform_task();
  void check_task();
  void schedule_task();
};

void MaintainRepair();