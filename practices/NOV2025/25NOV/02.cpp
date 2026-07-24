#include<iostream>
using namespace std;
class User{
    int id;
    string password;
public:
    string username;
    User(string username, int id, string password){
        this->username = username;
        this->id = id;
        this->password = password;
    }
    // Setter
    void setPassword(string password){
        this->password = password;
    }
    void getPassword(){
        cout<<password<<endl;
    }
};
int main(){
    User amit("amit123",10012,"amit@90");
    amit.getPassword();
    amit.setPassword("changed123");
    amit.getPassword();
    return 0;
}