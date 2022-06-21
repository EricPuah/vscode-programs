#include<iostream>
using namespace std;

class TennisShop 
{ 
    private: 
        string brand;
        double price;
        int quantity; 
    public: 
        TennisShop() {} 
        TennisShop(int quantity) { 
            this->quantity = quantity; 
        }
        void setBrandPrice(string brand, double price) { 
            this->price = price;
            this->brand = brand; 
        }
        string getBrand() { return brand; }
        double getPrice() { return price; }
        int getQuantity() { return quantity; }
        virtual void display() = 0; 
        virtual double calcPrice() = 0;
};

class Racket: public TennisShop 
{
    private:
    int racketType;

    public:
    Racket(){} //will do nothing
    Racket(int type, int qtt): TennisShop(qtt){
        racketType=type;
    }
    void display()
    {
        string nameType;
        switch(racketType)
        {
            case 1:
                nameType = "Junior Tennis Racket";
                setBrandPrice("Wilson",569.7);
                break;
            case 2:
                nameType = "Beginners Tennis Racket";
                setBrandPrice("Yonex", 719.7);
                break;
            case 3:
                nameType = "Advanced Tennis Racket";
                setBrandPrice("Yonex", 1289.7);
                break;
            default: 
                nameType = "All Tennis Racket";
                setBrandPrice("Dunlop", 989.7);       
        }
        cout<<"\nTennis Racket"
            << "\nBrand: " << getBrand()
            << "\nType: " << nameType
            << "\nPrice: RM "<< getPrice()
            << "\nNo Discount!"
            << "\nQuantity: "<< getQuantity()
            << "\nSubtotal: RM "<<calcPrice()<<endl;
    }
    double calcPrice()
    {
        return getQuantity() * getPrice();
    }
};

class Ball: public TennisShop
{
    private:
    int numBalls;
    int ballId;

    public:
    Ball(){}
    Ball(int id, int qtt) : TennisShop(qtt){
        ballId = id;
    }
    double calcDisc()
    {
        return 0.85* getPrice();

    }
    void display()
    {
        string nameType;
        switch(ballId)
        {
            case 1:
                nameType = " Roland Garros All Court";
                setBrandPrice("Wilson",38.4);
                numBalls = 4;
                break;
            case 2:
                nameType = "US Open";
                setBrandPrice("Wilson", 28.8);
                numBalls = 3;
                break;
            case 3:
                nameType = "Fort Max TP KNLTB ";
                setBrandPrice("Dunlop", 81.0);
                numBalls = 4;
                break;
            default: 
                nameType = "Fort All Court";
                setBrandPrice("Dunlop", 33.0);  
                numBalls = 3;     
        }
        cout<<"\nTennis Ball"
            << "\nBrand: " << getBrand()
            << "\nDescription: " << nameType
            << "\nPrice: RM "<< getPrice() << " for "<< numBalls << "balls per tube"
            << "\nDiscount: 15.00%"
            << "\nQuantity: "<< getQuantity()
            << "\nSubtotal: RM "<<calcPrice()<<endl;
    }
    double calcPrice()
    {
        return getQuantity()* calcDisc();
    }
};

class Customer
{
    private:
    string CustName;
    int numOfItem;
    TennisShop *itemList[10];

    public:
    Customer (string name)
    {
        CustName = name;
        numOfItem = 0;
    }
    string getName()
    {
        return CustName;
    }
    void buy(TennisShop *t)
    {
        itemList[numOfItem] = t;
        numOfItem++;
    }
    void print()
    {
        double totalPrice = 0;
        cout << "\nLIST OF TENNIS ITEMS BOUGHT\n";
        for (int i = 0; i<numOfItem; i++)
        {
            cout<< "\n----- Item #"<< i+1 <<" -----";
            itemList[i]->display();
            totalPrice += itemList[i]->calcPrice();
        }
        cout<< "TOTAL: RM " <<totalPrice<<endl;
    }
};

int displayMainMenu() 
{
    int choice;
    cout << "==========[MENU]============\n"
         << " [1] Buy item\n"
         << " [2] Print all items\n"
         << " [3] Exit\n"
         << "============================\n"
         << "Choice: ";
    cin >> choice;
    return choice;
}

int displayRacketMenu() 
{
    int choice;
    cout << " [1] Wilson: Junior Tennis Racket\n"
         << " [2] Yonex: Beginners Tennis Racket\n"
         << " [3] Yonex: Advanced Tennis Racket\n"
         << " [4] Dunlop: All Tennis Racket\n"
         << "Choice: ";
    cin >> choice;
    return choice;
}

int displayBallMenu() 
{
    int choice;
    cout << " [1] Wilson: Roland Garros All Court\n"
         << " [2] Wilson: US Open\n"
         << " [3] Dunlop: Fort Max TP KNLTB\n"
         << " [4] Dunlop: Fort All Court\n"
         << "Choice: ";
    cin >> choice;
    return choice;
}

int main() 
{
    TennisShop *p;
    Customer c("ARIF AIMAN");
//Complete your function start from here
 //Define any suitable variables for the program
 //Write the codes based on the tasks listed in (e)
    int choice, userchoice, opt,quan;
    cout<< "WELCOME "<<c.getName()<<endl<<endl;
    do
    {
       choice = displayMainMenu();
       switch(choice)
       {
        case 1:
       cout<<"\n<< Item to buy >> "
           <<"\n [1] Racket"
           <<"\n [2] Ball"
           <<"\nChoice: ";
       cin >> userchoice;

       if(userchoice == 1)
       {
           cout<< "\n\n*** Racket ***"<<endl;
           opt = displayRacketMenu();
           cout<<"Quantity: ";
           cin>> quan;
           p = new Racket(opt,quan);
       } 
       else
       {
           cout<< "\n\n*** Ball ***"<<endl;
           opt = displayBallMenu();
           cout<<"Quantity: ";
           cin>> quan;
           p = new Ball(opt,quan);
       }  

       c.buy(p);
       break;

       case 2:
       c.print();
       break; 

       case 3:
       cout<<"\nThank you for using this system ;)"<<endl;
       break;
       
       default:
       cout<<"\nInvalid input. Try again!"<<endl<<endl;
       }
    } 
    while (choice != 3);

    system("pause");
    return 0;

}
