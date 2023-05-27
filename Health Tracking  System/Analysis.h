#pragma once
#include <bits/stdc++.h>
#include <windows.h>
#include <string>
#include <cctype>
using namespace std;




bool checksugar_BF(int sugarlevel_BF, const string& filename)
{
     string outputFilename = filename + "Analysis.txt";
    ofstream outputFile(outputFilename, ios::app);// Open the specified output file
    
    if (!outputFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return false;
    }
    
    if (sugarlevel_BF <= 70)
    {
        outputFile << "\nYour fasting blood sugar level below 70mg/dl"
                   << "\nWhich is low and can harm ";
        cout << "\nYour fasting blood sugar level below 70mg/dl"
                   << "\nWhich is low and can harm ";
        outputFile.close();  // Close the output file
        return false;
    }
    else if (sugarlevel_BF >= 70 && sugarlevel_BF <= 110)
    {
        outputFile << "\nYour fasting blood sugar is in between 70 to 110mg/dl"
                   << "\nwhich is normal for peoples ";
        cout << "\nYour fasting blood sugar is in between 70 to 110mg/dl"
                   << "\nwhich is normal for peoples ";
        outputFile.close();  // Close the output file
        return true;
    }
    else if (sugarlevel_BF >= 110)
    {
        outputFile << "\nYour fasting blood sugar level is more than 110mg/dl"
                   << "\nWhich is high and can harm ";
        cout << "\nYour fasting blood sugar level is more than 110mg/dl"
                   << "\nWhich is high and can harm ";
        outputFile.close();  // Close the output file
        return false;
    }
}


bool checksugar_AF(int sugarlevel_AF, const string& filename)
{

     string outputFilename = filename + "Analysis.txt";
    ofstream outputFile(outputFilename, ios::app);// Open the specified output file
    
    if (!outputFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return false;
    }

    if (sugarlevel_AF <= 90)
    {
        cout << "\nYour blood sugar level after meal below 90mg/dl"
             << "\nWhich is low and can harm you";
        outputFile << "\nYour blood sugar level after meal below 90mg/dl"
             << "\nWhich is low and can harm you";
        return false;
    }
    else if (sugarlevel_AF >= 90 && sugarlevel_AF <= 130)
    {
        cout << "\nYour blood sugar level after meal is in between 90 to 130mg/dl "
             << "\nwhich is normal for peoples ";
        outputFile << "\nYour blood sugar level after meal is in between 90 to 130mg/dl "
             << "\nwhich is normal for peoples ";
        return true;
    }
    else if (sugarlevel_AF >= 130)
    {
        cout << "\nYour blood sugar level after meal is more than 130mg/dl"
             << "\nWhich is high and can harm you ";
        outputFile << "\nYour blood sugar level after meal is more than 130mg/dl"
             << "\nWhich is high and can harm you ";
        return false;
    }
}



bool systolic_bp(int bp, const string& filename)
{   
     string outputFilename = filename + "Analysis.txt";
    ofstream outputFile(outputFilename, ios::app);// Open the specified output file
    
    if (!outputFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return false;
    }

    if (bp <= 120)
    {
        cout << "\nYour systolic blood pressure is less than 120 mm/hg"
             << "\nWhich is normal";
        outputFile << "\nYour systolic blood pressure is less than 120 mm/hg"
             << "\nWhich is normal";
        return true;
    }
    else if (bp > 120 && bp > 130)
    {
        cout << "\nYour systolic blood pressure is between 120 mm/hg and 130 mm/hg"
             << "\nWhich is elevated :";
        outputFile << "\nYour systolic blood pressure is between 120 mm/hg and 130 mm/hg"
             << "\nWhich is elevated :";
        return false;
    }

    else if (bp >= 130 && bp <= 139)
    {
        cout << "\nYour systolic blood pressure is between 120 mm/hg and 130 mm/hg"
             << "\nWhich is high blood pressure and hypertension stage 2";
        outputFile << "\nYour systolic blood pressure is between 120 mm/hg and 130 mm/hg"
             << "\nWhich is high blood pressure and hypertension stage 2";
        return false;
    }
    else if (bp >= 140)
    {
        cout << "\nYour systolic blood pressure is higher 140 mm/hg means high blood pressure"
             << "\nWhich is second stage of highper tension";
        outputFile << "\nYour systolic blood pressure is higher 140 mm/hg means high blood pressure"
             << "\nWhich is second stage of highper tension";
        return false;
    }
    else if (bp > 180)
    {
        cout << "\nYour systolic blood pressure is higher than 180 mm/hg means high blood pressure"
             << "\nWhich is hypertensive crisis and you should consult your doctor immediately";
        outputFile << "\nYour systolic blood pressure is higher than 180 mm/hg means high blood pressure"
             << "\nWhich is hypertensive crisis and you should consult your doctor immediately";
        return false;
    }
}



