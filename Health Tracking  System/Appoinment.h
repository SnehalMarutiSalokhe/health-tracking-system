#include <bits/stdc++.h>
#include <windows.h>
#include <string>
#include <cctype>

using namespace std;



int bookAppointment()
{
   

    cout << "\n ----- Book Your Appointment ---- \n";
    cout << "\n ----- Availbale slots ---- \n";

    // check if record already exist..
    ifstream read;
    read.open("appointment.dat");

    int hoursbook = 8;

    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int recordFound = 0;

    if (read)
    {
        string line;
        char key = 'A';
        int i = 9;

        while (getline(read, line))
        /*is used to read a line of text from an input stream
         (read) and store it in a string variable (line).*/
        {
            char temp = line[0];
            int index = (temp - 65);
            arr[index] = 1;
            recordFound = 1;
        }
        if (recordFound == 1)
        {
            cout << "\n Appointment Summary by hours:";
            char key = 'A';
            int hours = 9;
            for (int i = 0; i <= 12; i++)
            {
                if (i == 0)
                {
                    if (arr[i] == 0)
                        cout << "\n " << key << "-> 0" << hours << ":00 O' Clock - Available";
                    else
                        cout << "\n " << key << "-> 0" << hours << ":00 O' Clock - Booked";
                }

                else
                {
                    if (arr[i] == 0)
                        cout << "\n " << key << "->" << hours << ":00 O' Clock  - Available";
                    else
                        cout << "\n " << key << "->" << hours << ":00 O' Clock  - Booked";
                }
                hours++;
                key++;
            }
        }

        read.close();
    }
    if (recordFound == 0)
    {
        cout << "\n Appointment Available for following hours :";
        char key = 'A';
        for (int i = 9; i <= 21; i++)
        {
            if (i == 9)
                cout << "\n " << key << " -> 0" << i << ":00 O' Clock - Available";
            else
                cout << "\n " << key << " -> " << i << ":00 O' Clock - Available";
            key++;
        }
    }

    char choice;
    cout << "\n\n Input your choice : ";
    cin >> choice;

    // if (!(choice >= 'A' && choice <= 'k'))
    // {
    //     cout << "\n Error : Invalid Selection";
    //     cout << "\n Please selction correct value from menu A- K";
    //     cout << "\n Press any key to continue";
    //     getchar();
    //     getchar();
        
    //     bookAppointment();
    
    // }

    int index = (choice - 65);
    int isBooked = 1;
    if (arr[index] == 0)
        isBooked = 0;

    if (isBooked == 1)
    {
        cout << "\n Error : Appointment is already booked for this Hour";
        cout << "\n Please select different time !!";
        cout << "\n Press any key to continue!!";
        getchar();
        getchar();
        
        bookAppointment();
    }

    string name;
    cout << "\n Enter your first name:";
    cin >> name;

    ofstream out;
    out.open("appointment.dat", ios::app);

    if (out)
    {//updating the data in file
        out << choice << ":" << name.c_str() << "\n";
        out.close();
        cout << "\n Appointment booked for  : " << (choice - 65) + 9 << ":00 O' Clock successfully !!";
    }
    else
    {
        cout << "\n Error while saving booking";
    }

    cout << "\n Please any key to continue..";
    getchar();
    getchar();
    return 0;
}

/*
int existingAppointment()
{
   
    cout << "\n ----- Appointments Summary ---- \n";
    // check if record already exist..
    ifstream read;
    read.open("appointment.dat");

    int hoursbook = 8;

    int arr[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int recordFound = 0;

    if (read)
    {
        string line;
        char key = 'A';
        int i = 9;

        while (getline(read, line))
        {
            char temp = line[0];
            int index = (temp - 65);
            arr[index] = 1;
            recordFound = 1;
        }
        if (recordFound == 1)
        {
            cout << "\n Appointment Summary by hours:";
            char key = 'A';
            int hours = 9;
            for (int i = 0; i <= 12; i++)
            {
                
                if (arr[i] == 0)
                    cout << "\n " << key << "->" << hours << ":00 O' Clock  -Available";
                else
                    cout << "\n " << key << "->" << hours << ":00 O' Clock  - Booked";
                hours++;
                key++;
            }
        }

        read.close();
    }
    else
    {
        char key = 'A';
        for (int i = 9; i <= 21; i++)
        {
            if (i == 9)
                cout << "\n " << key << " -> 0" << i << ":00 O' Clock - Available";
            else
                cout << "\n " << key << " -> " << i << ":00 O' Clock - Available";
            key++;
        }
    }

    cout << "\n Please any key to continue..";
    getchar();
    getchar();
    return 0;
}
/*int argc, char** argv*/


