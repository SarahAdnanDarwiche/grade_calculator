#ifndef GRADING2_H
#define GRADING2_H
#include <iostream>
using namespace std;

class Record {                      // CHANGE TO class
    
// DECLARE A public SECTION, AND DEFINE A NEW METHOD NAMED setGrades,
// THAT TAKES FOUR double ARGUMENTS
public:
  void setGrades(double q1,double q2,double m,double f);
  char overallGrade()const;
  char overallGrade(double quizWt,double midtermWt, double finalWt)const;
  Record();
  Record(double q1,double q2,double m,double f);
  
  double getq1();
  double getq2();
  double get_midterm();
  double get_final();
 
  void setq1(double q1);
  void setq2(double q2);
  void set_midterm(double m);
  void set_final(double f);

// DECLARE A private SECTION AND MAKE ALL DATA PART OF IT
private:
    double quiz1, quiz2; 
    double midterm, final;
    char letterEquiv(double grade)const;
   
};

#endif