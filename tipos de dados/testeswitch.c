#include <stdio.h>

    int main(int argc, char* argv[]){
        int i;
        float a, b;
        

        printf ("escolha um numero: 1 ou 2\n");
        scanf ("%d", &i);
        printf("selecione numeros\n");
        scanf ("%f %f", &a, &b);
        int adicao = a + b;
        int subtracao = a - b;

        switch (1)
        {
        
        switch (i)
        {
        case 1:
        printf ("a subtracao eh: %d\n", subtracao);
            
            break;

        case 2:
        printf ("a adicao é: %d\n", adicao);
        break;

        
        default:
            printf ("erro.\n");
        break;

        }
        }

        return 0;
}
