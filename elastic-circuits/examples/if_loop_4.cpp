//------------------------------------------------------------------------
// If loop
//------------------------------------------------------------------------

float if_loop(float a[1000], float b[1000]) {
    int i;
    float dist;
    float sum = 0.0;

    for (i = 0; i < 1000; i++) {
        dist = a[i] - b[i];

        if (dist >= 0) {

            sum = (sum + dist);
        }
    }
    return sum;
}