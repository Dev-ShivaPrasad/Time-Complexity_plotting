#include <stdio.h>
#include <stdlib.h>

int main() {
    //add sorting algorithms and use time/clock to measure the time taken to execute each elements 
    //add a F_time to store the final time taken to execute the whole elements 
    
    return 0;
}

int plotting()
{
    int Input_Size = n;
    double exe_time = F_time;
    FILE *GNUPIPE = popen("gnuplot -persist", "w");
    fprintf(GNUPIPE, "set title 'Quicksort Time Complexity'\n");
    fprintf(GNUPIPE, "set ylabel ('Input Size')\n");
    fprintf(GNUPIPE, "set xlabel 'Execution Time (seconds)'\n");
    fprintf(GNUPIPE, "set yrange [-100:%d+120]\n", Input_Size);
    fprintf(GNUPIPE, "set xrange [-0.1:%f]\n", exe_time);

    fprintf(GNUPIPE, "plot %d lw 2\n", Input_Size);

    pclose(GNUPIPE);

}