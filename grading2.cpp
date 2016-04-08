// grading2.cpp - uses C++ style object-handling (AFTER CHANGES BELOW)
// Sarah Darwiche, April 24,2013

#include <iostream>
#include "grading2.h"
using namespace std;


Record getScores();



// getScores IS AN external FUNCTION, SO IT MUST USE setGrades TO SET THE VALUES
// OF THE OBJECT'S private DATA (Hint: You'll need some local variables.)
Record getScores() {
  Record result;
  double quiz1,quiz2,midterm,final;
    cout << "Enter scores in this order: 2 quizzes, midterm, final: ";
    cin >> quiz1 >> quiz2 >> midterm >> final;
    result.setGrades(quiz1,quiz2,midterm,final);
    return result;
}

// THE NEXT TWO FUNCTIONS ARE METHODS OF THE CLASS, SO THEY MUST PROPERLY
// BE IDENTIFIED AS SUCH WITH THE SCOPE RESOLUTION OPERATOR '::'
// REMEMBER TO IMPLEMENT THE NEW setGrades METHOD TOO.


char Record::letterEquiv(double grade)const {      // FIX SIGNATURE
    if (grade >= 90) return 'A';
    if (grade >= 80) return 'B';
    if (grade >= 70) return 'C';
    if (grade >= 60) return 'D';
    return 'F';
}

char Record::overallGrade()const {   // FIX SIGNATURE
    // ALSO CHANGE HOW THE OBJECT'S DATA ARE ACCESSED (WHO IS r NOW?  ;-)
    double quizPct = (quiz1 / 10 + quiz2 / 10) / 2;
    double overall = 0.25 * quizPct + 0.25 * midterm + 0.5 * final;
    return letterEquiv(overall);
}
void Record::setGrades(double q1,double q2,double m,double f) {
  quiz1 = q1;
  quiz2=q2;
  midterm=m;
  final=f;
}

// ASK A TA TO HELP IF YOU GET STUCK, BUT FIRST TRY YOUR BEST TO FIGURE IT OUT!

void Record::setq1(double q1){
    quiz1 = q1;
}

void Record::setq2(double q2){
    quiz2 = q2;
}

void Record::set_midterm(double m){
    midterm = m;
}

void Record::set_final(double f){
    final = f;
}

 double Record::getq1(){
    return  quiz1;
}

double Record::getq2(){
    return quiz2;
}

double Record::get_midterm(){
    return midterm;
}

double Record::get_final(){
    return final;
}

Record::Record(): quiz1(0), quiz2(0), midterm(0), final(0){
}

Record::Record(double q1,double q2,double m,double f){
  if(q1<10 && q1>0){
     quiz1=q1;}
  else if(q1<0){
     quiz1=0;}
  else
     quiz1=10;
     
  if(q2<10 && q2>0){
     quiz2=q2;}
  else if(q2<0){
     quiz2=0;}
  else
     quiz2=10;   
  
  if(m<100 && m>0){
     midterm=m;}
  else if(m<0){
     midterm=0;}
  else
     midterm=100;

  if(f<100 && f>0){
     final=f;}
  else if(f<0){
     final=0;}
  else
     final=100;

}

char Record::overallGrade(double quizWt,double midtermWt, double finalWt)const {   // FIX SIGNATURE
    // ALSO CHANGE HOW THE OBJECT'S DATA ARE ACCESSED (WHO IS r NOW?  ;-)

    if((quizWt+midtermWt+finalWt)==1){
    double quizPct = (quiz1 / 10 + quiz2 / 10) / 2;
    double overall = 0.25 * quizWt + 0.25 * midtermWt + 0.5 * finalWt;
    return letterEquiv(overall);
    }
    else
    cout <<"Error in values";
    
}