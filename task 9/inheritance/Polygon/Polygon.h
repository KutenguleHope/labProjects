#ifndef Polygon_h
#define Polygon_h

class Polygon{
   protected:
    int mWidth;
    int mHeight;
   public:
    void SetValues(int width, int height);
   virtual int Area() = 0;
    void PrintArea();
    };
#endif