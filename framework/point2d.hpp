#ifndef BUW_POINT2D_HPP
#define BUW_POINT2D_HPP

class Point2d
{
private:
  int x_;
  int y_;

public:
  Point2d();
  Point2d(int,int);
  ~Point2d();

  int get_x() const;
  int get_y() const;

};

#endif
