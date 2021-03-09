#ifndef COMPLEX_H
#define COMPLEX_H

class Complex { 
private:
  int real, imaginary;
public:
  Complex(int x = 0, int y = 0);
  int re();
  int im();
    void operator>>(std::string&) const;
    void operator<<(const std::string&);
};
#endif