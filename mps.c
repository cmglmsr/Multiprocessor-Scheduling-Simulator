#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {

    // Define the default values of the input parameters
    int N = 2;
    int Q = 20;
    int T=200, T1=10, T2=1000, L=100, L1=10, L2=500;
    int outmode = 1;
    char* sap = "M";
    char* qs = "RM";
    char* alg = "RR";
    char* infile = "in.txt";
    char* outfile = "out.txt";


    for(int i = 1; i < argc; i++) {
        char* cur = argv[i];
        printf("cur=> %s\n", cur);

        if(strcmp(cur, "-n") == 0) {
            N = atoi(argv[++i]);
        }
        else if(strcmp(cur, "-a") == 0) {
            sap = argv[++i];
            qs = argv[++i];
        }
        else if(strcmp(cur, "-s") == 0) {
            alg = argv[++i];
            Q = atoi(argv[++i]);
        }
        else if(strcmp(cur, "-i") == 0) {
            infile = argv[++i];
        }
        else if(strcmp(cur, "-m") == 0) {
            outmode = atoi(argv[++i]);
        }
        else if(strcmp(cur, "-o") == 0) {
            outfile = argv[++i];
        }
        else if(strcmp(cur, "-r") == 0) {
            T=atoi(argv[++i]); T1=atoi(argv[++i]); T2=atoi(argv[++i]);
            L=atoi(argv[++i]); L1=atoi(argv[++i]); L2=atoi(argv[++i]);
        }
        else {
            printf("[-] Ignoring the unknown flag/argument: %s", cur);
        }

    }

    printf("N=%d\n", N);
    printf("SAP=%s   QS=%s\n", sap, qs);
    printf("ALG=%s   Q=%d\n", alg, Q);
    printf("INFILE=%s\n", infile);
    printf("OUTMODE=%d\n", outmode);
    printf("OUTFILE=%s\n", outfile);
    printf("T=%d T1=%d T2=%d L=%d L1=%d L2=%d\n", T, T1, T2, L, L1, L2);

}