#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int marks;
    public:

        Student(string name, int age, int marks){
            this->name = name;

            if(age >= 0){
                this->age  = age;
            }
            else{
                this->age = 0;
            }

            if(marks>=0 && marks<= 100){
                this->marks = marks;
            }
            else{
                this->marks = 0;
            }
        }

        int getAge(){
            return age;
        }

        int getMarks(){
            return marks;
        }
};

int main(){
    Student s("bunny", 19, 93);

    cout<<s.getAge()<<endl;
    cout<<s.getMarks()<<endl;

    return 0;
}