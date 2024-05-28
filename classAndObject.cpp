#include <iostream>

using namespace std;
class Student{
    public:
        int id;
        double gpa;
        
};
int main(){
    Student Alim,Selim;
    Alim.id=101;
    Alim.gpa=3.44;



    cout<<Alim.id << "  " << Alim.gpa << endl;

    Selim.id=500;
    Selim.gpa=2.33;

    cout<< Selim.id << "  " << Selim.gpa;


   return 0;

}
