#include <iostream>
using namespace std;
template< class T>
class value{
    T my_value;
    value<T>* next;
    value<T>* previous;
    int number;

public:
    value<T>* getNext() const {
        return next;
    }
    value<T>* getPrevious() const {
        return previous;
    }
    T getMy_value() const{
        return my_value;
    }
    void setNumber(int number){
        void::number=number;
    }
    int getNumber() const{
        return number;
    }
    value (T my_value, value<T> *next,value<T> *previous,int number ):my_value(my_value),next(next),previous(previous),number(number){}

};

template <class T>

class stack {

private:
    value<T> *next;
    value<T> *previous;
    int size;
public:
    stack(value<T> *next, value<T> *previous) : next(next), previous(previous) {}
    void add(T myValue, int number) {
        if (number == 1)
            previous = 0;
        next = 0;
    }
    previous = next;
    if(number(else)){
        
    }

    getNumber()

    ){
        next->setNumber(number + 1);
        next->setPrevious(NEXT);
    }
    next = NEXT;
}
};
int main() {
    stack<int>* my_stack=new stack<int>(0,0);
    my_stack->add

    return 0;
}