bool diastolic_bp(int bp, const string& filename)
{
     string outputFilename = filename + "Analysis.txt";
    ofstream outputFile(outputFilename, ios::app);// Open the specified output file
    
    if (!outputFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return false;
    }

    if (bp <= 80)
    {
        cout << "\nYour diastolic blood pressure is less than 80 mm/hg"
             << "\nWhich is normal";
        outputFile << "\nYour diastolic blood pressure is less than 80 mm/hg"
             << "\nWhich is normal";
        return true;
    }
    else if (bp <= 80)
    {
        cout << "\nYour diastolic blood pressure less than 80 mm/hg and 130 mm/hg"
             << "\nWhich is lower than normal";
        outputFile << "\nYour diastolic blood pressure less than 80 mm/hg and 130 mm/hg"
             << "\nWhich is lower than normal";
        return false;
    }
    else if (bp >= 80 && bp <= 89)
    {
        cout << "\nYour diastolic blood pressure is between 80 mm/hg and 89mm/hg means high blood pressure"
             << "\nwhich is first stage of highper tension";
        outputFile << "\nYour diastolic blood pressure is between 80 mm/hg and 89mm/hg means high blood pressure"
             << "\nwhich is first stage of highper tension";
        return false;
    }

    else if (bp > 120)
    {
        cout << "\nYour diastolic blood pressure is higher than 120 mm/hg means high blood pressure "
             << "\nwhich is hypertensive crisis and you should consult your doctor immediately";
        outputFile << "\nYour diastolic blood pressure is higher than 120 mm/hg means high blood pressure "
             << "\nwhich is hypertensive crisis and you should consult your doctor immediately";
        return false;
    }
}


bool temperature_F(float temp, const string& filename)
{
     string outputFilename = filename + "Analysis.txt";
    ofstream outputFile(outputFilename, ios::app);// Open the specified output file
    
    if (!outputFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return false;
    }

    if (temp <= 95)
    {
        cout << "\nYour body temperature is lower than average which cause hypothermia and need seek care";
        outputFile << "\nYour body temperature is lower than average which cause hypothermia and need seek care";
        return false;
    }
    else if (temp >= 95.1 && temp <= 96.9)
    {
        cout << "\nYour body temperature is low but possibly normal";
        outputFile << "\nYour body temperature is low but possibly normal";
        return true;
    }
    else if (temp >= 97 && temp <= 98.6)
    {
        cout << "\nYour body temperature is normal";
        outputFile << "\nYour body temperature is normal";
        return true;
    }
    else if (temp >= 98.6 && temp <= 100.4)
    {
        cout << "\nYou have normal or low grade fever";
        outputFile << "\nYou have normal or low grade fever";
        return false;
    }
    else if (temp >= 100.4 && temp <= 103)
    {
        cout << "\nYour body temerpature is high means you have fever";
        outputFile << "\nYour body temerpature is high means you have fever";
        return false;
    }
    else if (temp > 103)
    {
        cout << "\nYou have high feaver and need to call your doctor immediately";
        outputFile << "\nYou have high feaver and need to call your doctor immediately";
        return false;
    }
}


bool temperature_celci(float temp, const string& filename)
{
     string outputFilename = filename + "Analysis.txt";
    ofstream outputFile(outputFilename, ios::app);// Open the specified output file
    
    if (!outputFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return false;
    }

    if (temp <= 35.9)
    {

        cout << "\nYour body temperature is lower than average";
        outputFile << "\nYour body temperature is lower than average";
        return false;
    }
    else if (temp >= 36 && temp <= 37)
    {
        cout << "\nYour body temperature is normal";
        outputFile << "\nYour body temperature is normal";
        return true;
    }
    else if (temp >= 37.1 && temp <= 38)
    {
        cout << "\nYour body temperature is higher than average";
        outputFile << "\nYour body temperature is higher than average";
        return false;
    }
    else if (temp > 38.1)
    {
        cout << "\nYou have feaver";
        outputFile << "\nYou have feaver";
        return false;
    }
}

bool calBMI(float height, float weight, const string& filename)
{
     string outputFilename = filename + "Analysis.txt";
    ofstream outputFile(outputFilename, ios::app);// Open the specified output file
    
    if (!outputFile)
    {
        cerr << "Error opening file: " << filename << endl;
       
    }
    float BMI;
    BMI = (weight * 703) / (height * height);
    cout<<"your BMI is : "<<BMI;
    if (BMI <= 18.5)
    {
        outputFile << "\nYou are underweight";
        cout << "\nYou are underweight";

        return false;
    }
    else if (BMI <= 24.9)
    {
        outputFile << "\nYou are Normal";
        cout << "\nYou are Normal";
        return true;
    }
    else if (BMI <= 29.9)
    {
        outputFile << "\nYou are overweight";
        cout << "\nYou are overweight";
         return false;
    }
    else
    {
        outputFile << "\nYou are obese";
        cout << "\nYou are obese";
         return false;
    }
}
