#include "grading2.cpp"
#include "grading2.h"
int main() {
    Record rec = getScores();
    cout << "Grade is " << rec.overallGrade() << endl;    // FIX USAGE OF rec
    return 0;
}