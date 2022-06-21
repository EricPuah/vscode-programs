#include <iostream>
//#include "Result.h"
using namespace std;
enum Performance{
        Standing_Ovation,Mediocre,Bad
};
class Scoring : public Result{
    private:
        string activity;
        int score;
        string remarks;
        Performance performance;
        int period;
    public:
        Scoring(){}
        Scoring(string activity,string remarks,int period,int score,Performance performance): Result(activity, remarks, period),activity(activity), remarks(remarks), period(period), score(score),performance(performance){}

        string getactivity(){
            cout<<"Score On"<<endl;
            return "\t\t\t\t\t<<"+activity+">>";
        }
        void setactivity(string activity){
            
            this->activity = activity;
        }
        double getscore(){
            return score;
        }
        void setscore(double score){
            this->score = score;
        }
        string getremarks(){
            return remarks;

        }
        void setremark(string remarks){
            this->remarks = remarks;
        }
        Performance getperformance(){
             switch(performance) {
             case Standing_Ovation:
                 cout<< "Standing_Ovation"<<endl;
                 cout<< "\t\t\t\t\tStand Up and Clap"<<endl;
                break;
            case Mediocre:
                cout<< "Mediocre"<<endl;
                cout<< "\t\t\t\t\tMeh..."<<endl;
                break;
            case Bad:
                cout<< "Bad"<<endl;
                cout<< "\t\t\t\t\tTry harder"<<endl;
                break;
            default:
                cout<< "Invalid Performance";
                break;
        } 
            return performance;
        }
        void setperformance(Performance performance){
            
            this->performance = performance;
        }
        void setperiod(int period){
            this->period = period;
        }
        int getperiod(){
            return period;
        }
        void display(){
            cout<<"\t\t\tScoring"<<endl;
            cout<< "\n\t\t\tActivity       : "<<getactivity()
                << "\n\t\t\tRemarks        : "<<getremarks()
                << "\n\t\t\tTime Period    : "<<getperiod()   
                << "\n\t\t\tPerformance    :"<<getperformance()   
                << "\n\t\t\tQuantity       :"<<getscore()<<endl;
                // << "\n\t\t\tInitial State  :"<<getinitialstate()   
                // << "\n\t\t\tFinal State    :"<<getfinalstate()   
                // << "\n\t\t\tImprovement    :"<<degreeofimprovement()<<endl; 
        }
};