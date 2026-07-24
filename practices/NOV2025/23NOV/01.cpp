#include<iostream>
using namespace std;
class Student{
    // propertites
    string name;
    int age;
    int phone;
    string email;
    float cgpa;

    // methods
    float getPercentage(int marks){
        return cgpa * 10;
    }
};
class User{
    string userId;
    string password;
    string bio;
    void deactivate(){
        cout << "deleting account !";
    }
    string changePassword(string oldPassword){
        return "new password!";
    }

};
int main(){
    Student s1; // object (s1 refers to student 1)
    Student s2;
    return 0;
}