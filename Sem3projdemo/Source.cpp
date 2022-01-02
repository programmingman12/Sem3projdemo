#include <iostream>
#include <conio.h>
#include <fstream>     //Library for data handling
#include <string>
#include <cstdio>
#include <cstdlib>
#include <ctime>     //Library to generate random numbers using Calender Time

using namespace std;




void MenuTemplate()    //Menu Template or Logo , that will be used throughout the code thus function is declared as Global function.
{
    cout << "\t\t\t\t\t\t\t\t|| \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ||" << endl;
    cout << "\t\t\t\t\t\t\t\t|| ==================================== ||" << endl;
    cout << "\t\t\t\t\t\t\t\t|| ==================================== ||" << endl;
    cout << "\t\t\t\t\t\t\t\t||                                      ||" << endl;
    cout << "\t\t\t\t\t\t\t\t|| -------City Clinic Private Ltd------ ||" << endl;
    cout << "\t\t\t\t\t\t\t\t||                                      ||" << endl;
    cout << "\t\t\t\t\t\t\t\t|| ==================================== ||" << endl;
    cout << "\t\t\t\t\t\t\t\t|| ==================================== ||" << endl;
    cout << "\t\t\t\t\t\t\t\t|| //////////////////////////////////// ||" << endl << endl << endl << endl << endl;
}








/* ******************** PARENT CLASS ******************** */
class login
{
public:
    string username, password;
    int loginAttempt = 0;
    virtual string getlogin()
    {
        while (loginAttempt < 3)
        {

            cout << "\t\t\t\t\t\t\t\tPlease enter your login credentials: " << endl;
            cout << "Enter your Username: ";
            cin >> username;
            cout << "Enter your Password: ";
            cin >> password;

            if (username == "Amna" && password == "Allie")
            {
                cout << "\t\t\t\t\t\t\t\tWelcome access granted!\n";

                break;
            }

            else
            {
                cout << "\t\t\t\tInvalid login attempt !.\n\nPlease try again.\n" << endl;
                loginAttempt++;
            }
        }
        system("cls");
        if (loginAttempt == 3)
        {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
        }
        cout << "Thank you for logging in.\n";
    }

};








/*                 ********************Child Class********************
                   'class Person' is referred as child class                           */
class Person :public login {
private:
    string name;
    string gender;
    string mobNo;
    string email;
public:


    //Default Constructor for child class
    Person() {
    }

    string getlogin()
    {
        while (loginAttempt < 3)
        {
            cout << "\n\n\t\t\t\t\t\tPlease enter your login credentials as an Incharge of Hospital: " << endl;
            cout << "\nEnter your Username for logging as incharge: ";
            cin >> username;
            cout << "\nEnter your Password: ";
            cin >> password;

            if (username == "Amna" && password == "Allie")
            {
                cout << "\t\t\t\t\t\t\t\tWelcome access granted!\n";

                break;
            }

            else
            {
                cout << "\t\t\t\tInvalid login attempt !.\n\nPlease try again.\n" << endl;
                loginAttempt++;
            }
        }
        system("cls");
        if (loginAttempt == 3)
        {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
        }
        cout << "Thank you for logging in.\n";
    }


    //Parameterized Constructor for child class
    Person(string name, string gender, string mobNo, string email, int age, int id) {
        this->name = name;
        this->gender = gender;
        this->mobNo = mobNo;
        this->email = email;
        this->age = age;
        this->id = id;
    }



    //Setter Functions
    void setName(string name) {
        this->name = name;
    }
    void setGender(string gender) {
        this->gender = gender;
    }
    void setMobNo(string mobNo) {
        this->mobNo = mobNo;
    }
    void setEmail(string email) {
        this->email = email;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setId(int id) {
        this->id = id;
    }



    //Getter Functions
    string getName() {
        return name;
    }
    string getGender() {
        return gender;
    }
    string getMobNo() {
        return mobNo;
    }
    string getEmail() {
        return email;
    }
    int getAge() {
        return age;
    }
    int getId() {
        return id;
    }
    int age;
    int id;



    //Display Function      
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Mobile No: " << mobNo << endl;
        cout << "Email: " << email << endl;
        cout << "ID: " << id << endl;
    }

};







/*                 ********************Child Class********************
        'class Patient' is referred as child class                           */
class Patient : public Person {
private:
    int id;
    int age;
    string name;
    string occupation;
    string state;
    string symptoms;
    string disease;
    string city;
    int consultation_date;
    string nationality;
    string street;
    string door_no;
    string condition;
    int date_admitted;
    int date_discharged;
    string discharge_condition;
    string bloodGroup;


public:



    //Parametrized Constructor for child class
    Patient(string name, string door_no, string condition, int date_admitted, int date_discharged, string discharge_condition, string street, string disease, string city, int consultation_date, string nationality, string state, string occupation, string gender, string mobNo, string email, int age, int id, string bloodGroup, string symptoms) :Person(name, gender, mobNo, email, age, id) {
        this->bloodGroup = bloodGroup;
        this->symptoms = symptoms;
        this->door_no = door_no;
        this->condition = condition;
        this->date_admitted = date_admitted;
        this->discharge_condition = discharge_condition;
        this->street = street;
        this->disease = disease;
        this->city = city;
        this->consultation_date = consultation_date;
        this->nationality = nationality;
        this->state = state;
        this->occupation = occupation;
    }



    // Getter Functions
    string getdischarge_condition()
    {
        return discharge_condition;
    }
    int getdate_discharged()
    {
        return date_discharged;
    }
    int getdate_admitted()
    {
        return date_admitted;
    }
    string getcondition()
    {
        return condition;
    }
    string getdoor_no()
    {
        return door_no;
    }
    string getstreet()
    {
        return street;
    }

