#include <iostream>
#include<string.h>
using namespace  std;


class Student
{
private:
    int rollNumber;
    char *name;
    double m1, m2, m3;
    double total;
    double percentage;
    char grade ;
    void toatlMarks(){
        total = m1 + m2 + m3;
    }

    void totalPercentage(){
        percentage = total/3.0f;
    }

    void calculateGrade(){
        float m = percentage;
        if (m>=90)
        {
            grade = 'A';
        }
        else if (m>=80)
        {
            grade = 'B';
        }
        
        else if (m>=70)
        {
            grade = 'C';
        }
        
        else if (m>=60)
        {
            grade = 'D';
        }
        else{
            grade = 'F';
        }
        
        
    }

    


public:
    Student(){
        this-> rollNumber = 0;
        this-> name = new char;
        *name = '\0';
        m1 = m2 = m3 = 0; 
        total = 0;
        
    }
    Student(int rollNumber,char* name,int m1,int m2,int m3){
        this->rollNumber = rollNumber;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
    void display(){
        toatlMarks();
        totalPercentage();
        calculateGrade();

        cout << "Roll Number = " << rollNumber<<endl;
        cout<<"Name : ";
        for (int i = 0; i < strlen(this->name); i++)
        {
            cout<<*(name+i);
        }
        cout<<endl;

        cout<<"m1 = "<<m1<<"\nm2 = "<<m2<<"\nm3 = "<<m3<<"\ntotal = "<<total<<"\nPercentage = "<<percentage<<" %"<<"\nGrade = "<<grade<<endl; 
    } 
    void assignValues(int rollNumber,char* name,int m1,int m2,int m3)
        {
            this->rollNumber=rollNumber;
            this->name=new char[strlen(name)+1];
            strcpy(this->name,name );
            this->m1=m1;
            this->m2=m2;
            this->m3=m3;
    }

   
    
    void setName(char* name)
    {
        strcpy(this->name,name);
    }
    void setM1(int m1){
        this-> m1 = m1;
    }
    int getM1(){
        return this -> m1;
    } 
    

    void getRollNumber (int rollNumber){
        if (this -> rollNumber == rollNumber)
        {
            cout<<"Roll Number is Present"<<endl;   
        }
        
    }

    // ~Student(){
    //     delete name;
    // }

    

    
};





int main(){

    Student s1(101, "abc", 90 , 80 , 80);
    s1.display();
    cout<<endl;
    // Student s2(102, "abce", 85 , 81 , 71);
    // s2.display();
    // cout<<endl;
    // Student s3(103, "abcd", 40 , 80 , 95);
    // s3.display();
    // cout<<endl;
    // s1.assignValues(104, "abce", 100 , 100 , 100);
    // s1.display();
    // cout<<endl;

    s1.setName("Deadpool");
    s1.display();
    s1.getRollNumber(101);
    // s1.~Student();

    return 0;

}