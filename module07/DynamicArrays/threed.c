#include "threed.h"

ThreeDPtr CreateThreeD(int x, int y, int z) {
    ThreeDPtr threeD = (ThreeDPtr) malloc(sizeof(ThreeDPtr));
    threeD->x = x;
    threeD->y = y;
    threeD->z = z;

    threeD->array = (int ***) malloc(sizeof(int **) * x);

    int i, j;
    for (i = 0; i < y; i++) {
        threeD->array[i] = (int **) malloc(sizeof(int *) * y);
        for (j = 0; j < z; j++) {
            threeD->array[i][j] = (int *) malloc(sizeof(int) * z);
        }
    }
}

void SetVal(ThreeDPtr T, int x, int y, int z, int a) {
    //TODO
}

int GetVal(ThreeDPtr T, int x, int y, int z) {
    //TODO
}

void DestroyThreeD(ThreeDPtr T) {
    //TODO!
}