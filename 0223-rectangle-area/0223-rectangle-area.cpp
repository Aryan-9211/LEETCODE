class Solution {
public:
    
    bool checkIfRectaangleIsOverlapping(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
        return (ax2 <= bx1 || bx2 <= ax1 || ay2 <= by1 || by2 <= ay1);
    }
    
    int CalculateRectangleArea(int height, int width){
        return (height * width);
    }
            
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int widhtOfFirstRectangle = (ax2 - ax1);
        int heightOfFirstRectangle = (ay2 - ay1);
        
        int widhtOfSecondRectangle = (bx2 - bx1);
        int heightOfSecondRectangle = (by2 - by1);
        
        int areaOfFirstRectangle = CalculateRectangleArea(heightOfFirstRectangle, widhtOfFirstRectangle);
        int areaOfSecondRectangle = CalculateRectangleArea(heightOfSecondRectangle, widhtOfSecondRectangle);
        
        if(checkIfRectaangleIsOverlapping(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2)) {
            return (areaOfFirstRectangle + areaOfSecondRectangle);
        }
        
        int widhtOfOverlappingRectangle = (min(bx2, ax2) - max(ax1, bx1));
        int heightOfOverlappingRectangle = (min(by2, ay2) - max(by1, ay1));
        
        int areaOfOverlappingRectangle = CalculateRectangleArea(heightOfOverlappingRectangle, widhtOfOverlappingRectangle);
        
        return (areaOfFirstRectangle + areaOfSecondRectangle - areaOfOverlappingRectangle);
    }
};