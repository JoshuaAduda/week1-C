#include<iostream>
using namespace std;

int main(){
//=========================================================
//VARIABLE DECLARATION
//These are the "storage boxes" where we keep user answers
//=========================================================
string name;   //Stores the user's name(text)
string course; //Stores the course (BBIT OR BCS)
string hobby; //Stores the hobby
string reason; //Stores why you chose the course
string expectation; //Stores what you expect to learn 
string definition; //Stores their definition of programming
string food;  //Stores your favourite food
string job; //Stores your dream job

//=========================================================
//QUESTION 1: NAME
//=========================================================

cout<<"========================================================="<<endl;
cout<<"WELCOME TO YOUR FIRST PROGRAM!" <<endl;
cout<<"========================================================="<<endl;
cout<<endl;

cout<<"1. What is your name?";
getline(cin,name);  // Read the full line (including spaces)


if (name==""){
    cout<<"You didn't enter a name!"<<endl;
}


//=========================================================
//QUESTION 2: COURSE (BBIT/BCS)
//=========================================================

cout<<"2. What course are you doing?(BBIT/BCS)";
getline(cin,course);

//=========================================================
//QUESTION 3: HOBBY
//=========================================================

cout<<"3. What is your hobby?";
getline(cin,hobby);

//=========================================================
//QUESTION 4: REASON FOR CHOSING THIS COURSE
//=========================================================

cout<<"4. Why did you chose this course?";
getline(cin,reason);

//=========================================================
//QUESTION 5: EXPECTATIONS
//=========================================================

cout<<"5. What do you expect to learn in programming?";
getline(cin,expectation);

//=========================================================
//QUESTION 6: DEFINITION OF PROGRAMMING
//=========================================================

cout<<"6. IN your own words, what is programming?";
getline(cin,definition);

//=========================================================
//QUESTION 7:FAVOURITE FOOD
//=========================================================

cout<<"7. What is your favourite food?";
getline(cin,food);

//=========================================================
//QUESTION 8: DREAM JOB
//=========================================================

cout<<"8. What is your dream job?";
getline(cin,job);

//=========================================================
//DISPLAY THE SUMMARY
//=========================================================

cout<<endl;
cout<<"     +_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_"<<endl;
cout<<"               YOUR PROFILE SUMMARY               "   <<endl;
cout<<"     +_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_"<<endl;
cout<<endl;

cout<<"   Name:   "<<name<<endl;
cout<<"   Course:   "<<  course<<endl;
cout<<"   Hobby:   "<<  hobby<<endl;
cout<<"   Reason:   "<<  reason<<endl;
cout<<"   Expectation:   "<<  expectation<<endl;
cout<<"   Programming is:   "<<  definition<<endl;
cout<<"   Favourite food is:   "<<  food<<endl;
cout<<"   Dream job is:   "<<  job<<endl;
cout<<endl;

cout<<"     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
cout<<"      Great job,"<<name<<"! You are on your way to becoming a programmer!"<<endl;
cout<<"     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;



    return 0;
}