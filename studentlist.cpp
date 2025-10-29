#include <iostream>
using namespace std;

struct Student{
  char name[10];
  int id;
  float gpa;
};

int main(){
  //char studentname;
  int studentid;
  float studentgpa;
  
  cout << "What is your students name?: ";
  cin >> studentname;
  cout << "What is your students ID?: ";
  cin >> studentid;
  cout << "What is your students GPA?: ";
  cin >> studentgpa;

  Student studentname;
  cin >> studentname.name;
  studentname.id = studentid;
  studentname.gpa = studentgpa;
  cout << studentname.name << " ID:" << studentname.id << " GPA:" << studentname.gpa << endl;
  
  //Student dylan;
  //cin >> dylan.name;
  //dylan.id = 1234;
  //dylan.gpa = 3.0;
  //cout << dylan.name << " ID:" << dylan.id << " GPA:";
  //cout << dylan.gpa << endl;

  return 0;
}
