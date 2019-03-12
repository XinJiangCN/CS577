#include <iostream>
#include <cmath>
using namespace std;


struct island{
    int x;
    int y;
    int pop;
    double t_main;
    bool isConnected;
};
int cmp_isl(const void* p1, const void* p2){
    struct island * i1 = (struct island*) p1;
    struct island * i2 =(struct island*) p2;
    if (i1 -> t_main > i2 -> t_main )
        return 1;
    else if (i1 -> t_main > i2 -> t_main)
        return -1;
    return 0;
}
double calc_d(struct island * i1,struct island * i2){
    return sqrt((int)(pow((i1->x-i2->x),2)) + pow((i1->y-i2->y),2));
}
void calc_t(struct island * islands, int n){
    for (int i = 1; i < n; i++){
       (islands+i)->t_main = (islands+i)->pop/calc_d(islands, islands+i);
    }
}
int main() {
    int n = 0;
    cin >> n;
    struct island* islands = (struct island*)malloc(sizeof(struct island)*n);
    for (int i = 0; i < n; i++) {
        cin >> (islands+i) -> x;
        cin >> (islands+i)-> y;
        cin >> (islands+i)-> pop;
        (islands+i) -> isConnected = false;
    }
    islands -> t_main = 0;
    calc_t(islands,n);
    qsort((void*)islands, n, sizeof(struct island),cmp_isl);
    
    for (int i = 1; i < n; i++){
        double curr_min = 0;
        int picked = -1;
        for (int j = i - 1; j > 0; j--){
            if (int val = (islands+i)->pop/calc_d((islands + i), (islands+j)) < curr_min){
                curr_min = val;
                picked = j;
            }
        }
        (islands + picked)    
    }




    return 0;
}