    string getnationality()
    {
        return nationality;
    }
    int getconsultation_date()
    {
        return consultation_date;
    }
    string getcity()
    {
        return city;
    }
    string getdisease()
    {
        return disease;
    }
    string getstate()
    {
        return occupation;
    }
    string getoccupation()
    {
        return occupation;
    }
    string getBloodGroup()
    {
        return bloodGroup;
    }
    string getSymptoms()
    {
        return symptoms;
    }



    //Setter Functions
    void setcity(string city)
    {
        this->city = city;
    }
    void setdischarge_condition(string discharge_condition)
    {
        this->discharge_condition = discharge_condition;
    }
    void setdate_discharged(int date_discharged)
    {
        this->date_discharged = date_discharged;
    }
    void setdate_admitted(int date_admitted)
    {
        this->date_admitted = date_admitted;
    }
    void setcondition(string condition)
    {
        this->condition = condition;
    }
    void setdoor_no(string door_no)
    {
        this->door_no = door_no;
    }
    void setstreet(string street)
    {
        this->street = street;
    }

    void setnationality(string nationality)
    {
        this->nationality = nationality;
    }
    void setconsultation_date(int consultation_date)
    {
        this->consultation_date = consultation_date;
    }
    void setdisease(string disease)
    {
        this->disease = disease;
    }
    void setoccupation(string occupation)
    {
        this->occupation = occupation;
    }
    void setBloodGroup(string bloodGroup)
    {
        this->bloodGroup = bloodGroup;
    }
    void setSymptoms(string symptoms)
    {
        this->symptoms = symptoms;
    }
    void setstate(string state)
    {
        this->state = state;
    }



