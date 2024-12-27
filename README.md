# Protected Member Access Demo

A C++ program demonstrating protected member access and inheritance using a simple class hierarchy.

## Description

This program illustrates how protected members work in inheritance by implementing a base class with a protected method and a derived class that accesses this protected method through a public interface.

### Key Features
- Protected member demonstration
- Inheritance implementation
- Indirect access to protected members
- Simple class hierarchy

## Class Structure

```cpp
class tp {
protected:
    void lp(); // Protected method
};

class derived : public tp {
public:
    void getlp(); // Public interface to access protected method
};

