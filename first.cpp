#include<iostream>
#include<conio.h>
using namespace std;
class student{
public:
    int id;
    double gpa;
    void display(){
        
        cout <<"Id is: " << id <<" "  <<"and" << " " << "GPA is: "  <<gpa <<endl;
    }
};

int main(){

student Rahim,Karim,Mosarof;

Rahim.id=101;
Rahim.gpa=5.00;

Karim.id=102;
Karim.gpa=4.34;

Mosarof.id=103;
Mosarof.gpa=2.22;

Rahim.display() ;
Karim.display();
Mosarof.display();




getch();
}