#include<bits/stdc++.h>
#define Length 5

struct Employee {
  char title [50];
  int year;
} employee [Length];

void printemployee (Employee employee);

int main ()
{
  char buffer [50];

  for (int n=0; n<Length; n++)
  {
    cout << "Enter title: ";
    cin.getline (employee[n].title,50);
    cout << "Enter year: ";
    cin.getline (buffer,50);
    employee[n].year = atoi (buffer);
  }
  cout << "\nYou have entered these employees:\n";
  for (int n=0; n<Length; n++)
    printemployee (employee[n]);
  return 0;
}

void printemployee (Employee employee)
{
  cout << employee.title;
  cout << " (" << employee.year << ")\n";
}
