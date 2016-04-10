//Sarah Darwiche
#include <iostream>
#include <string>

using namespace std;

string trackUserAnswer();

int main()
{
  
 // string courseNamesTable[5];
  string courseName;
  string userAnswer;
  int Num_of_Courses;
  int space_counter = 1;

  int courseCounter = 0;
 
   cout << "Enter how many courses you would like to take:\n";
   cin >> Num_of_Courses;
   cin.ignore(); 
   
  string courseNamesTable[Num_of_Courses];
  
  do
  {
    cout << "Enter a course name:\n";
    getline(cin,courseName,'\n');
    courseNamesTable[courseCounter] = courseName;
    cout << "You are registered for the following " << courseCounter + 1 << " courses:\n";

    for (int i=0; i<=courseCounter; i++)
    {
      cout << i+1 << ". " << courseNamesTable[i] << "\n";
    }

    space_counter++;
    
    if(space_counter > Num_of_Courses){
    cout << "You have reached your course load.\nBye for now!\n";
    return -1;}
    
    userAnswer = trackUserAnswer();

    courseCounter++;
    
   
  } while(userAnswer.compare("y") == 0);

  cout << "All done!\n";
  return 0;
}

string trackUserAnswer()
{
  string userAnswer;

  while (userAnswer.compare("n") && userAnswer.compare("y"))
  { 
     
     cout << "\n Do you Want to register for  another course? (y/n)\n";
     cin >> userAnswer;
     cin.ignore();
     cout << "Your Answer is:" << userAnswer << "\n"; 
     
  }

  return userAnswer;     
}
