#include <iostream>
using namespace std;
class Person{
public: string name; int age;
    void show(){ cout<<name<<" Age: "<<age<<endl; }
};
class Student : public Person{ public: int marks; };
class Patient : public Person{ public: string disease; };
int main(){
    Student s; s.name="Hammad"; s.age=19; s.marks=95;
    Patient p; p.name="Ali"; p.age=30; p.disease="Fever";
    cout<<"--- SUPER SOFTWARE ---\n";
    cout<<"Student: "; s.show(); cout<<"Marks: "<<s.marks<<endl;
    cout<<"Patient: "; p.show(); cout<<"Disease: "<<p.disease<<endl;
    cout<<"its Inheritance - 1 Code  2 Work!"<<endl;
    return 0;
}