    //Default Constructor for child class named as Patient
    Patient() {
    }
    void searchpat()
    {
        int op;
        char ch;

        string ID;
        fstream fin;

        system("cls");
        MenuTemplate();

        cout << "Logging into -----PATIENT----- Portal" << endl << endl << "Option selected : 02  -> Searching Patients' Data" << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t _____________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                     |" << endl;
        cout << "\t\t\t\t\t\t\t\t|========Searching Patient File=======|" << endl;
        cout << "\t\t\t\t\t\t\t\t|_____________________________________|" << endl << endl << endl << endl;
        cout << "Enter file ID Name to search for patient" << endl;
        fflush(stdin);
        getline(cin, ID);
        fin.open(ID.c_str(), ios::in);
        if (!fin)
        {
            cout << "File not found in the system" << endl;
            cout << "Press any key to go to Main Menu" << endl;
            _getch();
            system("cls");
            menu();
        }
        if (fin)
        {
            cout << "File Found" << endl;
            cout << "Do you want to view the data of Entered File ?" << endl;
            cout << "select choice\n1. yes \n2. no" << endl;
            cin >> op;

            if (op == 1)
            {
                while (fin)
                {
                    fin.get(ch);
                    if (!fin)
                    {
                        break;
                    }
                    cout << ch;
                }
            }
        }
        cout << "Press any key to go back to Main Menu" << endl;
        _getch();
        system("cls");
        menu();
    }
    void deletepat()
    {
        string doc_name;
        char ID[100];
        string pat_name;

        system("cls");
        MenuTemplate();

        cout << "Logging into ------PATIENT----- Portal" << endl << endl << "Option selected : 03  -> Deleting Pateints' Data" << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t ____________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                    |" << endl;
        cout << "\t\t\t\t\t\t\t\t|=========Delete Patient File========|" << endl;
        cout << "\t\t\t\t\t\t\t\t|____________________________________|" << endl << endl << endl << endl;

        cout << "Enter the ID of the patient" << endl;
        fflush(stdin);
        cin.getline(ID, 100);


        if (remove(ID) != 0)
            perror("File deletion failed!");

        else
            cout << "File deleted successfully" << endl;

        cout << "press any key to back to main menu" << endl;
        _getch();
        system("cls");
        menu();
    }
    void addpat()
    {
        Patient p1;
        string name, mobNo, gender, email, bloodGroup, symptoms, ID, occp, state, city, nat, street, des, dono, patcon, con; int addate, disdate, exdate;
        ofstream fout;

        system("cls");
        MenuTemplate();
        cout << "Logging into ------PATIENT----- Portal" << endl << endl << "Option selected : 01  -> Adding Patients' Data" << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t ____________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                    |" << endl;
        cout << "\t\t\t\t\t\t\t\t|=========Adding Patient Data========|" << endl;
        cout << "\t\t\t\t\t\t\t\t|____________________________________|" << endl << endl << endl << endl;
        cout << "****************************" << endl;
        cout << "Enter Patient Information: " << endl;
        cout << "****************************" << endl;

        cout << "Enter ID of Patient" << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, ID);
    NAMe:
        try {
            cout << "Enter the Name: " << endl;
            fflush(stdin);
            getline(cin, name);
            int s = name.size();
            if (s < 3)
                throw s;
        }
        catch (int x)
        {
            cerr << " Name must Contain more than 3 alphabets\n please Enter Again\n\n" << endl;  //check for alphabets so that it doesn't throw error
            goto NAMe;
        }
        p1.setName(name);
    AGe:
        try {
            cout << "Enter the Age of Patient(In number): " << endl;
            cin >> age;
            if (age < 0)
                throw age;
        }
        catch (int age)
        {
            cerr << "Age must be a positive numbers" << endl;
            goto AGe;
        }
        p1.setAge(age);
    GENDEr:
        cout << "Enter the gender of Patient \n1 Male\n2 Female " << endl;
        int s;
        cin >> s;
        if (s = 1)
        {
            fflush(stdin);
            gender = "Male";
            p1.setGender(gender);
        }
        if (s = 2)
        {
            fflush(stdin);
            gender = "Female";
            p1.setGender(gender);
        }
        else
        {
            cout << "Please Enter According to given Instructions" << endl;
            goto GENDEr;
        }
    MOB:
        try {
            cout << "Enter the Mobile No of Patient (e.g 03*****40): " << endl;
            fflush(stdin);
            getline(cin, mobNo);
            int s = mobNo.size();
            if (s > 11)
                throw s;
        }
        catch (int s)
        {
            cerr << "Mobile number can not be a negative or greater than 11 digits" << endl;
            goto MOB;
        }
        p1.setMobNo(mobNo);
        cout << "Enter the email of Patient: " << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, email);
        p1.setEmail(email);
    BLooD:
        cout << "Enter the bloodGroup : " << endl;
        cout << "1 A+\t2 A-\t3 B+\n4 B-\t5 O+\t6 O-  \n7 AB\t8 AB-" << endl;
        int i;
        cin >> i;

        if (i = 1)
        {
            fflush(stdin);
            bloodGroup = "A+";
            p1.setBloodGroup(bloodGroup);
        }
        if (i = 2)
        {
            fflush(stdin);
            bloodGroup = "A-";
            p1.setBloodGroup(bloodGroup);
        }
        if (i = 3)
        {
            fflush(stdin);
            bloodGroup = "B+";
            p1.setBloodGroup(bloodGroup);
        }
        if (i = 4)
        {
            fflush(stdin);
            bloodGroup = "B-";
            p1.setBloodGroup(bloodGroup);
        }
        if (i = 5)
        {
            fflush(stdin);
            bloodGroup = "O+";
            p1.setBloodGroup(bloodGroup);
        }
        if (i = 6)
        {
            fflush(stdin);
            bloodGroup = "O-";
            p1.setBloodGroup(bloodGroup);
        }
        if (i = 7)
        {
            fflush(stdin);
            bloodGroup = "AB";
            p1.setBloodGroup(bloodGroup);
        }
        if (i = 8)
        {
            fflush(stdin);
            bloodGroup = "AB-";
            p1.setBloodGroup(bloodGroup);
        }
        else
        {
            cout << "Please Enter according to given instructions" << endl;
            goto BLooD;
        }
        cout << "Enter the Symptoms: " << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, symptoms);
        p1.setSymptoms(symptoms);
        cout << "Enter Occupation of Patient: " << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, occp);
        p1.setoccupation(occp);
        cout << "Enter State: " << endl;
        getline(cin, state);
        cin.ignore();
        fflush(stdin);
        p1.setstate(state);
        cout << "Enter your City: " << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, city);
        p1.setcity(city);
        cout << "enter Nationality of Patient: " << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, nat);
        p1.setnationality(nat);
        cout << "Enter Patient's Street Name: " << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, street);
        p1.setstreet(street);
        cout << "Enter Patient's Disease :" << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, des);
        p1.setdisease(des);
        cout << "Enter Patient's Door Number :" << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, dono);
        p1.setdoor_no(dono);
        cout << "Enter Patient's Condition:" << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, patcon);
        p1.setcondition(patcon);
    DATE:
        try {
            cout << "Enter Admission Date Of The Patient :" << endl;
            fflush(stdin);
            cin >> addate;
            if (addate < 0 || addate>31)
                throw addate;
        }
        catch (int x)
        {
            cerr << "Date can not be negative number or Greater than 31\nPlease Enter correct date" << endl;
            goto
                DATE;
        }
        p1.setdate_admitted(addate);
    DATe:
        try {
            cout << "Enter Discharge Date Of The Patient :" << endl;
            fflush(stdin);
            cin >> disdate;
            if (disdate < 0 || disdate>31)
                throw disdate;
        }
        catch (int x)
        {
            cerr << "Date can not be negative number or Greater than 31\nPlease Enter correct date" << endl;
            goto DATe;
        }
        p1.setdate_discharged(disdate);
        cout << "Enter Condition Of The Patient At The Time Of The Discharge :" << endl;
        fflush(stdin);
        cin.ignore();
        getline(cin, con);
        p1.setdischarge_condition(con);
    DaTE:
        try {
            cout << "Enter The Patient's Next Consultation Date :" << endl;
            fflush(stdin);
            cin >> exdate;
            if (exdate < 0 || exdate>31)
                throw exdate;
        }
        catch (int x)
        {
            cerr << "Date can not be negative number or Greater than 31\nPlease Enter correct date" << endl;
            goto DaTE;
        }
        p1.setconsultation_date(exdate);
        Patient(name, dono, patcon, addate, disdate, con, street, des, city, exdate, nat, state, occp, gender, mobNo, email, age, id, bloodGroup, symptoms);
        fout.open(ID.c_str());




        /*Diplaying all data entered by user and that data saved and managed by file handling */
        fout << "Patient's ID               : " << p1.getId() << endl;
        fout << "Patient's Name             : " << p1.getName() << endl;
        fout << "Patient's Gender           : " << p1.getGender() << endl;
        fout << "Patient's Email            : " << p1.getEmail() << endl;
        fout << "Patient's Phone No           : " << p1.getMobNo() << endl;
        fout << "Patient's Blood Group      : " << p1.getBloodGroup() << endl;
        fout << "Symptoms                 : " << p1.getSymptoms() << endl;
        fout << "Patient's Occupation     : " << p1.getoccupation() << endl;
        fout << "Patient's State          : " << p1.getstate() << endl;
        fout << "Patient's City           : " << p1.getcity() << endl;
        fout << "Patient's Nationality    : " << p1.getnationality() << endl;
        fout << "Patient's Street         : " << p1.getstreet() << endl;
        fout << "Patient's Door Number    : " << p1.getdoor_no() << endl;
        fout << "Patient's Condition       : " << p1.getcondition() << endl;
        fout << "Patient's Condition At The Time Of Discharge: " << p1.getdischarge_condition() << endl;
        fout << "Patient's Admission Date : " << p1.getdate_admitted() << endl;
        fout << "Patient's Discharge Date : " << p1.getdate_discharged() << endl;
        p1.display();
        fout.close();
        cout << "Patient Data saved Successfully...." << endl;

        cout << "press any key to back to main menu" << endl;
        _getch();
        system("cls");
        p1.menu();

    }


    void menu();
    void showallapp()
    {
        cout << "1 Dermatologist\n2 Opthalmologist\n3 Neurologist" << endl;
        int a;
        cin >> a;
        if (a == 1)
        {

            fstream fin;
            string word, filename;
            filename = "Patient_Dermatologist.txt";
            fin.open(filename.c_str());
            while (fin >> word)
            {
                cout << word << "\t\b";
            }
            _getch();
            system("cls");
            menu();
        }
        if (a == 2)
        {
            fstream fin;
            string word, filename;
            filename = "Patient_Opthalmologist.txt";
            fin.open(filename.c_str());
            while (fin >> word)
            {
                cout << word << "\t";
            }
            _getch();
            system("cls");
            menu();
        }
        if (a == 3)
        {
            fstream fin;
            string word, filename;
            filename = "Patient_Neurologist.txt";
            fin.open(filename.c_str());
            while (fin >> word)
            {
                cout << word << "\t";
            }
            _getch();
            system("cls");
            menu();
        }
        else
        {
            cout << "Please Enter Correct Option " << endl;
            _getch();
            system("cls");
            menu();
        }
    }

    //Display function
    void display() {
        Person::display();
        cout << "Blood Group: " << bloodGroup << endl;
        cout << "Symptoms: " << symptoms << endl;
    }

};







