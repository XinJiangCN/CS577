#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <cstdlib>
using namespace std;



struct point {
    int x;
    int y;
    int i;
};
int get_dis(struct point a, struct point b){
    return sqrt((int)(pow((b.x-a.x),2) + pow((b.y-a.y),2)));
}
int compare_points(const void * p1, const void * p2){
    struct point* a = (struct point*)p1;
    struct point* b = (struct point*)p2;
    if (a->x == b ->x)
        return 0;
    return a->x > b->x?-1:1;
}
int find_min_small(struct point points[], int n){
    if (n == 2){
        get_dis(points[0], points[1]);
        
    }

    return 0;
}

int find_min_global(struct point * a, struct point * b, int n){
    

    return 0;
}
int main(){
    int n = 0;
    cin >> n;
    struct point points[n];
    for (int i = 0; i < n; i ++){
        int x,y;
        cin >> x;
        cin >> y;
        points[i]={x,y,i};
    }
    
    //qsort(&points, n, sizeof(points), compare_points);
    int min = 999999;
    int i1,i2;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int d = get_dis(points[i], points[j]);
            if (d < min){
                min = d;
                i1=i;
                i2=j;
            }
        }
    }
    
    cout<<i1<<" "<<i2<<" "<<min<<endl;
    return 0;
}

