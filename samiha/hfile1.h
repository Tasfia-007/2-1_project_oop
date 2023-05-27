#include<bits/stdc++.h>

using namespace std;

class Environmental_Control{
    public:
    int choice;
    int current,required;
    string s;
    virtual void current_state()=0;
    virtual void required_state() = 0;
    virtual void anymore_request()=0;
   
};
class Temperature:public Environmental_Control{
    public:
    void current_state();
    void required_state();
    void anymore_request();
};

class Humidity:public Environmental_Control{
    public:
    void current_state();
    void required_state();
    void anymore_request();

};

class Air:public Environmental_Control{
    public:
    void current_state();
    void required_state();
    void anymore_request();

};

class Pressure:public Environmental_Control{
    public:
    void current_state();
    void required_state();
    void anymore_request();
};
class Radiation:public Environmental_Control{
   public:
    void current_state();
    void required_state();
    void anymore_request();
};
class Waste:public Environmental_Control{
    public:
    void current_state();
    void required_state();
    void anymore_request();
};
class Fire:public Environmental_Control{
    public:
   void current_state();
    void required_state();
    void anymore_request();
};
class Noise:public Environmental_Control{
    public:
    string ns;
    Noise(){}
    Noise(string ns){ns = this->ns;}
    void current_state();
    void required_state();
    void anymore_request();
};

void Environment();