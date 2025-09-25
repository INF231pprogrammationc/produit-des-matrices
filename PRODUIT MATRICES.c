
#include <stdio.h>
int main() {
    int m, n, p;
    int i, j, k;
    printf("Entrez le nombre de lignes de la matrice A : ");
    scanf("%d", &m);
    printf("Entrez le nombre de colonnes de la matrice A : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la matrice B : ");
    scanf("%d", &p);
    int A[m][n], B[n][p], C[m][p];
    printf("Entrez les éléments de la matrice A :\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }

    printf("Entrez les éléments de la matrice B :\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < p; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    for(i = 0; i < m; i++)
        for(j = 0; j < p; j++) {
            C[i][j] = 0;
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    printf("\nProduit des matrices A × B :\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }

    return 0;
}
produit matrice 1 3.c
