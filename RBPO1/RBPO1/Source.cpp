#include <iostream>
#include <string>

using namespace std;
unsigned short height;


unsigned short ReadPersonAge() {
  unsigned short age;
  cout << "Age: ";
  cin >> age;
  return age;
}

string ReadPersonName() {
  string name = "";
  cout << "Name: ";
  cin >> name;
  return name;
}

void ReadPersonHeight() {
  cout << "Height: ";
  cin >> height;
}

void ReadPersonWeight(unsigned short& weight) {
  cout << "Weight: ";
  cin >> weight;
}


void ReadPersonSalary(double* salary) {
  cout << "Salary: ";
  cin >> *salary;
}

void ReadPersonData(string& name, unsigned short& age, double& salary) {
  name = ReadPersonName();
  age = ReadPersonAge();
  ReadPersonSalary(&salary);

}

void ReadPersonData(string& name, unsigned short& age, unsigned short& heigth, unsigned short& weight) {
  name = ReadPersonName();
  age = ReadPersonAge();
  ReadPersonHeight();
  height = ::height;
  ReadPersonWeight(weight); 
}

void WritePersonData(unsigned short age, const string& name,
  const string& height = "", const string& weight = "",
  const string& salary = "") {
  cout << "\nName: " << name << "\nAge: " << to_string(age) << "\nHeight: " << height << "\nWeight: " << weight << "\nSalary: " << salary << "\n\n";
}

int main() {
  string name;
  string h;
  unsigned short weight;
  unsigned short age;
  double salary;
  ReadPersonData(name, age, salary);
  WritePersonData(age, name, "", "", to_string(salary));
  ReadPersonData(name, age, height, weight);
  WritePersonData(age, name, to_string(height), to_string(weight));
  return 0;
}
