#include "hfile1.h"
#include "hfile2.h"
#include "hfile3.h"
#include "hfile4.h"
#include "hfile5.h"
#include "hfile6.h"
#include "hfile7.h"
#include "hfile8.h"

int main()
{
    int op;
    cout<<"Hello there! Please choose one option below: \n";
    cout<<"1.Environmental Control\n";
    cout<<"2.Maintenance and Repair\n";
    cout<<"3.Communication and Data Management\n";
    cout<<"4.Science and Research\n";
    cout<<"5.Mission Planning\n";
    cout<<"6.Security and Access Control\n";
    cout<<"7.Crew Management\n";
    cout<<"8.Safety Emergency Procedure\n";
    cin>>op;
      if(op==1)
    {
       Environment();
    }
  else if(op==2)
  {
    MaintainRepair();
  }
   else if(op==3)
   {
       CommunicationDataManage();
   }
   else if(op==4)
   { 
    ScienceResearch();
  }
   else if(op==5)
   {
     Launchmission();
   }
   else if(op==6)
   {
     Security();
   }
   else if(op==7)
   {
    CrewManage();
   }
   else if(op==8)
   {
    Safety();
   }
    else
    cout<<"Invalid"<<endl;
}