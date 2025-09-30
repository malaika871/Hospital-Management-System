#include"patient.h"
Patient:: Patient(){
    fname = "";
    lname = "";
    gender = "";
    address = "";
    gmail = "";  
}
Patient :: Patient(string fname, string lname, string address, string phoneNo, string gmail, int age, int DoB)
{
        fname = this->fname;
        lname = this->lname;
        gender = this->gender;
        address = this->address;
        gmail = this->gmail;
        DoB = this->DoB;
        age = this->age;
        this->phoneNo = phoneNo;
}
void Patient:: getPatientInfo(){

    cout<<"Enter First Name: "<< endl;
    getline(cin, fname);

    cout<<"Enter last Name: "<< endl;
    getline(cin, lname);

    cout<<"Enter your gender: "<< endl;
    getline(cin, gender);

    cout<<"Enter your address: "<< endl;
    getline(cin, address);

    cout<<"Enter your G-mail account: "<< endl;
    getline(cin, gmail);

    cout<<"Enter your date of birth: "<< endl;
    cin >> DoB;

    cout<<"Enter your age: "<< endl;
    cin >> age;

}

void showPatientInfo(){}