/*
                   This Program Generates a Report Card for a Single Student.
*/
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<iostream>
#include<windows.h>
using namespace std;

class Student
{   
    int Marks[5],passing_year,sum;
    float Percentage;
    char name_student[20],name_school[100],roll_student[20],name_father[30],lettergrade,Result[5];
    public:
    	void input();
    	void Calculate();
    	void Display();
	
	
}S1;
int main()

{   system("cls");
     HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);    
	cout<<setfill('*')<<setw(80)<<"*"; 
    cout<<"\t\t\tWelcome to Report Card Generator"<<endl;
    cout<<setfill('*')<<setw(80)<<"*"<<endl; 
    cout<<"Please fill the following details."<<endl;
	S1.input();
	S1.Calculate();	
	cout<<endl;
	system("cls");
	SetConsoleTextAttribute(color, 10);
	cout<<"\t\t  Please wait your Report Card is generating "<<endl;
    SetConsoleTextAttribute(color, 10); 
    cout << "[";     
    for (int i = 0; i <75; i++) 
    {  Sleep(35);       
      cout << ":";  
    }
    cout << "]"<<endl;	
	system("cls");	
	S1.Display();
    getch();
    system("cls");
}
void Student::input()
{
	
   cout<<"Enter the Name of School- ";
   cin.getline(S1.name_school,60);   
   cout<<"Enter the Name of Student- ";   
   cin.getline(S1.name_student,20);
   cout<<"Enter the Roll Number of Student- ";   
   cin.getline(S1.roll_student,20);    
   cout<<"Enter Father's name - ";   
   cin.getline(S1.name_father,30);   
   cout<<"Enter the Passing year- ";
   cin>>passing_year;
   
   cout<<endl<<"Enter the Marks in Mathematics (out of 100)- ";
   cin>>S1.Marks[0];
   cout<<endl<<"Enter the Marks in Physics (out of 100)- ";
   cin>>S1.Marks[1];
   cout<<endl<<"Enter the Marks in Chemistry (out of 100)- ";
   cin>>S1.Marks[2];
   cout<<endl<<"Enter the Marks in English (out of 100)- ";
   cin>>S1.Marks[3];
   cout<<endl<<"Enter the Marks in Optional (out of 100)- ";
   cin>>S1.Marks[4];
   cout<<endl;
}
void Student::Calculate()
{
	for (int i=0;i<5;i++)
	{ 	  
	  S1.sum+=S1.Marks[i];
	}
	S1.Percentage=S1.sum/5;
	
	if(S1.Percentage>=90 && S1.Percentage<=100)
        S1.lettergrade = 'A';
    else if(S1.Percentage>=80 && S1.Percentage <90)
         S1.lettergrade = 'B';
    else if (S1.Percentage>=70 && S1.Percentage <80)
         S1.lettergrade = 'C';
    else if (S1.Percentage>=60 && S1.Percentage <70)
         S1.lettergrade = 'D';
    else if (S1.Percentage>=0 && S1.Percentage <60)
        S1.lettergrade = 'F';
	
if(S1.Percentage<=33)
   strcpy(S1.Result,"FAIL")	;
else
   strcpy(S1.Result,"PASS")	;
	
}
void Student::Display()
{       HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(color, 10);
	    cout<<setfill('*')<<setw(80)<<"*"<<endl; 
	    SetConsoleTextAttribute(color, 12);
	 	cout<<"         ALL INDIA SENIOR SECONDARY CERTIFICATE EXAMINATION "<<S1.passing_year<<endl;
	 	SetConsoleTextAttribute(color, 10);
        cout<<setfill('*')<<setw(80)<<"*"<<endl<<endl; 
        SetConsoleTextAttribute(color, 10);
        cout<<"\t\t   \t ";
        SetConsoleTextAttribute(color, 11);	
		cout<<S1.name_school<<endl<<endl;
		SetConsoleTextAttribute(color, 10);
        cout<<"Name -    ";
        SetConsoleTextAttribute(color, 11);
		cout<<S1.name_student<<endl;
		SetConsoleTextAttribute(color, 10);
        cout<<"Roll No - ";
        SetConsoleTextAttribute(color, 11);
		cout<<S1.roll_student<<endl;
		SetConsoleTextAttribute(color, 10);
        cout<<"Father Name -";
		SetConsoleTextAttribute(color, 11);
		cout<<S1.name_father<<endl<<endl<<endl;
		SetConsoleTextAttribute(color, 10);
		cout<<"-------------------------------------------------------------------------------\n"; 
        cout<<"-------------------------------------------------------------------------------\n";
        SetConsoleTextAttribute(color, 12);
	    cout<<"SUBJECT\t\t\t\t MARKS OBTAINED         "<<endl<<endl; 
	    SetConsoleTextAttribute(color, 10);
        cout<<"Mathematics"<<"\t\t\t\t ";
        SetConsoleTextAttribute(color, 11);
		cout<<S1.Marks[0]<<endl;
		SetConsoleTextAttribute(color, 10);
        cout<<"Physics"<<"\t\t\t\t\t ";
        SetConsoleTextAttribute(color, 11);
		cout<<S1.Marks[1]<<endl ;
		SetConsoleTextAttribute(color, 10);
        cout<<"Chemistry"<<"\t\t\t\t ";
        SetConsoleTextAttribute(color, 11);
		cout<<S1.Marks[2]<<endl;
		SetConsoleTextAttribute(color, 10);
        cout<<"English"<<"\t\t\t\t\t ";
        SetConsoleTextAttribute(color, 11);
		cout<<S1.Marks[3]<<endl;
		SetConsoleTextAttribute(color, 10);
        cout<<"Optional"<<"\t\t\t\t ";
        SetConsoleTextAttribute(color, 11);
		cout<<S1.Marks[4]<<endl;
        cout<<endl<<endl;
        SetConsoleTextAttribute(color, 12);
		cout<<"Marks obtained- ";
		SetConsoleTextAttribute(color, 11);
		cout<<S1.sum<<"/500";
		SetConsoleTextAttribute(color, 12);
		cout<<"\t\t\tPercentage- ";
		SetConsoleTextAttribute(color, 11);
		cout<<S1.Percentage;
        cout<<endl<<endl;
        SetConsoleTextAttribute(color, 12);
        cout<<"Grade-  ";
        SetConsoleTextAttribute(color, 11);
		cout<<S1.lettergrade<<"\t\t\t\t";
		SetConsoleTextAttribute(color, 12);
		cout<<"Result- ";
		SetConsoleTextAttribute(color, 11);
		cout<<S1.Result<<endl<<endl;
		SetConsoleTextAttribute(color, 10);
        cout<<"------------------------------------------------------------------------------\n"<<endl;


}


