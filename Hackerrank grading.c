#include<stdio.h>
int main(){
    int n,grade,i,incrementedGrade;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&grade);
        if(grade<38){
            printf("%d\n",grade);
        }
        else {
            incrementedGrade = (grade/5+1)*5;
            if(incrementedGrade-grade<3)
                printf("%d\n",incrementedGrade);
            else{
                printf("%d\n",grade);
            }
        }
    }
    return 0;
}
