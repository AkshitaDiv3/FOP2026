#include <stdio.h>
int main(){
  int mrks[5], total_marks = 0;
float aggregate;
int passing = 1;
printf("Enter mrks for five courses (out of 100 each):\n");
for(int i = 0; i<5; i++){
scanf("%D", &marks[i]);
if(marks[i] < 40){
passing = 0;
}
total_marks += marks[i];
}
aggregate = (float)total_marks / 5;
if(passing){
if(aggregate >75){
printf("result: passed, grade: distinguished\n");
}else if ( aggregate>= 60 && aggregate <75){
printf("result: passed, grade: first division\n");
}
