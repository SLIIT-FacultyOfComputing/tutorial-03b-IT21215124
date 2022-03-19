#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  
 cout << "No\t\t" << "Name\t\t\t\t\t" << "Marks" << endl;
  
 for (int r = 0; r < 5; r++) {
   
     cout <<  r+1 <<"\t\t"
       
          <<  names[r] << "\t\t\t"
       
          << setw(12) << setiosflags(ios :: fixed)<< setprecision(2) << marks[r] << endl;
 }

  return 0;
}