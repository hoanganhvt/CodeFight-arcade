int shapeArea(int n) {
  int size = 0;
 for(int i = 1; i < n*2-1;i+=2)
 {

     size+=i;
 }
    return  size*2+n*2-1;
}