/*                 ********************Child Class********************
                    'class Doctor' is referred as child class of Parent class 'Person'                          */
class Doctor :public Person {
private:

    int code;
    int experience;
    string state;
    string city;
    string specialist;
    string designation;
    string bloodGroup;
protected:
    float fees;
public:



    //Default Constructor
    Doctor() {
        fees = 0.0;
    }



    //Parameterized Constructor
    Doctor(string name, int code, int experience, string state, string city, string gender, string mobNo, string email, int age, int id, string specialist, string designation, string bloodGroup) :Person(name, gender, mobNo, email, age, id) {
        this->bloodGroup = bloodGroup;
        this->specialist = specialist;
        this->code = code;
        this->experience = experience;
        this->state = state;
        this->city = city;
        this->designation = designation;
    }



    //Setter Functions
    void setblood(string bloodGroup)
    {
        this->bloodGroup = bloodGroup;
    }
    void setcity(string city)
    {
        this->city = city;
    }
    void setstate(string state)
    {
        this->state = state;
    }
    void setcode(int code)
    {
        this->code = code;
    }
    void setexperience(int experience)
    {
        this->experience = experience;
    }

    void setSpecialist(string specialist) {
        this->specialist = specialist;
    }
    void setDesignation(string designation) {
        this->designation = designation;
    }



    //Getter Functions
    string getblood()
    {
        return bloodGroup;
    }
    int getexperience()
    {
        return experience;
    }
    int getcode()
    {

    }
    string getstate()
    {
        return state;
    }
    string getcity()
    {
        return city;
    }
    string getSpecialist() {
        return specialist;
    }
    string getdesignation() {
        return designation;
    }



    //Display Function
    void display() {

        cout << "Refered to: " << endl;
        cout << "Specialist: " << specialist << endl;
        cout << "Designation: " << designation << endl;
    }
    void showdoctor()
    {
        Patient p1;
        int op;
        char ch;
        string file_name;
        fstream fin;

        system("cls");
        MenuTemplate();
        cout << "Logging into -----OWNER----- Portal" << endl << endl << "Option selected : 2 -> Searching Doctor File" << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t ____________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                    |" << endl;
        cout << "\t\t\t\t\t\t\t\t|========Searching Doctor File=======|" << endl;
        cout << "\t\t\t\t\t\t\t\t|____________________________________|" << endl << endl << endl << endl;
        cout << "Enter Doctor name to Search from hospital's Registry: " << endl;
        fflush(stdin);
        getline(cin, file_name);
        fin.open(file_name.c_str(), ios::in);
        if (!fin)
        {
            cout << "Doctor name is not available into system: " << endl;
            cout << "Press any key to go back to Main Menu:" << endl;
            _getch();
            system("cls");
            p1.menu();
        }
        if (fin)
        {
            cout << "File Found" << endl;
            cout << "Do you want to View the file data ?" << endl;
            cout << "Please Select given options to proceed further: \n 1.  Yes \n 2. No" << endl;
            cin >> op;

            if (op == 1)
            {
                while (fin)
                {
                    fin.get(ch);
                    if (!fin)
                    {
                        break;
                    }
                    cout << ch;
                }
            }
        }
        cout << "Press any key to go back to Main Menu:" << endl;
        _getch();
        system("cls");
        p1.menu();

    }
    void deletedoctor()

