#include <stdio.h>
#include <string.h>

int main(){
    char num1[201], num2[201], result[202];
    int p1, p2, caboZero, maior,i, temp, vai, dig;

    scanf("%s", num1);
    scanf("%s", num2);

    p1 = strlen(num1);
    p2 = strlen(num2);

    //maior = p1;
    //if(p2>p1) maior = p2;
    result[0] = '\0';
    vai = 0;
    for(i = 1; i<=p1; i++){
        if(i<=p2){
            temp = vai + num1[p1-i]+num2[p2-i] - 2*'0';
            vai = 0;
            dig = temp%10;
            result[i] = dig+'0';
            if(temp>=10) vai = 1;
        }else{
            temp = vai + num1[p1-i]-'0';
            vai = 0;
            dig = temp%10;
            result[i] = dig+'0';
            if(temp>=10) vai = 1;
        }
    }
    for(;i<=p2;i++){
        temp = vai + num2[p2-i]-'0';
        vai = 0;
        dig = temp%10;
        result[i] = dig+'0';
        if(temp>=10) vai = 1;
    }
    if(vai == 1){
        result[i++] = 1+'0';
    }
    temp = i;
    caboZero = 0;
    for(i = 1; i<temp; i++){
        if(result[temp-i] != '0') caboZero = 1;
        if(caboZero == 1){
            printf("%c", result[temp-i]);
        }
    }
    printf("\n");
    return 0;
}
