#include "hfile4.h"


   template<typename T>
    void Science_and_research::performExperiment(const T& data) {
        cout << "Performing experiment: " << experiment << endl;
        cout << "Data received: " << data << endl;
        cout << "Experiment count: " <<count << endl;
    }
     ostream& operator<<(ostream& os, const Science_and_research& sr) {
        os << "Experiment Name: " << sr.experiment << endl;
        os << "Experiment Count: " << sr.count << endl;
        return os;
    }

void  ScienceResearch()
{
    cout<<"Enter the number of input data\n";
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
      {
      Science_and_research sr;
      cout<<"Enter the name of experiment\n";
      cin>>sr.experiment;
      cout<<"Enter the experiment data(int)\n";
      cin>>sr.count;
      cout<<sr;
      cout<<endl;
      }
      Science_and_research sr;
    int experimentData1 = 10;
    double experimentData2 = 3.14;
    string experimentData3 = "Sample data";
    sr.performExperiment(experimentData1);
    sr.performExperiment(experimentData2);
    sr.performExperiment(experimentData3);
}