    {
        string docid;
        char doc_name[20];
        Patient p1;
        system("cls");
        MenuTemplate();

        cout << "Logging into -----OWNER----- Portal" << endl << endl << "Option selected : 3  -> Deleting Doctors' Files" << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t ____________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                    |" << endl;
        cout << "\t\t\t\t\t\t\t\t|========Removing Doctor File =======|" << endl;
        cout << "\t\t\t\t\t\t\t\t|____________________________________|" << endl << endl << endl << endl;
        cout << "Enter Name of the Doctor" << endl;
        fflush(stdin);
        cin.getline(doc_name, 20);


        cout << "Enter the ID of the Doctor" << endl;
        fflush(stdin);
        getline(cin, docid);


        if (remove(doc_name) != 0)
            perror("File deletion failed!");

        else
            cout << "File deleted successfully!" << endl;

        cout << "Press any key to go back to Main Menu:" << endl;
        _getch();
        system("cls");
        p1.menu();

    }

    void adddoctor()
    {
        Doctor d1;
        Patient p1;
        int docid;
        string name, gender, mobNo, email, bloodGroup, state, city, specialist, designation;
        ofstream fout;
        int i;
        system("cls");

        MenuTemplate();
        cout << "Logging into -----OWNER----- Portal" << endl << endl << "Option selected : 01  -> Adding Doctors' Data" << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t _____________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                     |" << endl;
        cout << "\t\t\t\t\t\t\t\t|=======Registering New Doctor ====== |" << endl;
        cout << "\t\t\t\t\t\t\t\t|_____________________________________|" << endl << endl << endl << endl;

        cout << "Register Doctor Information: " << endl;
        cout << "---------------------------" << endl;
        cout << "Enter code" << endl;
        cin >> code;
        cout << "Enter the ID" << endl;
        fflush(stdin);
        cin >> docid;
        d1.setId(docid);
    NAME:
        try {
            cout << "Enter the Name: " << endl;
            fflush(stdin);
            getline(cin, name);
            int s = name.size();
            if (s < 3)
                throw s;
        }
        catch (int x)
        {
            cerr << " Name must Contain more than 3 alphabets\n Please Try Again :" << endl;
            goto NAME;
        }
        d1.setName(name);
    AGE:
        try {
            cout << "Enter the Age (In Number): " << endl;
            cin >> age;
            if (age < 0)
                throw age;
        }
        catch (int age)
        {
            cerr << "Age should be a positive number" << endl;
            goto AGE;
        }
        d1.setAge(age);
    GENDER:

        cout << "Enter the Gender \n1 Male  \n2 Female " << endl;
        cin >> i;

        if (i = 1)
        {
            fflush(stdin);
            gender = "Male";
            d1.setGender(gender);
        }
        if (i = 2)
        {
            fflush(stdin);
            gender = "FeMale";
            d1.setGender(gender);
        }
        else
        {
            cerr << "Please Enter according to given instructions : " << endl;
            goto GENDER;
        }


    MOBNO:
        try {
            cout << "Enter the Mobile No (eg; 03****120): " << endl;
            fflush(stdin);
            getline(cin, mobNo);
            int m = mobNo.size();
            if (m > 11)
                throw m;
        }
        catch (int m)
        {
            cerr << "Please Enter according to given instructions" << endl;
            goto MOBNO;
        }
        d1.setMobNo(mobNo);
        cout << "Enter the email: " << endl;
        fflush(stdin);
        getline(cin, email);
        d1.setEmail(email);
    BLOOD:

        cout << "Enter the bloodGroup : " << endl;
        cout << "(1 A+\t2 A-\t3 B+\n4 B-\t5 O+\t6 O-  \n7 AB\t8 AB-" << endl;
        cin >> i;

        if (i = 1)
        {
            fflush(stdin);
            bloodGroup = "A+";
            d1.setblood(bloodGroup);
        }
        if (i = 2)
        {
            fflush(stdin);
            bloodGroup = "A-";
            d1.setblood(bloodGroup);
        }
        if (i = 3)
        {
            fflush(stdin);
            bloodGroup = "B+";
            d1.setblood(bloodGroup);
        }
        if (i = 4)
        {
            fflush(stdin);
            bloodGroup = "B-";
            d1.setblood(bloodGroup);
        }
        if (i = 5)
        {
            fflush(stdin);
            bloodGroup = "O+";
            d1.setblood(bloodGroup);
        }
        if (i = 6)
        {
            fflush(stdin);
            bloodGroup = "O-";
            d1.setblood(bloodGroup);
        }
        if (i = 7)
        {
            fflush(stdin);
            bloodGroup = "AB";
            d1.setblood(bloodGroup);
        }
        if (i = 8)
        {
            fflush(stdin);
            bloodGroup = "AB-";
            d1.setblood(bloodGroup);
        }
        else
        {
            cout << "Please Enter according to given instructions" << endl;
            goto BLOOD;
        }
        cout << "Enter the State in which you are living: " << endl;
        fflush(stdin);
        getline(cin, state);
        d1.setstate(state);
        cout << "Enter your city: " << endl;
        fflush(stdin);
        getline(cin, city);
        d1.setcity(city);
        cout << "Enter your Experience in Respective Field" << endl;
        fflush(stdin);
        cin >> experience;
        d1.setexperience(experience);
    SPEC:
        cout << "Enter Specialization According to given options: " << endl;
        cout << "1 Dermatologist\n2 Opthatologist\n3 Neurologist" << endl;

        cin >> i;
        if (i = 1)
        {
            fflush(stdin);
            specialist = "Dermatologist";
            d1.setSpecialist(specialist);
        }
        if (i = 2)
        {
            fflush(stdin);
            specialist = "Opthatologist";
            d1.setSpecialist(specialist);
        }
        if (i = 3)
        {
            fflush(stdin);
            specialist = "Neurologist";
            d1.setSpecialist(specialist);
        }
        else
        {
            cout << "Please Enter correct option " << endl;
            goto SPEC;
        }

        cout << "Enter designation: " << endl;
        fflush(stdin);
        cin >> designation;
        d1.setDesignation(designation);
        Doctor(name, code, experience, state, city, gender, mobNo, email, age, id, specialist, designation, bloodGroup);
        fout.open(name.c_str());
        fout << "Doctor ID                   : " << d1.getId() << endl;
        fout << "Doctor Name                 : " << d1.getName() << endl;
        fout << "Doctor Gender               : " << d1.getGender() << endl;
        fout << "Doctor Blood Group          : " << d1.getblood() << endl;
        fout << "Doctor Email                : " << d1.getEmail() << endl;
        fout << "Doctor Phone                : " << d1.getMobNo() << endl;
        fout << "Doctor State is             : " << d1.getstate() << endl;
        fout << "Doctor City is              : " << d1.getcity() << endl;
        fout << "Doctor Specialization is    : " << d1.getSpecialist() << endl;
        fout << "Doctor Experience is        : " << d1.getexperience() << endl;
        fout << "Doctor Designation is       : " << d1.getdesignation() << endl;
        fout.close();
        cout << " Data saved Successfully...." << endl;

        cout << "Press any key to go back to Main Menu:" << endl;
        _getch();
        system("cls");
        p1.menu();
    }
};







