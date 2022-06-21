//Program 7.2
#include <iostream>
using namespace std;

class Rectangle {
 protected:
 double width;
 double length;
 double calculateArea();

 public:
 Rectangle(double, double);
 void display();
};

Rectangle::Rectangle(double width, double length){
 this->width = width;
 this->length = length;
}

void Rectangle::display(){
 cout<<width<<endl;
 cout<<length<<endl;
}

double Rectangle::calculateArea(){
 return width*length;
}

class Square: public Rectangle {
 private:
 double height;

 public:
 Square(double,double,double) ;
 double calculateVolume();
 void display();
};

 Square:: Square(double height, double width, double length):Rectangle(width, length) {
 this->height=height;
 this->width=width;
 this->length=length;
}

double Square::calculateVolume(){
 return height * calculateArea();
}

void Square::display(){
 Rectangle::display() ;
 cout<<height<<endl;
 cout<<calculateVolume()<<endl;
 
}

int main(){
 Square squareBox(15,10,10) ;
 double vol = squareBox.calculateVolume() ;
 squareBox.display() ;

 system("pause");
 return 0;
}
