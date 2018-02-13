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



public class Solution {
    // X and Y co-ordinates of the points in order.
    // Each point is represented by (X.get(i), Y.get(i))
    public int coverPoints(ArrayList<Integer> X, ArrayList<Integer> Y) {
        int count = 0;
        for(int i = 0; i < X.size()-1; i++){
            int present_x = X.get(i);
            int present_y = Y.get(i);
            int target_x = X.get(i+1);
            int target_y = Y.get(i+1);
            // Max value of absolute diff for x2-x1 and y2-y1 will be the minnimum steps 
            // requried to travel.
            count += Math.max(Math.abs(target_x - present_x),Math.abs(target_y - present_y));
        }
        return count;
    }
}