/*                 ********************Child Class********************
                    'class Dermatologist' is referred as child class of parent class 'Doctor'                           */
class Dermatologist :public Doctor {
private:
public:
    //Default Constructor
    Dermatologist()
    {
        Doctor::fees = 1500.00;
    }

    //Parameterized Constructor
    Dermatologist(string name, int code, int experience, string state, string city, string gender, string mobNo, string email, int age, int id, string specialist, string designation, float fees, string bloodGroup) :Doctor(name, code, experience, state, city, gender, mobNo, email, age, id, specialist, designation, bloodGroup) {
        this->fees = fees;
    }

    //Setter Functions
    void setFees(float fees) {
        this->fees = fees;
    }

    //Getter functions
    float getFees() {
        return fees;
    }

    //Display functions
    void displayd() {

        Doctor::display();
        cout << "Dermatologist Fees: " << fees << endl;
    }
};







/*                 ********************Child Class********************
                    'class Opthalmologist' is referred as child class for parent class 'Doctor'                           */
class Opthalmologist :public Doctor {
private:
public:
    //default constructor
    Opthalmologist()
    {
        Doctor::fees = 1000.00;
    }
    //parameterized Constructor
    Opthalmologist(string name, int code, int experience, string state, string city, string gender, string mobNo, string email, int age, int id, string specialist, string designation, float fees, string bloodGroup) :Doctor(name, code, experience, state, city, gender, mobNo, email, age, id, specialist, designation, bloodGroup) {
        this->fees = fees;
    }

    //setter function
    void setFees(float fees) {
        this->fees = fees;
    }

    float getFees()
    {
        return fees;
    }

    //display function
    void displayo() {

        Doctor::display();
        cout << "Opthalmologist Fees: " << fees << endl;
    }
};
class Neurologist :public Doctor {
private:
public:
    //default constructor
    Neurologist()
    {
        fees = 3000.00;
    }
    //parameterized Constructor
    Neurologist(string name, int code, int experience, string state, string city, string gender, string mobNo, string email, int age, int id, string specialist, string designation, float fees, string bloodGroup) :Doctor(name, code, experience, state, city, gender, mobNo, email, age, id, specialist, designation, bloodGroup) {
        this->fees = fees;
    }

    //setter function
    float setFees(float fees) {
        return fees;
    }

    float getFees()
    {
        return fees;
    }

