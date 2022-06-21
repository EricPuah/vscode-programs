#include<iostream>
using namespace std;

class Result{
    private:
    
    int bill;
    
    
    protected:
    string activity;
    string remarks;
    int period;

    public:
    Result(){}
    Result(string activity, string remarks, int period): activity(activity), remarks(remarks), period(period){}
    virtual string getactivity(){
            cout<<"Someone\n";
            return activity;
        }
    virtual void setactivity(string activity){
            this->activity = activity;
        }
    virtual string getremarks(){
        return remarks;
    }
    void setremarks(string remarks){
        this->remarks = remarks;
    }
    int getbill(){
        return bill;
    }
    void setbill(int bill){
        this->bill = bill;
    }
    virtual int getperiod(){
        return period;
    }
    void setperiod(int period){
        this->period = period;
    }
    virtual void display()=0;

};