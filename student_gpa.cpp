#include<iostream>

using namespace std;

class Student
{
  int id,year;
  string name;
  double gpa;
  char gender;

  public:
      Student(int i, string na, double gp, int yr,  char gen)
      {
        id = i;
        name = na;
        gpa = gp;
        year = yr;
        gender = gen;
      }
      friend istream& operator>>(istream& is,Student& st);
      friend ostream& operator<<(ostream& os,Student& st);
      friend bool operator>= (Student& s1,Student& s2);


      void calculateTop(Student& s1, Student& s2,Student& s3,Student& s4,Student& s5)
      {
        double topgpa;
        string topstudent;
        if (s1>=s2 && s1>=s3 && s1>=s4 && s1>=s5)
        {
          topgpa = s1.gpa;
          topstudent = s1.name;
        }
        else if (s2>=s1 && s2>=s3 && s2>=s4 && s2>=s5)
        {
          topgpa = s2.gpa;
          topstudent = s2.name;
        }
        else if (s3>=s1 && s3>=s2 && s3>=s4 && s3>=s5)
        {
          topgpa = s3.gpa;
          topstudent = s3.name;
        }
        else if (s4>=s1 && s4>=s2 && s4>=s3 && s4>=s5)
        {
          topgpa = s4.gpa;
          topstudent = s4.name;
        }
        else if (s5>=s1 && s5>=s2 && s5>=s3 && s5>=s4)
        {
          topgpa = s5.gpa;
          topstudent = s5.name;
        }

        cout<<"Highest GPA belongs to "<<topstudent<<": "<<topgpa<<endl; 
      }
        
    ~Student(){}
           
};

ostream& operator<<(ostream& os, Student& st)
{
    os <<"Student ID: "<< st.id <<", Name: "<< st.name<<endl;
    return os;
}

istream& operator>>(istream& is, Student& st)
{
  is>>st.id>>st.name>>st.gpa>>st.year>>st.gender;
  return is;
}

bool operator>=(Student& s1,Student& s2)
{
   return (s1.gpa >= s2.gpa);
}

int main()
{
  int id,year;
  string name;
  double gpa;
  char gender;
  Student s1(1,"Harry Potter",3.4,2,'m');
  Student s2(2,"Hermione Granger",3.8,2,'f');
  Student s3(3,"Ron Weasley",3.1,2,'m');
  Student s4(4,"Draco Malfoy",2.9,2,'m');
  cout<<"enter student information(ID,name,gpa,year,gender)"<<endl;
  Student s5(id,name,gpa,year,gender);
  cin>>s5;
  cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl;
  s1.calculateTop(s1,s2,s3,s4,s5);
  return 0;
}