/*
int existingAppointment()
{
   
    cout << "\n ----- Appointments Summary ---- \n";
    // check if record already exist..
    ifstream read;
    read.open("appointment.dat");

    int hoursbook = 8;

    int arr[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int recordFound = 0;

    if (read)
    {
        string line;
        char key = 'A';
        int i = 9;


        while (getline(read, line))
        {
            char temp = line[0];
            int index = (temp - 65);
            arr[index] = 1;
            recordFound = 1;
        }
        if (recordFound == 1)
        {
            cout << "\n Appointment Summary by hours:";
            char key = 'A';
            int hours = 9;
            for (int i = 0; i <= 12; i++)
            {
                
                if (arr[i] == 0)
                    cout << "\n " << key << "->" << hours << ":00 O' Clock  -Available";
                else
                    cout << "\n " << key << "->" << hours << ":00 O' Clock  - Booked";
                hours++;
                key++;
            }
        }

        read.close();
    }
    else
    {
        char key = 'A';
        for (int i = 9; i <= 21; i++)
        {
            if (i == 9)
                cout << "\n " << key << " -> 0" << i << ":00 O' Clock - Available";
            else
                cout << "\n " << key << " -> " << i << ":00 O' Clock - Available";
            key++;
        }
    }

    cout << "\n Please any key to continue..";
    getchar();
    getchar();
    return 0;
}
*/


int existingAppointment()
{
  
    cout<<"\n ----- Appointments Summary ---- \n";	
    //check if record already exist..
    ifstream read;
    read.open("appointment.dat");
    
    int hoursbook = 8;
    
    int arr[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
     int recordFound =0; 
     
    if(read)
    {     
	string line;
	char key = 'A';
	int i = 9;
	       
	   while(getline(read, line)) {
	   	   char temp = line[0];
	   	   int index = (temp - 65);
	   	   arr[index]=1;  
		   recordFound = 1;
	  }
        if(recordFound == 1)
        {
        cout<<"\n Appointment Summary by hours:";
        char key = 'A';
        int hours = 9;
        for(int i = 0; i<=12; i++)
        {
        	if(arr[i] == 0) 
        	cout<<"\n "<<key<<"->"<<hours<<" - Available";
        	else
        	cout<<"\n "<<key<<"->"<<hours<<" - Booked";
        	hours++; key++;
        }
            
	}
		
	read.close();
    }
    else
    {
    char key = 'A';
	for(int i = 9; i<=21; i++)
	{
	if(i==9)
	cout<<"\n "<<key<<" -> 0"<<i<<" - Available";
	else
	cout<<"\n "<<key<<" -> "<<i<<" - Available";
	key++;
	}
    }
    
    cout<<"\n Please any key to continue..";
    getchar(); getchar();
    return 0;	 
}



int appoinment_call()
{
    int choice;
    
    while (true)
    {
        cout << "\n--------------------------------------------\n\n";
        cout << "         Doctor Appointment System          \n";
        cout << "---------------------------------------------\n\n";

        cout << "1. Book Appointment\n";
        cout << "2. Check Existing Appointment\n";
        cout << "3. Request Assistance\n"; // Added option for requesting assistance
        cout << "0. Exit\n";

        cout << "\n Enter your choice: ";
        cin >> choice;

        if (!cin)
        {
            cout << "\n Invalid choice. Enter again.\n";
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue;
        }

        switch (choice)
        {
            case 1:
                bookAppointment();
                break;
            case 2:
                existingAppointment();
                break;
            case 3:
                cout << "\n Requesting assistance... Please wait.\n";
                // Code to handle assistance request goes here
                break;
            case 0:
                while (true)
                {
                    cout << "\n Are you sure you want to exit? (y/n) :  \n";
                    char ex;
                    cin >> ex;
                    if (ex == 'y' || ex == 'Y')
                        return 0;
                    else if (ex == 'n' || ex == 'N')
                        break;
                    else
                    {
                        cout << "\n Invalid choice! Press enter to continue.";
                        getchar();
                    }
                }
                break;
            default:
                cout << "\n Invalid choice. Enter again.\n";
        }
    }
    
    return 0;
}