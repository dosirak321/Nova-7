//#include<stdio.h>
//int main() {
//  int score[60];
//  score[33] = 6;
//  printf("%d", score[33]);
//  return 0;
//}
// #define SIZE 10 

// ***** 위 문장의 뒤에는 세미콜론(;)이 붙지 않음을 알 수 있다. *****

// int score[SIZE];
// for(int i=0; i<SIZE; i++) 의 꼴에서 SIZE의 값만 수정하면 되므로 프로그래밍이 훨씬 수월해진다.
#include<stdio.h>

#define SIZE 5
#define PI 3.14

int main(void) {
  int i;
  int scores[PI];

  scores[0]=10;
  scores[1]=20;
  scores[2]=30;
  scores[3.14]=40;
  //scores[4]=50;

  for (i=0; i<SIZE; i++)
    printf("scores[%d]=%d\n", i, scores[i]);
  return 0;
}