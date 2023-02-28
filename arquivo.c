//exercicios 1, resposta//
int main()
{
    int indice = 13, soma = 0, k = 0;

    while(K < indice) {
        K = K + 1;
        soma = soma + k;
    }

    printf("%d", soma);

}

//exercicio 2, resposta//

int main() {
    int num, a = 0, b = 1, c = 0, pertence = 0;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &num);
    

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }
    if (c == num) {
        pertence = 1;
    }
    
    /
    a = 0;
    b = 1;
    printf("Sequência de Fibonacci até o número %d:\n", num);
    while (a <= num) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    
    
    if (pertence) {
        printf("\n%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("\n%d não pertence à sequência de Fibonacci.\n", num);
    }
    
    return 0;
}

//exercicio 3, resposta//
int main() {
    float faturamento[31] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};
    int dias = 0;
    float media = 0;
    float menor = faturamento[0];
    float maior = faturamento[0];
    for (int i = 0; i < 31; i++) {
        if (faturamento[i] > 0) {
            dias++;
            media += faturamento[i];
            if (faturamento[i] < menor) {
                menor = faturamento[i];
            }
            if (faturamento[i] > maior) {
                maior = faturamento[i];
            }
        }
    }
    media /= dias;
    int acimaMedia = 0;
    for (int i = 0; i < 31; i++) {
        if (faturamento[i] > media) {
            acimaMedia++;
        }
    }
    printf("Menor faturamento diário: R$%.2f\n", menor);
    printf("Maior faturamento diário: R$%.2f\n", maior);
    printf("Dias com faturamento diário acima da média mensal (%.2f): %d\n", media, acimaMedia);
    return 0;
}

//exercicio 4, resposta//
int main() {
    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53, total;
    float perc_sp, perc_rj, perc_mg, perc_es, perc_outros;

    total = sp + rj + mg + es + outros;

    perc_sp = (sp / total) * 100;
    perc_rj = (rj / total) * 100;
    perc_mg = (mg / total) * 100;
    perc_es = (es / total) * 100;
    perc_outros = (outros / total) * 100;

    printf("Percentual de representação por estado:\n");
    printf("SP: %.2f%%\n", perc_sp);
    printf("RJ: %.2f%%\n", perc_rj);
    printf("MG: %.2f%%\n", perc_mg);
    printf("ES: %.2f%%\n", perc_es);
    printf("Outros: %.2f%%\n", perc_outros);

    return 0;
}

//exercicio 5, resposta//

#include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Digite uma string: ");
    scanf("%s", str);

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("A string invertida eh: %s\n", str);

    return 0;
}