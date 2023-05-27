#include "hfile2.h"


  void Electrical:: perform_task()
  {
    cout<<"Performing electrical maintenance...\n";
  }
  void Electrical::check_task()
  {
    cout<<"Checking  system status...\n";
  }
  void Electrical::schedule_task()
  {
    cout<<"Kindly set your schedule, we shall inform you: ";
     cin>>s;
  }


  void Mechanical::perform_task()
  {
    cout<<"Performing mechanical maintenance...\n";
  }
  void Mechanical::check_task()
  {
    cout<<"Checking  system status...\n";
  }
  void Mechanical::schedule_task()
  {
    cout<<"Kindly set your schedule, we shall inform you: ";
    cin>>s;
  }


 void Lifesupport:: perform_task()
  {
    cout<<"Performing life support system maintenance...\n";
  }
  void Lifesupport:: check_task()
  {
    cout<<"Checking life support system status...\n";
  }
  void Lifesupport:: schedule_task()
  {
    cout<<"Kindly set your schedule, we shall inform you: ";
    cin>>s;
  }


void Communication::perform_task()
  {
    cout<<"Performing communication system maintenance...\n";
  }
  void Communication:: check_task()
  {
    cout<<"Checking communication system status...\n";
  }
  void Communication::schedule_task()
  {
    cout<<"Kindly set your schedule, we shall inform you: ";
    cin>>s;
  }

void MaintainRepair()
{
   vector<Maintenance_and_Repair*>sectors;
     sectors.push_back(new Electrical());
     sectors.push_back(new Mechanical());
     sectors.push_back(new Communication());
     sectors.push_back(new Lifesupport());
     for(Maintenance_and_Repair* i:sectors)
     {
     i->perform_task();
     i->check_task();
     i->schedule_task();
     }
     for (Maintenance_and_Repair* sector : sectors) {
        delete sector;
    }
    sectors.clear();
}