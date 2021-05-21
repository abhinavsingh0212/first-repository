/* .............Diplay the grades of individual subject...............
 ...............and the overall percentage and grade of...............
 ..... .........a student in a academic year..........................  */
#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,m4; //here variables are declare for marks entry//
    float avg;
    cout<<endl;
    cout<<endl<<"*******************************REPORT CARD*********************************";
    cout<<endl<<endl<<endl<<endl;
    cout<<"enter the marks of english         :";
    cin>>m1;
    cout<<"enter the marks of mathematics     : ";
    cin>>m2;
    cout<<"enter the marks of computer science:";
    cin>>m3;
    cout<<"enter the marks of physics         :";
    cin>>m4;
    cout<<endl<<endl;
    cout<<"------------------STUDENTS GRADES---------------"<<endl<<endl<<endl;
    if (m1 > 90 && m1 <= 100 )
    {
        cout<<"ENGLISH          = A GRADE "<<endl;
        
    }
    else if ( m1 > 80 && m1 <= 90)
    {
        cout<<"ENGLISH          = B GRADE"<<endl;

    }
    else if ( m1 > 70 && m1 <= 80)
    {
        cout<<"ENGLISH          = C GRADE"<<endl;
        
    }
    else if ( m1 > 60 && m1 <= 70)
    {
        cout<<"ENGLISH          = D GRADE"<<endl;
        
    }
    else if ( m1 > 50 && m1 <= 60)
    {
        cout<<"ENGLISH          = E GRADE"<<endl;
        
    }
    else 
    {
        cout<<"ENGLISH          = FAIL"<<endl;
    }
    /*..........upto here english grade is calculated...................
    ....................................*/
    if (m2 > 90 && m2 < 100 )
    {
        cout<<"MATHEMATICS      = A";
        cout<<endl;
        
    }
    else if ( m2 > 80 && m2 <= 90)
    {
        cout<<"MATHEMATICS      = B GRADE";
        cout<<endl;
    }
    else if ( m2 > 70 && m2 <= 80)
    {
        cout<<"MATHEMATICS      = C GRADE";
        cout<<endl;
        
    }
    else if ( m2 > 60 && m2 <= 70)
    {
        cout<<"MATHEMATICS      = D GRADE";
        cout<<endl;
        
    }
    else if ( m2 > 50 && m2 <= 60)
    {
        cout<<"MATHEMATICS      = E GRADE";
        cout<<endl;
        
    }
    else 
    {
        cout<<"MATHEMATICS      = FAIL";
        cout<<endl;
    }
    //............UPTO HERE MATHEMATICS GRADE IS CALCULATED...............//
    if (m3 > 90 && m3 <= 100 )
    {
        cout<<"COMPUTER SCIENCE = A GRADE";
        cout<<endl;
        
    }
    else if ( m3 > 80 && m3 <= 90)
    {
        cout<<"COMPUTER SCIENCE = B GRADE";
        cout<<endl;

    }
    
    else if ( m3 > 70 && m3 <= 80)
    {
        cout<<"COMPUTER SCIENCE = C GRADE";
        cout<<endl;

    }
    else if ( m3 > 60 && m3 <= 70)
    {
        cout<<"COMPUTER SCIENCE = D GRADE";
        cout<<endl;

    }
    else if ( m3 > 50 && m3 <= 60)
    {
        cout<<"COMPUTER SCIENCE = E GRADE";
        cout<<endl;

    }
    else 
    {
        cout<<"COMPUTER SCIENCE = FAIL";
        cout<<endl;

    }
    //............UPTO HERE COMPUTER SCIENCE GRADE IS CALCULATED...........//
    if (m4 > 90 && m4 <= 100 )
    {
        cout<<"PHYSICS          = A GRADE";
        cout<<endl;
        
    }
    else if ( m4 > 80 && m4 <= 90)
    {
        cout<<"PHYSICS          = B GRADE";
        cout<<endl;

    }
    else if ( m4 > 70 && m4 <= 80)
    {
        cout<<"PHYSICS          = C GRADE";
        cout<<endl;

    }
    else if ( m4 > 60 && m4 <= 70)
    {
        cout<<"PHYSICS          = D GRADE";
        cout<<endl;

    }
    else if ( m4 > 50 && m4 <= 60)
    {
        cout<<"PHYSICS          = E GRADE";
        cout<<endl;

    }
    else 
    {
        cout<<"PHYSICS          = FAIL";
        cout<<endl;
    }
    /*....................UPTO HERE PHYSICS GRADE IS CALCULATED..........................
    .............................................................................*/
    cout<<endl<<endl;
    avg = (m1+m2+m3+m4)/4;
    cout<<"Candidate Percentage = "<<avg<<"%"<<endl<<endl;
    /*....................UPTO HERE PERCENTAGE IS CALCULATED...............................
    .....................................................................................
    .........................................................................*/
    if (avg >90 && avg <= 100)
    {
        cout<<"Candidate is pass with A GRADE"<<endl<<endl;
        cout<<"REMARKS = VERY GOOD"<<endl<<endl;
        cout<<"BEST OF LUCK FOR THE FUTURE"<<endl;
    }
    else if (avg >80 && avg <= 90)
    {
        cout<<"Candidate is pass with B GRADE"<<endl<<endl;
        cout<<"REMARKS = GOOD"<<endl<<endl;
        cout<<"BEST OF LUCK FOR THE FUTURE"<<endl;
    }
    else if (avg >70 && avg <= 80)
    {
        cout<<"Candidate is pass with C GRADE"<<endl<<endl;
        cout<<"REMARKS = ABOVE AVERAGE"<<endl<<endl;
        cout<<"BEST OF LUCK FOR THE FUTURE"<<endl;
    }
    else if (avg >60 && avg <= 70)
    {
        cout<<"Candidate is pass with D GRADE"<<endl<<endl;
        cout<<"REMARKS = AVERAGE"<<endl<<endl;
        cout<<"BEST OF LUCK FOR THE FUTURE"<<endl;
    }
    else if (avg >50 && avg <= 60)
    {
        cout<<"Candidate is pass with E GRADE"<<endl<<endl;
        cout<<"REMARKS =BELOW AVERAGE WORK HARD"<<endl<<endl;
        cout<<"BEST OF LUCK FOR THE FUTURE"<<endl;
    }
    else 
    {
        cout<<"Candidate is FAIL in the examination  "<<endl<<endl;
        cout<<"REMARKS = VERY POOR"<<endl<<endl;
        cout<<"BEST OF LUCK FOR THE FUTURE"<<endl<<endl<<endl<<endl<<endl;
    }
}