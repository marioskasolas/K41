#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 1000

int main() {
    int t;
    char fname[20],c,buff[N],counter[26] = {0};
    double  pososto[26] = {0};
    srand(time(NULL));
    printf("dwste onoma arxeiou :");
    gets(fname);
    FILE * fp;
    fp = fopen(fname,"w");
    for(int i = 0;i < N; i++){
        t = (rand() % 25) + 97;
        printf("is a c %d\n",t);
        buff[i] = t;
    }

    for(int i = 0;i < N;i++){
        counter[buff[i]-97]++;

    }
    for(int i = 0; i < 26; i++){
        printf("Letter %c has : %d\n",i+97,counter[i]);
        pososto[i] = counter[i] * 100.0 / (double)N;
        c = i + 97;
        fprintf(fp,"%c\t%lf %\n",c,pososto[i]);
    }


}
