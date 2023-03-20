//  You are transporting n numbers boxes through a tunnel, where each box is parallelepiped, and is
// characterized by its length, width and height.
// The height of the tunnel feet and the width can be assumed to be infinite. A box can be carried through the
// tunnel only if its height is strictly less than the tunnel's height h. Find the volume of each box that can be
// successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.
// Input: take two integer n and h.
// n line have length, width and height of nth -1 box.

#include<stdio.h>
#include<stdlib.h>
#define MAX_HEIGHT 41
struct box{
    int height;
    int width;
    int length;
};

typedef struct box box;

int get_Volume(box b){
    return  b.height*b.width*b.length;
}

int Check_height(box b){
    if(b.height<MAX_HEIGHT)
    return 1;

    return 0;
}

int main()
{
        int n;
        scanf("%d", &n);
        box *boxes = malloc(n * sizeof(box));
        for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
        }
        for (int i = 0; i < n; i++) {

        if (Check_height(boxes[i])) {
            printf("%d\n", get_Volume(boxes[i]));
        }
        }
        return 0;
}