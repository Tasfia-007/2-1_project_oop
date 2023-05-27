#include<bits/stdc++.h>

using namespace std;

class Science_and_research{
  public:
  string experiment;
  int  count;
  Science_and_research():experiment(""),count(0){}
  Science_and_research(const string& name, int cnt) : experiment(name), count(cnt) {}
   template<typename T>
    void performExperiment(const T& data);
   friend ostream& operator<<(ostream& os, const Science_and_research& sr);
};

void ScienceResearch();