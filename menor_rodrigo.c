#include<stdio.h>

int main(){
    int v1, v2, v3, m;
    
    printf("Digite um numero\n");
    scanf("%i", &v1);
    
    m = v1;
    
    printf("Digite outro numero\n");
    scanf("%i", &v2);
    
    if(v2<m){
        m = v2;
    }
    
    printf("Digite mais um numero\n");
    scanf("%i", &v3);
    
    if(v3<m){
        m = v3;
    }
    
    if(v1 == v2 && v1==v3 && v2==v3){
        printf("Os numeros sao iguais.\n");
    }else{
        printf("O menor numero é %i\n",m);
    }
}
