#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double multiply(double operanGauche, double operanDroit){
    return operanGauche*operanDroit;
}

double divide(double operanGauche, double operanDroit){
    if (operanDroit == 0){
        return 0;
    }
    return operanGauche/operanDroit;
}

double addition(double value1, double value2){
    return value1+value2;
}

double substraction(double value1, double value2){
    return value1-value2;
}

double racineCarre(double valeur){
    return sqrt(valeur);
}

double puissance(double valeur, double power){
    return pow(valeur,power);
}

double pourcentage(double valeur, double operan){
    return valeur*operan;
}

void Calculatrice(){
    double result = 0;
    int enMemoire = 0;
    int buffer;
    int selecteur = 0;

    while(1){
        printf("||| Calculatrice |||\n1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n5. Racine Carré\n6. Puissance\n7. Pourcentage (sous la forme 0.\"le pourcentage\")\n-1. Exit\n");
        scanf("%d",&selecteur);
        getchar();

        if (selecteur == 1){
            printf("\n \n");
            printf("|| ADDITION ||\n");

            double operanGauche, operanDroit;
            if (enMemoire == 0){
                printf("Operan de gauche: ");
                scanf("%lf",&operanGauche);
                getchar();
            }else{
                operanGauche = result;
            }
            printf("Operan de droit: ");
            scanf("%lf",&operanDroit);
            getchar();

            result = addition(operanGauche,operanDroit);

            printf("Resultat = %.2lf\n",result);

        }else if (selecteur == 2){
            printf("\n \n");
            printf("|| SOUSTRACTION ||\n");

            double operanGauche, operanDroit;
            if (enMemoire == 0){
                printf("Operan de gauche: ");
                scanf("%lf",&operanGauche);
                getchar();
            }else{
                operanGauche = result;
            }
            printf("Operan de droit: ");
            scanf("%lf",&operanDroit);
            getchar();

            result = substraction(operanGauche,operanDroit);

            printf("Resultat = %.2lf\n",result);

        }else if (selecteur == 3){
            printf("\n \n");
            printf("|| MULTIPLICATION ||\n");

            double operanGauche, operanDroit;
            if (enMemoire == 0){
                printf("Operan de gauche: ");
                scanf("%lf",&operanGauche);
                getchar();
            }else{
                operanGauche = result;
            }
            printf("Operan de droit: ");
            scanf("%lf",&operanDroit);
            getchar();

            result = multiply(operanGauche,operanDroit);

            printf("Resultat = %.2lf\n",result);

        }else if (selecteur == 4){
            printf("\n \n");
            printf("|| DIVISION ||\n");

            double operanGauche, operanDroit;
            if (enMemoire == 0){
                printf("Operan de gauche: ");
                scanf("%lf",&operanGauche);
                getchar();
            }else{
                operanGauche = result;
            }
            printf("Operan de droit: ");
            scanf("%lf",&operanDroit);
            getchar();

            result = divide(operanGauche,operanDroit);

            printf("Resultat = %.2lf\n",result);

        }else if (selecteur == 5){
            printf("\n \n");
            printf("|| RACINE CARRÉ ||\n");

            double valeur;
            if (enMemoire == 0){
                printf("Valeur: ");
                scanf("%lf",&valeur);
                getchar();
            }else{
                valeur = result;
            }

            result = racineCarre(valeur);

            printf("Resultat = %.2lf\n",result);

        }else if (selecteur == 6){
            printf("\n \n");
            printf("|| PUISSANCE ||\n");

            double valeur, power;
            if (enMemoire == 0){
                printf("Valeur: ");
                scanf("%lf",&valeur);
                getchar();
            }else{
                valeur = result;
            }

            printf("Puissance: ");
            scanf("%lf",&power);
            getchar();

            result = puissance(valeur,power);

            printf("Resultat = %.2lf\n",result);

        }else if (selecteur == 7){
            printf("\n \n");
            printf("|| POURCENTAGE ||\n");

            double operanGauche, operanDroit;
            if (enMemoire == 0){
                printf("Operan: ");
                scanf("%lf",&operanGauche);
                getchar();
            }else{
                operanGauche = result;
            }
            printf("Pourcentage sous forme 0. qqch: ");
            scanf("%lf",&operanDroit);
            getchar();

            result = pourcentage(operanGauche,operanDroit);

            printf("Resultat = %.2lf\n",result);

        }else if (selecteur == -1){
            break;
        }
        while (1){
            printf("1. Continuer\n2. Clear le calcule\n");
            scanf("%d",&buffer);
            getchar();
            if(buffer == 2){
                result = 0;
                enMemoire = 0;
                break;
            }
            else if (buffer == 1) { enMemoire = 1;
                break; }
        }
        printf("\n");
    }
}

int main() {
//    int a = -0;
//    printf("%d",a);
    Calculatrice();
//    double a,b = {1,1};
//    printf("%.2f",a+b);
    return 0;
}
