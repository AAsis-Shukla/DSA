#include<iostream>
using namespace std;
class Student{
    private:
        int age;
        int phone;
        string email;
        float cgpa;
    public:
        string name;
        float getPercentage(int marks){
            return cgpa * 10;
        }
    // setter
    void setAge(int a){
        age = a;
    }
    // getter
    int getAge(){
        return age;
    }
};

int main(){
    Student s1; // object (s1 refers to student 1)
    s1.setAge(23) ;
    cout<<s1.getAge();
    return 0;
}