    //display function
    void displayn() {
        Doctor::display();
        cout << "Neurologist Fees: " << fees << endl;
    }
    void makeappointment()
    {
        int choice;
        Doctor d1;
        Dermatologist de1;
        Patient p1;
        Opthalmologist op1;
        Neurologist ne1;
        system("cls");
        MenuTemplate();

        cout << "Logging into -----DOCTOR----- Portal" << endl << endl << "Option selected : 2  -> Making an Appointment" << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t _______________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                       |" << endl;
        cout << "\t\t\t\t\t\t\t\t|=======Looking for an Appointment======|" << endl;
        cout << "\t\t\t\t\t\t\t\t|_______________________________________|" << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t|      1. Dermatologist               |" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                     |" << endl;
        cout << "\t\t\t\t\t\t\t\t|      2. Opthalmologist              |" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                     |" << endl;
        cout << "\t\t\t\t\t\t\t\t|      3. Neurologist                 |" << endl;
        cout << "\tSelect any Option from above: " << endl;
        cin >> choice;

        if (choice == 1)
        {
            string namee;
            int sel;
            cout << "Wait !!!" << endl << "  Have you Added your information before: " << endl << "Press 1 for YES\nPress 2 for NO" << endl;
            cout << "Please Select your option" << endl;
            cin >> sel;
            if (sel == 1)
            {
                srand(time(0));
                int i;
                i = (rand() % 50) + 1;
                ofstream fout1;

                cout << "Enter the Name of the Patient" << endl;
                fflush(stdin);
                getline(cin, namee);
                fout1.open("Patient_Dermatologist.txt", ios::out | ios::in | ios::app);
                if (fout1)
                {
                    fout1 << "Patient id is " << i << "\t";
                    fout1 << "Patient name is " << namee << endl;
                    fout1 << "Doctor consultation fees is " << de1.getFees() << endl;
                }
                Dermatologist();
                cout << "Your appointment has been fixed." << endl;
                cout << "Your checkup number is : " << i << endl;
                cout << "Consultation fees of doctor is: " << de1.getFees() << endl;
                fout1.close();
            }
            else
            {
                cout << "Please first add your Information to the tab ( Add New Patient)" << endl;
                cout << "Press Enter to go to Main Menu to add patient information" << endl;
                _getch();
                system("cls");
                p1.menu();
            }
        }

        else if (choice == 2)
        {
            int sel;
            string namee;
            ofstream fout2;
            cout << "Have you added your information before ? " << endl << "1. yes\n2. no" << endl;
            cout << "Select any desired Option" << endl;
            cin >> sel;
            if (sel == 1)
            {
                srand(time(0));
                int i;
                i = (rand() % 50) + 1;

                cout << "Enter the Name of the Patient" << endl;
                fflush(stdin);
                getline(cin, namee);

                fout2.open("Patient_Opthalmologist.txt", ios::out | ios::in | ios::app);
                if (fout2)
                {
                    fout2 << "Patient id is " << i << "\t";
                    fout2 << "Name of Patient is " << namee << endl;
                    fout2 << "Consultation fees of doctor is: " << op1.getFees() << endl;
                }
                Opthalmologist();
                cout << "Your appointment has been fixed" << endl;
                cout << "Your checkup number is : " << i << endl;
                cout << "Fees to pay : " << op1.getFees() << endl;
                fout2.close();
            }
            else
            {
                cout << "Please First add your information to the tab( Add New Patient)" << endl;
                cout << "Press enter to go to Main Menu to add Patient information" << endl;
                _getch();
                system("cls");
                p1.menu();
            }
        }
        else
        {
            int sel;
            string namee;
            cout << "Have you added your information before: " << endl << "1. yes\n2. no" << endl;
            cout << "Please select desired option" << endl;
            cin >> sel;
            if (sel == 1)
            {
                fstream fout3;
                srand(time(0));
                int i;
                i = (rand() % 50) + 1;

                cout << "Enter the name of the patient" << endl;
                fflush(stdin);
                getline(cin, namee);

                fout3.open("Patient_Neurologist.txt", ios::out | ios::in | ios::app);
                if (fout3)
                {
                    fout3 << "Patient id is: " << i << endl;
                    fout3 << "Patient name is " << namee << endl;
                    fout3 << "Consultation fees of doctor is: " << ne1.getFees() << endl;
                }
                Neurologist();
                cout << "Your appointment has been fixed" << endl;
                cout << "Your checkup number is : " << i << endl;
                cout << "Fees to pay : " << ne1.getFees() << endl;
                fout3.close();
            }
            else
            {
                cout << "Please First add your information to the tab( Add New Patient)" << endl;
                cout << "Press enter to go to Main Menu to add Patient information" << endl;
                _getch();
                system("cls");
                p1.menu();
            }
        }
        cout << "Press any key to go to Main Menu" << endl;
        _getch();
        system("cls");
        p1.menu();
    }
    void checkavail()
    {
        Patient p1;
        system("cls");
        MenuTemplate();

        cout << "Logging into -----DOCTOR----- Portal" << endl << endl << "Option selected : 01  -> Doctors Available at the moment" << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t ____________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                    |" << endl;
        cout << "\t\t\t\t\t\t\t\t|========Doctors' Availability=======|" << endl;
        cout << "\t\t\t\t\t\t\t\t|____________________________________|" << endl << endl << endl << endl;
        srand(time(0));
        int i;
        i = (rand() % 3) + 1;

        if (i == 1)
        {
            cout << "Doctors Available at the moment: " << endl;
            cout << "---------------------------------" << endl;
            cout << "\n\t=> Dermatologist" << endl;
            cout << "\t\tTiming ( 12:00PM TO 04:00PM)\n" << endl;
        }
        else if (i == 2)
        {
            cout << "Doctors Available at the moment: " << endl;
            cout << "---------------------------------" << endl;
            cout << "\n\t=> Dermatologist" << endl;
            cout << "\t\tTiming ( 12:00PM TO 04:00PM)\n" << endl;
            cout << "\t\t=> NeuroLogist" << endl;
            cout << "\t\tTiming ( 09:00AM  TO 11:00AM)\n" << endl;
        }
        else
        {
            cout << "Doctors Available at the moment: " << endl;
            cout << "---------------------------------" << endl;
            cout << "\n\t\t=> Dermatologist" << endl;
            cout << "\t\tTiming ( 12:00PM TO 04:00PM)\n" << endl;
            cout << "\t\t=> NeuroLogist" << endl;
            cout << "\t\tTiming ( 09:00AM  TO 11:00AM)\n" << endl;
            cout << "\t\t=> Opthalmologist" << endl;
            cout << "\t\tTiming ( 04:00PM TO 09:00PM)\n" << endl;
        }

        cout << "press any key to go to Main Menu" << endl;
        _getch();
        system("cls");
        p1.menu();
    }
};
void Patient::menu()
{
    int experience, age, id, choice, code;
    Doctor doc1;
    Patient p1;
    Neurologist ne1;
    Opthalmologist op1;
    Dermatologist d1;

    MenuTemplate();

    cout << "Please Enter your choice" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t|      1. Owner              |" << endl;
    cout << "\t\t\t\t\t\t\t\t|                            |" << endl;
    cout << "\t\t\t\t\t\t\t\t|      2. Doctor             |" << endl;
    cout << "\t\t\t\t\t\t\t\t|                            |" << endl;
    cout << "\t\t\t\t\t\t\t\t|      3. Patient            |" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:

    {
        Person per;
        per.getlogin();
        system("cls");
        MenuTemplate();

        cout << "\t\t\t\t\t\t\t\t ____________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                    |" << endl;
        cout << "\t\t\t\t\t\t\t\t|=======Welcome to Owner Portal======|" << endl;
        cout << "\t\t\t\t\t\t\t\t|____________________________________|" << endl << endl << endl << endl << "Please select the desired option given below:" << endl;

        cout << "\t\t\t\t\t\t\t\t|       1. Register New Doctor           |" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                        |" << endl;
        cout << "\t\t\t\t\t\t\t\t|       2. Check Doctor File             |" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                        |" << endl;
        cout << "\t\t\t\t\t\t\t\t|       3. Delete Doctor File            |" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                        |" << endl;
        cout << "\t\t\t\t\t\t\t\t|       4. View All Appointments         |" << endl;
        cin >> choice;
    }
    switch (choice)
    {
    case 1:
    {

        Doctor d1;
        d1.adddoctor();
        system("cls");
        break;
    }
    case 2:
    {
        Doctor d1;
        d1.showdoctor();
        system("cls");
        break;
    }
    case 3:
    {
        Doctor d1;
        d1.deletedoctor();
        system("cls");
        break;
    }
    case 4:
    {
        Patient p1;
        p1.showallapp();
        break;
    }
    default:
    {
        cout << "Please enter correct option" << endl;
        _getch();
        system("cls");
        p1.menu();
        break;
    }

    }case 2:


        system("cls");
        MenuTemplate();

        cout << "\t\t\t\t\t\t\t\t _____________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                     |" << endl;
        cout << "\t\t\t\t\t\t\t\t|=======Welcome to Doctor Portal======|" << endl;
        cout << "\t\t\t\t\t\t\t\t|_____________________________________|" << endl << endl << endl << endl << "Please select the desired option given below:" << endl;
        cout << "\t\t\t\t\t\t\t\t|      1. Check Doctor Availability      |" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                        |" << endl;
        cout << "\t\t\t\t\t\t\t\t|      2. Make an Appointment            |" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                        |" << endl;
        cout << "\t\t\t\t\t\t\t\t|      3. Exit                           |" << endl;

        cin >> choice;
        switch (choice)
        {

        case 1:
        {
            Neurologist ne1;
            ne1.checkavail();
            break;
        }
        case 2:
        {
            Neurologist ne1;
            ne1.makeappointment();
            break;
        }
        case 3:
            exit(0);
        default:
            cout << "Please enter correct option" << endl;
            _getch();
            system("cls");
            menu();
        }
    case 3:

        system("cls");
        MenuTemplate();

        cout << "\t\t\t\t\t\t\t\t ______________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                      |" << endl;
        cout << "\t\t\t\t\t\t\t\t|=======Welcome to Patient Portal======|" << endl;
        cout << "\t\t\t\t\t\t\t\t|______________________________________|" << endl << endl << endl << endl << "Please select the desired option given below:" << endl;;
        cout << "\t\t\t\t\t\t\t\t|      1. Add New Patient                |" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                        |" << endl;
        cout << "\t\t\t\t\t\t\t\t|      2. Check Patient file             |" << endl;
        cout << "\t\t\t\t\t\t\t\t|                                        |" << endl;
        cout << "\t\t\t\t\t\t\t\t|      3. Delete patient file            |" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Patient p1;
            p1.addpat();
            break;
        }

        case 2:
        {
            Patient p1;
            p1.searchpat();
            break;
        }
        case 3:
        {
            Patient p1;
            p1.deletepat();
            break;
        }
        default:
            cout << "Please enter correct option" << endl;
            _getch();
            system("cls");
            menu();
        }
    }
}
int main()
{
    system("color 6");
    login log;
    log.getlogin();
    Patient p1;
    cout << "\t\t\t\t\t\t\t\t\t\t WELCOME TO..." << endl << endl;
    cout << "\t\t\t\t\t   _____   _____   _______  __     __     _____   _        _____   _   _   _____    _____ " << endl;
    cout << "\t\t\t\t\t  / ____| |_   _| |__   __| \\ \\   / /    / ____| | |      |_   _| | \\ | | |_   _|  / ____|" << endl;
    cout << "\t\t\t\t\t | |        | |      | |     \\ \\_/ /    | |      | |        | |   |  \\| |   | |   | |     " << endl;
    cout << "\t\t\t\t\t | |        | |      | |      \\   /     | |      | |        | |   | . ` |   | |   | |     " << endl;
    cout << "\t\t\t\t\t | |____   _| |_     | |       | |      | |____  | |____   _| |_  | |\\  |  _| |_  | |____ " << endl;
    cout << "\t\t\t\t\t  \\_____| |_____|    |_|       |_|       \\_____| |______| |_____| |_| \\_| |_____|  \\_____|" << endl << endl;

    cout << "\t\t\t\t\t\t\t\t\t     + (339732) Fatima Humayun             " << endl;
    cout << "\t\t\t\t\t\t\t\t\t     + (340436) Jawad Ahmed                " << endl << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\t     + () Talha Khan                " << endl << endl << endl << endl;


    cout << "\t\t\t\t\t\t\t\t\t     Press Any Key to Start: " << endl;


    _getch();
    system("cls");
    p1.menu();
    system("pause");
}








