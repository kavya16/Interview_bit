You are in an infinite 2D grid where you can move in any of the 8 directions :

 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

Example :

Input : [(0, 0), (1, 1), (1, 2)]
Output : 2




/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer
 */
 
 #include <stdlib.h>
 #define  max( a, b ) ( ( a > b) ? a : b ) 
 
int coverPoints(int* A, int n1, int* B, int n2) {
    
     int count = 0,i;
        for( i = 0; i <n1-1; i++){
            int present_x = A[i];
            int present_y = B[i];
            int target_x = A[i+1];
            int target_y = B[i+1];
            // Max value of absolute diff for x2-x1 and y2-y1 will be the minnimum steps 
            // requried to travel.
            count += max(abs(target_x - present_x),abs(target_y - present_y));
        }
        return count;
    }
    
    

