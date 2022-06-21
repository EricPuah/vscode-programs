#include <iostream>
//#include "Result.h"
using namespace std;
enum Condition{
        The_Best,Best, Good, Normal, Worse, Worst, No_Hope
};
class Progress : public Result {
    private:
        string activity ;
        double quantity;
        string remarks;
        Condition condition;
        double initialstate;
        double finalstate;
        int period;
    public:
        Progress(){}
        Progress(string activity ,string remarks,int period,double quantity,Condition condition,double initialstate,double finalstate): Result(activity, remarks, period), activity(activity), remarks(remarks),period(period), quantity(quantity),condition(condition),initialstate(initialstate),finalstate(finalstate){}
        double getquantity(){
            return quantity;
        }
        void setquantity(double quantity){
            this->quantity = quantity;
        }
        string getremarks(){
            return remarks;

        }
        void setremarks(string remarks){
            this->remarks = remarks;
        }
        string getactivity(){
            cout<<"Progress On"<<endl;
            return "\t\t\t\t\t<<"+activity+">>";
        }
        void setactivity(string activity){
            this->activity = activity;
        }
        Condition getcondition(){
            switch(condition) {
             case The_Best:
                 cout<< "The_Best"<<endl;
                 cout<< "\t\t\t\t\tStand Up and Clap"<<endl;
                break;
             case Best:
                 cout<< "Best"<<endl;
                 cout<< "\t\t\t\t\tStand Up and Clap"<<endl;
                break;
             case Good:
                 cout<< "Good"<<endl;
                 cout<< "\t\t\t\t\tStand Up and Clap"<<endl;
                break;
            case Normal:
                cout<< "Mediocre"<<endl;
                cout<< "\t\t\t\t\tMeh..."<<endl;
                break;
            case Worse:
                cout<< "Worse"<<endl;
                cout<< "\t\t\t\t\tTry harder"<<endl;
                break;
            case Worst:
                cout<< "Worst"<<endl;
                cout<< "\t\t\t\t\tTry harder"<<endl;
                break;
            case No_Hope:
                cout<< "No_Hope"<<endl;
                cout<< "\t\t\t\t\tTry other activity to do"<<endl;
                break;
            default:
                cout<< "Invalid Performance";
                break;
        } 
            return condition;
        }
        void setcondition(Condition condition){
            this->condition = condition;
        }
        double getinitialstate(){
            return initialstate;
        }
        void setinitialstate(double initialstate){
            this->initialstate = initialstate;
        }
        
        double getfinalstate(){
            return finalstate;
        }
        void setfinalstate(double initialstate){
            this->finalstate = finalstate;
        }
        double degreeofimprovement(){
            double diff = finalstate - initialstate;
            return diff/100 ;
            // + "%";
        }
        void setperiod(int period){
            this->period = period;
        }
        int getperiod(){
            return period; 
            // + " hours";
        }
        void display(){
            cout<< "\n\t\t\tActivity       : "<<getactivity()
                << "\n\t\t\tRemarks        : "<<getremarks()
                << "\n\t\t\tTime Period    : "<<getperiod()   
                << "\n\t\t\tQuantity       :"<<getquantity()   
                << "\n\t\t\tCondition      :"<<getcondition()   
                << "\n\t\t\tInitial State  :"<<getinitialstate()   
                << "\n\t\t\tFinal State    :"<<getfinalstate()   
                << "\n\t\t\tImprovement    :"<<degreeofimprovement()<<endl;   
        }

};