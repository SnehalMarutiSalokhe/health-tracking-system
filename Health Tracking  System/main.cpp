#include <bits/stdc++.h>
#include <windows.h>
#include <string>
#include <cctype>

#include "Appoinment.h"
#include "Analysis.h"
#include "Welocme.h"
using namespace std;

void Print_wellcome();

bool containsNonAlphabetic(const string &str);// cheacking the name of user

bool containsNonAlphabetic(const string &str)
{
    for (char c : str)
    {
        if (!isalpha(c))
        {
            return true;
        }
    }
    return false;
}

class User
{

public:
    string name;
    int sugarlevel_BF, sugarlevel_AF, systolic_bp, diastolic_bp;
    float temperature_F, temperature_celci, height, weight;

    void get_user_data()
    {
        cout << "_________________________________________________________\n";
        cout << "_________________________________________________________";
        cout << "\n\nEnter your Details\n\n";
        cout << "\n_____________________WARNING!!___________________________\n";
       
        cout << "\nDont Enter any character in number section \n\n";
         cout << "_________________________________________________________";
        // Input section

      

        while (true)
        {
            cout << "\n\nEnter your good name please: ";
            cin >> name;

            if (containsNonAlphabetic(name))
            {

                cout << "\nInvalid input! Please enter only alphabetic characters." << endl;
            }
            else
            {
                break;
            }
        }

        cout << "Enter the sugar level before breakfast: ";
        cin >> sugarlevel_BF;

        cout << "Enter the sugar level after breakfast: ";
        cin >> sugarlevel_AF;

        cout << "Enter the systolic blood pressure: ";
        cin >> systolic_bp;

        cout << "Enter the diastolic blood pressure: ";
        cin >> diastolic_bp;

        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temperature_F;

        cout << "Enter the height: ";
        cin >> height;

        cout << "Enter the weight: ";
        cin >> weight;
         
        // Conversion and calculation
        float temperature_celsius = (temperature_F - 32) * 5 / 9;

        // Output section
        
        cout << "\n_________________________________________________________\n";

        cout << "\n----- Health Report -----\n";
        cout << "\n_________________________________________________________\n\n";
        cout << fixed << setprecision(2);
        cout << "Sugar Level (Before Breakfast): " << sugarlevel_BF << endl;
        cout << "Sugar Level (After Breakfast): " << sugarlevel_AF << endl;
        cout << "Systolic Blood Pressure: " << systolic_bp << endl;
        cout << "Diastolic Blood Pressure: " << diastolic_bp << endl;
        cout << "Temperature (Fahrenheit): " << temperature_F << endl;
        cout << "Temperature (Celsius): " << temperature_celsius << endl;
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;

        //code for giving output to the user with its persenlized text file
        string outputFilename = name + "HealthHistory.txt";//creating file for user
        ofstream outputFile(outputFilename, ios::app);
        outputFile << "\n_________________________________________________________\n";

        outputFile << "\n------------------- Health Report -----------------------\n";
        outputFile << "\n_________________________________________________________\n\n";
       
        outputFile << "Sugar Level (Before Breakfast): " << sugarlevel_BF << endl;
        outputFile << "Sugar Level (After Breakfast): " << sugarlevel_AF << endl;
        outputFile << "Systolic Blood Pressure: " << systolic_bp << endl;
        outputFile << "Diastolic Blood Pressure: " << diastolic_bp << endl;
        outputFile << "Temperature (Fahrenheit): " << temperature_F << endl;
        outputFile << "Temperature (Celsius): " << temperature_celsius << endl;
        outputFile << "Height: " << height << endl;
        outputFile << "Weight: " << weight << endl;
    }
};

/*APPOINMENT*/
int bookAppointment();
int existingAppointment();
int appoinment_call();

bool checksugar_BF(int sugarlevel_BF, const string& filename);
bool checksugar_AF(int sugarlevel_AF, const string& filename);
bool systolic_bp(int bp, const string& filename);
bool diastolic_bp(int bp, const string& filename);
bool temperature_F(float temp, const string& filename);
bool temperature_celci(float temp, const string& filename);
bool calBMI(float height, float weight, const string& filename);



int main()
{
    Print_wellcome(); // welcome function
 
  User u1;
    u1.get_user_data();

  // code for taking the choice from user that which type of helth he/ she wants to identify

    int choice;  

    while ((choice < 1) || (choice>4) )
    {
        cout << "\n1.Sugar\n2.Blood Pressure\n3.Fever\n4.Calculate Your BMI\n";
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            bool status_sugarlevel_BF;
            bool status_sugarlevel_AF;
            status_sugarlevel_BF = checksugar_BF(u1.sugarlevel_BF,u1.name);
            status_sugarlevel_AF = checksugar_BF(u1.sugarlevel_AF,u1.name);
            if((status_sugarlevel_BF && status_sugarlevel_AF) == false)  appoinment_call();
        }
        break;
        case 2:
        {
            bool status_systolic_bp;
            bool status_diastolic_bp;
            status_systolic_bp = systolic_bp(u1.systolic_bp,u1.name);
            status_diastolic_bp = diastolic_bp(u1.diastolic_bp,u1.name  );          
            if((status_systolic_bp && status_diastolic_bp) == false)  appoinment_call();
         }
         break;
        case 3:
        {
            bool status_temperature_F;
            bool status_temperature_celci;
            status_temperature_F = temperature_F(u1.temperature_F,u1.name);
            status_temperature_celci = temperature_celci(u1.temperature_celci,u1.name );   
            if((status_temperature_F || status_temperature_celci) == false)  appoinment_call();      
        }
        break;
        case 4:
        {
            if(calBMI(u1.height, u1.weight,u1.name) == false)  appoinment_call();      

        }
        break;

        default:
        {
            cout << "\nYou entered wrong choice !!\n";
        }
        break;
        }

        cout<<"\n\nIf You Want to Try Again About another health section\n then Enter 1   : ";
        int again=1;
        cin>>again;

        if (again==0)
        {
            exit(0);
        }else{
           choice =5;
        }
    }

    return 0;
}