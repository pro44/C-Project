#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<time.h>

using namespace std;
struct student{
string fname;
string lname;
string Registeration;
string classes;
}studentData;

struct teacher{
string fst_name;
string lst_name;
string qualification;
string exp;
//on
string pay;
string subj;
string lec;
string cel_no;
string blod_grop;
string serves;
string exno;
}tech[50];


void delay(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void callExit(){
  int process = 0;
  system("cls");
  cout << "\n\n\n\n\n";
  cout << "\n\tTaking You Out of The System";
  for(process=0;process<25;process++)
    {
      delay(150);
      cout <<".";
    }
  system("cls");
  cout <<"\n\n\n\n\n\n\n\n\n\n\n";
  cout <<"\t\t\t\t\t";
  cout <<"You are out of the System.\n";
  cout <<"\t\t\t\t\t\t";
  cout << "Thank You !";
  cout <<"\n\n";
  cout <<"\t\t\t\t\t";
  system("pause");
  exit(0);
}


int login()
{
  char username[30];
  char password[4];
  int true1 = 1;
  int try1 = 0;
  int i=0;
  do
  {
    system("cls");
    cout << "\n\n\n\n\n\n";
    cout <<"\t\t\t\t    ----------------------------\n";
    cout <<"\t\t\t\t    | COLLEGE MANAGEMENT SYSTEM |\n";
    cout <<"\t\t\t\t    ----------------------------\n";
    cout <<"\n\n";
    cout << "\t\t\t\t\t";
    cout << "Username : ";
    cin >> username;
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Password : ";
	for(int x=0;x<4;x++){
    password[x]=getch();
    cout<<"*";
}
	
    if(strcmp(username,"admin")==0 && strcmp(password,"pass")==0)
      {
        cout << "\n\n";
        cout << "\t\t\t\t";
        cout << "You are accessed to the system!\n\n";
        cout << "\t\t\t\t";
        system("pause");
        system("cls");
        true1 = 0;
        return 1;
      }
      else
      {
        system("cls");
        try1 = try1+1;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t";
        cout << "No. of attempts remain: " << 3-try1;
        cout << "\n\n";
        cout << "\t\t\t\t";
        system("pause");
        if(try1>=3)
        {

          cout << "\t\t\t\t\t\t";
          cout << "\n";
          cout << "\t\t\t\t";
          cout << "No permission to enter the system!\n\n";
          cout << "\t\t\t\t";
          system("pause");
          callExit();
        }
      } //END OF ELSE
    }
 while(try1<3);
}

void mainpage()
{
  int process=0;
  system("cls");
  cout << "\n";
  cout <<"\t\t\t\t    -----------------------------\n";
  cout <<"\t\t\t\t    | COLLEGE MANAGEMENT SYSTEM |\n";
  cout <<"\t\t\t\t    -----------------------------\n";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  cout <<"Prepared By    ";
  cout <<":";
  cout <<"   Raja Aakash 18SW44";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  cout <<"Submitted To   ";
  cout <<":";
  cout <<"   Sir Sajjad";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  cout <<"\n\n";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  system("pause");
  cout <<"\n\t\t\t\tLoading";

  for(process=0;process<25;process++)
  {
    delay(150);
    cout <<".";
  }
}

int main(){
mainpage();
login();
	SetConsoleTitle("College Managemet System | Developed by Raja Aakash");
	system("color F0");
int i=0,j;
char choice;
string find;
string srch;
while(1)
{
system("cls");
  cout << "\n";
  cout <<"\t\t\t\t    -----------------------------\n";
  cout <<"\t\t\t\t    | COLLEGE MANAGEMENT SYSTEM |\n";
  cout <<"\t\t\t\t    -----------------------------\n";
  cout<<"\n"<<endl;
cout<<"   Enter Your Choice:"<<endl;
cout<<"   1: Students Section"<<endl;
cout<<"   2: Teachers Section"<<endl;
cout<<"   3: Exit"<<endl<<"   ";
cin>>choice;

system("cls");

switch(choice)
{
	
case '1':
{
while(1)
{
system("cls");
cout<<"\n****STUDENTS SECTION*****\n\n\n";
cout<<"   Enter your choice:\n";
cout<<"   1: Add a student\n";
cout<<"   2: Find a Student by Roll Number\n";
cout<<"   3: Jump to main\n   ";
cin>>choice;
						
switch(choice){
case '1':
{ ofstream f1("student.txt",ios::app);

for(i=0; choice!='n'; i++)
{
if((choice=='y')||(choice=='Y')||(choice=='1'))
{
	string check;
	int count=0;
cout<<"   Enter Roll Number: ";
cin>>studentData.Registeration;

ifstream read;
read.open("student.txt");
while(!read.eof()){
	read>>check;
	if(check==studentData.Registeration)
	count++;
}
if(count==0){
cout<<"   Enter First Name: ";
cin>>studentData.fname;
cout<<"   Enter Last Name: ";
cin>>studentData.lname;
cout<<"   Enter Class: ";
cin>>studentData.classes;

f1<<studentData.Registeration<<"\n"<<studentData.fname<<"\n"<<studentData.lname<<"\n"<<studentData.classes<<endl;
cout<<"Data Saved Successfully!";
cout<<"\n   Do you want to Add Another Student? ";
cout<<"\n   Press Y for Continue and N to Finish: ";
choice = getch();
}else{
	cout<<"   Roll No: ALready Exists!"<<endl;
}
}
}
f1.close();
}
continue;

case '2':
{ ifstream f2("student.txt");

cout<<"   Enter Roll Number to be Displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for(j=0;((j<i)||(!f2.eof()));j++){
getline(f2,studentData.Registeration);

if(studentData.Registeration==find){
notFound = 1;

getline(f2,studentData.fname);
cout<<"   First Name:"<<studentData.fname<<endl;
getline(f2,studentData.lname);
cout<<"   Last Name: "<<studentData.lname<<endl;
getline(f2,studentData.classes);
cout<<"   Class: "<<studentData.classes<<endl<<"   ";

}
}
f2.close();


if(notFound==0){
	cout<<"   No Record Found"<<endl<<"   ";
}

system("PAUSE");

}
continue;

case '3':
{
break;
}
}
break;
}
continue;
}
break;

case '2':
{
while(1)
{
system("cls");
cout<<"\t\t\t***********TEACHERS SECTION*********\n\n\n";
cout<<"   Enter your choice: "<<endl;
cout<<"   1: Create a Teacher\n";
cout<<"   2: Find a Teacher by Executive Number\n";
cout<<"   3: Jump To Main Menu\n   ";
cin>>choice;
 
switch(choice){
case '1':
{ 
ofstream t1("teacher.txt",ios::app);
	
for(i=0; choice!='n'&& choice!='N'; i++)
{
string check;
int count=0;
if((choice=='y')||(choice=='Y')||(choice=='1'))
{cout<<endl;
cout<<"   Enter Executive Number: ";
cin>>tech[i].exno;
ifstream read;
read.open("teacher.txt");
while(!read.eof()){
	read>>check;
	if(tech[i].exno==check)
	count++;
}
read.close();
if(count==0){
cout<<"   Enter First Name:";
cin>>tech[i].fst_name;
cout<<"   Enter Last Name: ";
cin>>tech[i].lst_name;
cout<<"   Enter Qualification: ";
cin>>tech[i].qualification;
cout<<"   Enter Experience(year): ";
cin>>tech[i].exp;
cout<<"   Enter Number of Year in this College: ";
cin>>tech[i].serves;
cout<<"   Enter Subject: ";
cin>>tech[i].subj;
cout<<"   Enter Lectures(per week): ";
cin>>tech[i].lec;
cout<<"   Enter Salary: ";
cin>>tech[i].pay;
cout<<"   Enter Phone Number: ";
cin>>tech[i].cel_no;
cout<<"   Enter Blood Group: ";
cin>>tech[i].blod_grop;

t1<<tech[i].exno<<endl<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl
<<tech[i].qualification<<endl<<tech[i].exp<<endl
<<tech[i].serves<<endl<<tech[i].subj<<endl<<tech[i].lec
<<endl<<tech[i].pay<<endl<<tech[i].cel_no<<endl<<tech[i].blod_grop<<endl;

cout<<"   Data Saved Successfully!";

cout<<"\n   Do you want to add another teacher? ";
choice = getch();
}else{
	cout<<"Number Already Exist!"<<endl;
}
}		
}
system("cls");


t1.close();
}
continue;

case '2':{
ifstream t2("teacher.txt");

cout<<"   Enter Executive Number to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for(j=0;((j<i)||(!t2.eof()));j++){
getline(t2,tech[j].exno);

if(tech[j].exno==find){
notFound = 1;
getline(t2,tech[j].fst_name);
cout<<"   First Name:"<<tech[j].fst_name<<endl;
getline(t2,tech[j].lst_name);
cout<<"   Last Name: "<<tech[j].lst_name<<endl;
getline(t2,tech[j].qualification);
cout<<"   Qualification: "<<tech[j].qualification<<endl;
getline(t2,tech[j].exp);
cout<<"   Experience: "<<tech[j].exp<<endl;

getline(t2,tech[j].serves);
cout<<"   Number of Year in this College:"<<tech[j].serves<<endl;

getline(t2,tech[j].subj);
cout<<"   Subject:"<<tech[j].subj<<endl;
getline(t2,tech[j].lec);
cout<<"   Enter Lecture(per weeK): "<<tech[j].lec<<endl;
getline(t2,tech[j].pay);
cout<<"   Salary: "<<tech[j].pay<<endl;

getline(t2,tech[j].cel_no);
cout<<"   Phone Number: "<<tech[j].cel_no<<endl;

getline(t2,tech[j].blod_grop);
cout<<"   Blood Group:"<<tech[j].blod_grop<<endl<<"   ";
} }
t2.close();
if( notFound==0) {
	cout<<"   No Record Found"<<endl<<"   ";
}
system("pause");

}
continue;
case '3':{	break;}
}
break;
}
continue;
}
break;

case '3':{
	callExit();
	break;
}
}
}
return 0;
}
