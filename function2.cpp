#include<iostream>
using namespace std;
int login(){
    int useruserid;
    char userpassword;
    int apikey =1234;
    cout << "Enter userid: ";
    cin >> useruserid;
    cout << "Enter password: ";
    cin >> userpassword;

    if(useruserid == 234 && userpassword == '&')
        return apikey;
    else
        return -1;
}
void getData(){

    cout << "Name : Shashvat Singh" << endl;
    cout << "Gender : Male" << endl;
    cout << "Age : 19" << endl;
}

int main(){
    cout << " ................Welcome to our code................" << endl;
    cout << " enter your userid and password to get the apikey " << endl;
    int apikey = login();
    if (apikey == 1234){
        getData();
    }
    else{
        cout << " The apikey did not match "<< endl;
        cout << " The userid and password are wrong or invalid " << endl;
        return 0;
    }
}