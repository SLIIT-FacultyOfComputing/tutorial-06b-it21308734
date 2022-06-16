class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
        void setLengthnWidth(int len, int wid, int h);  
       // write prototypes of getters for length, width and height 
       void getLength();
       void getWidth();
       void getHeight();
 
       int calcVolume();
};

