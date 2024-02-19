// Referenz Arbeitsblatt: Umsaetze Eis Lecker AG

#include <stdio.h>

int main(){

    float umsaetze[12][3]={	{3254.25,2274.85,4253.55},
                               {3283.35,2462.75,4233.65},
                               {3357.55,2571.85,4352.25},
                               {3854.25,2874.85,4733.63},
                               {4252.25,3272.81,4963.52},
                               {4554.11,3574.82,5251.15},
                               {4854.25,3578.85,5275.78},
                               {4564.26,3684.85,5341.78},
                               {3888.26,3555.85,4918.55},
                               {3458.35,2484.85,4518.45},
                               {3212.12,2272.85,4355.55},
                               {3112.11,2171.85,4115.15}	};

    char monate[12][10] = { "Januar  ",
                            "Februar ",
                            "Maerz    ",
                            "April   ",
                            "Mai     ",
                            "Juni    ",
                            "Juli    ",
                            "August  ",
                            "September",
                            "Oktober ",
                            "November",
                            "Dezemeber" };


    char land[4][20] = {"           ",
                        "Deutschland",
                        "Frankreich",
                        "Italien"};


    for (int a = 0; a < 4; ++a) {
        for (int i = 0; i < 1; ++i) {
            printf("%s\t", land[a][i]);
        }
    }

    for (int i = 0; i < 12; ++i) {
        printf("%s\t", monate[i]);

        for (int j = 0; j < 3; ++j) {
            printf("%.2f\t\t", umsaetze[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}