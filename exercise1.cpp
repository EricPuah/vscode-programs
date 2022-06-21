#include <iostream>
#include <iomanip>
using namespace std;

class Stock{
    private:
    string code;
    string name;
    double closePrice;
    double currentPrice;
    
public:
    string getCode(){
        return code;
    }
    string getName(){
        return name;
    }  
    void setCode(string newCode){
        code = newCode;
    }
    void setName(string newName){
        name = newName;
    }
    void setCurrentPrice(double newCurrentPrice){
        currentPrice = newCurrentPrice;
    }
    void setClosePrice(double newClosePrice){
        closePrice = newClosePrice;
        
    }
    double changePercent(){
     double diff = ((currentPrice-closePrice)/closePrice)*100;
     return diff;
    }
    
    void display(){
        cout << "Close Price => "
             << "RM" << fixed << setprecision(2) <<closePrice << endl;
        cout << "Current Price => "
             << "RM" << fixed << setprecision(2) <<currentPrice << endl;
             if(currentPrice < closePrice){
                cout << "Change Percentage => " << fixed << setprecision(2) << changePercent() << "%" << endl;
             }
             else
                 cout << "Change Percentage => +" << fixed << setprecision(2) << changePercent() << "%" << endl;
        }
};

int main(){
    Stock s1;
    Stock s2;
    double closePrice;
    double currentPrice;
    s1.setName("Maybank");
    s1.setCode("MBB");
    cout<<"Stock : "<<s1.getName() << "(" << s1.getCode()<< ")"<<endl;
    s1.setClosePrice(5500.00);
    s1.setCurrentPrice(5250.00);
    s1.display();
    s2.setName("CIMB Bank Berhad");
    s2.setCode("CIMB");
    cout<<"Stock : "<<s2.getName() << "(" << s2.getCode()<< ")"<<endl;
    s2.setClosePrice(10000.00);
    s2.setCurrentPrice(15050.00);
    s2.display();

system("pause");
return 0;
}