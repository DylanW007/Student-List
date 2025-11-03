#include <iostream>
#include <vector>
using namespace std;

struct Student{
  char firstname[20];
  char lastname[20];
  int id;
  float gpa;
};

void print(){
  //cout << struct(firstname)'s
}

char add(){

  char all[1000] = "\0";
  
  Student student;

  cout << "What is the student's first name?: ";
  cin >> student.firstname;
  cout << endl;

  cout << "What is the student's last name?: ";
  cin >> student.lastname;
  cout << endl;

  cout << "What is the student's id?: ";
  cin >> student.id;
  cout << endl;

  cout << "What is the student's gpa?: ";
  cin >> student.gpa;
  cout << endl;

  cout << "Your student is, " << student.firstname << " " << student.lastname << ", " << student.id << ", " << student.gpa << "." << endl;

  all.push_back(student.firstname, student.lastname, student.id, student.gpa);
  
  return 0;
}

void remove(){
  cout << "deleting";
}

int main(){
  add();
  
  return 0;
}
