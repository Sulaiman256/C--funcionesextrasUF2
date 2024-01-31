#include <stdio.h>
#include <math.h>

int main (void){

    float ex1,ex2,ex3,ex4,grade;

    char letter;

    printf("Introduce your grade for the first exam: ",ex1);
        scanf("%f",&ex1);

      printf("Introduce your grade for the second exam: ",ex2);
        scanf("%f",&ex2);

      printf("Introduce your grade for the third exam: ",ex3);
        scanf("%f",&ex3);

      printf("Introduce your grade for the fourth exam: ",ex4);
        scanf("%f",&ex4);

    printf("What type of media do you want to create\n a.Aritmetica.\n b.Geometrica.\n");
    printf("Introduce your letter: ",letter);
    scanf("%s",&letter);

    switch(letter){

    case 'a':

        grade = ex1 + ex2 + ex3 + ex4;
        grade= grade /4;
        printf("Your arithmetic grade is %f: ",grade);
        break;

    case 'b':
        float percent1,percent2,percent3,percent4;

        printf("Introduce the percentage for the first exam: ");
        scanf("%f",&percent1);

        printf("Introduce the percentage for the second exam: ");
        scanf("%f",&percent2);

        printf("Introduce the percentage for the third exam: ");
        scanf("%f",&percent3);

        printf("Introduce the percentage for the fourth exam: ");
        scanf("%f",&percent4);

        grade = (ex1*percent1+ex2*percent2+ex3*percent3+ex4*percent4) /100;
        printf("Your geometric grade is %f: ",grade);
        break;

    default:
        printf("Option not valid");
    }

    printf("Introduce your grade: ");
    scanf("%f",&grade);

    if(grade<5){
        printf("You have failed the subject");
    }

    else if(grade>=5 && grade < 6){
        printf("You passed with a sufficient grade.");
    }

    else if(grade>= 6 && grade <7){
        printf("You passed with a good grade");
    }

    else if(grade>= 7 && grade <9){
        printf("You passed with a notable grade");
    }

    else if(grade>= 9 && grade <9.7){
        printf("You passed with an excellent grade");
    }

    else if(grade>= 9.8 && grade <=10){
        printf("You received an honor roll");
    }else{
        printf("Invalid grade");
    }



}
