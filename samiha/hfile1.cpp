#include "hfile1.h"


    void Temperature::current_state()
    {
    cout<<"Enter current Temperature\n";
    cin>>current;
    }
    void Temperature::required_state()
    {
    cout<<"Enter required Temperature\n";
    cin>>required;
    }
    void Temperature::anymore_request()
    {
        cout<<"Anymore request regarding temperature?Please let us know and describe briefly\n";
        scanf("%s",s);
        cout<<"Thanks for your response we shall communicate lately\n";
    }


    void Humidity::current_state()
    {
    cout<<"Enter current Humidity\n";
    cin>>current;
    }
    void Humidity:: required_state()
    {
    cout<<"Enter required Humidity\n";
    cin>>required;
    }
    void Humidity::anymore_request()
    {
        cout<<"Anymore request regarding humidity?Please let us know and describe briefly\n";
        scanf("%s",s);
        cout<<"Thanks for your response we shall communicate lately\n";
    }


    void Air::current_state()
    {
    cout<<"Enter current air\n";
    cin>>current;
    }
    void Air::required_state()
    {
    cout<<"Enter required air\n";
    cin>>required;
    }
    void Air::anymore_request()
    {
        cout<<"Anymore request regarding temperature?Please let us know and describe briefly\n";
        scanf("%s",s);
        cout<<"Thanks for your response we shall communicate lately\n";
    }


    void Pressure::current_state()
    {
    cout<<"Enter current pressure\n";
    cin>>current;
    }
    void Pressure::required_state()
    {
        // Give your description here, sensei :")
    }
    void Pressure::anymore_request()
    {
        cout<<"Kindly describe your state and requiremtns to prevent leaks,maintain structural integrity and any help for the crew\n";
        scanf("%s",s);
        cout<<"Thanks for your response we shall communicate lately\n";
    }


    void Radiation::current_state()
    {
    }
    void Radiation::required_state()
    {  
    }
    void Radiation::anymore_request()
    {
        cout<<"Kindly send us the record of the monitorization\n";
    }

    void Waste::current_state()
    {
        cout<<"Enter the storage for disposal of solid,liquid wastage\n";
        scanf("%s",s);
    }
    void Waste::required_state()
    {
    }
    void Waste::anymore_request()
    {
        cout<<"Describe if any additional feature is needed to be included: ";
        scanf("%s",s);
        cout<<"Thanks for your response we shall communicate lately\n";
    }


    void Fire::current_state()
    {
    }
    void Fire::required_state()
    {
        cout<<"Please let us know if you need more equipments\n";
        scanf("%s",s);
    }
    void Fire::anymore_request()
    {
    }


    void Noise::current_state()
    {
        cout<<"Describe your current state briefly: ";
        scanf("%s",s);
    }
    void Noise::required_state()
    {
    }
    void Noise:: anymore_request()
    {
    }

    void Environment()
    {
      cout<<"Choose one for environmental control: "<<'\n';
     cout<<"1.Temperature\n2.Humidity\n3.Air\n4.Pressure Regulation\n5.Radiation Monitoring\n6.Waste Management\n7.Fire Prevention and Suppression\n8.Sound Control\n";
     int c;
     cin>>c;
      if(c==1)
      {
         Environmental_Control *temp = new Temperature();
      temp->current_state();
      temp->required_state();
      temp->anymore_request();
      }
      else if(c==2)
      {
      Environmental_Control *hum = new Humidity();
      hum->current_state();
      hum->required_state();
      hum->anymore_request();
      }
      else if(c==3)
        {
       Environmental_Control *air = new Air();
      air->current_state();
      air->required_state();
      air->anymore_request();
        }
      else if(c==4)
      {
        Environmental_Control *pressure=new Pressure();
        pressure->current_state();
        pressure->anymore_request();
      }
      else if(c==5)
      {
        Environmental_Control *radiation=new Radiation();
        radiation->anymore_request();
      }
      else if(c==6)
      {
        Environmental_Control *waste=new Waste();
        waste->current_state();
        waste->anymore_request();
      }
      else if(c==7)
      {
        Environmental_Control *fire=new Fire();
        fire->required_state();
      }
      else if(c==8)
      {
        Environmental_Control *noise=new Noise();
        noise->current_state();
        // Environmental_Control *e;
        // string st;
        // scanf("%s",s)t;
        // Noise n(st);
        // n.current_state();
      }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    }
