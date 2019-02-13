#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>

using namespace std;
using Long = long long;
const Long inf = 1ll << 60;
const int N = 100001;
struct point {
    int x;
    int y;
    int i;
};

float get_dis(struct point a, struct point b){
    return sqrt((int)(pow((b.x-a.x),2) + pow((b.y-a.y),2)));
}
int main(){
    int n = 0;
    cin >> n;
    if (n == 0)
        return 0;
    struct point points[N];
    for (int i = 0; i < n; i ++){
        int x,y;
        cin >> x;
        cin >> y;
        points[i]={x,y,i};
    }

    Long min = inf;
    int i1,i2;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            Long d = get_dis(points[i], points[j]);
            if (d < min){
                min = d;
                i1=i;
                i2=j;
            }
        }
    }
    if (i1 > i2){
        int temp;
        temp = i1;
        i1 = i2;
        i2 = temp;
    }
    cout <<i1<<" "<<i2<<" ";
    cout<<fixed << setprecision(6)<<min<<endl;
    return 0;
}
