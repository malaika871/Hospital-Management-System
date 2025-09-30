#include<iostream>
#include<string>
using namespace std;

class Patient
{
private:
    string fname;
    string lname;
    string gender;
    string address;
    string phoneNo;
    string gmail;
    int DoB, age;
public:
    Patient();
    Patient(string fname, string lname, string address, string phoneNo, string gmail, int age, int DoB);
    void getPatientInfo();
    void showPatientInfo();
};
