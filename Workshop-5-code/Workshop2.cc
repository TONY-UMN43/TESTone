#include <iostream>
using namespace std;
// classes
// akiny024
// 
class OrderMethod{
    public:
        OrderMethod();
        virtual void takeOrder() {
            std::cout << "Taking Order" << std::endl;
        }
        virtual void processPayment() {
            std::cout << "Processing Payment" << std::endl;
        }
        virtual void completeOrder() {
            takeOrder();
            processPayment();
            std::cout << "Order Completed" << std::endl;
        }
        // Calls takeOrder, then processPayment, cout << "order completed"

    // private:
};

class DineIn : public OrderMethod {

    void takeOrder() override{
        cout << "Taking Dine-In Order" << endl;
    }
    void processPayment() override {
        cout << "Processing payment for Dine-In..." << endl;
    };
};

// three other classes

class TakeOut : public OrderMethod{
    void takeOrder() override{
        cout << "Taking Takeout Order" << endl;
    }
    void processPayment() override{
        cout << "Processing payment for Take-Out..." << endl;
    };
};

class DriveThru : public OrderMethod{
    void takeOrder() override {
        cout << "Taking ordeer at Drive-Thru Window..." << endl;
    }
    void processPayment() override {
        cout << "Processing payment at Drive Thru Window..." << endl;
    }
};

class Delivery : public OrderMethod{
    void takeOrder() override{
        cout << "Taking Delivery Order" << endl;
    }
    void processPayment() override {
        cout << "Processing payment at Delivery..." << endl;
    };
};

int main(){
    /*
    order_method *order
    order = new DineIn()
    order->completeOrder
        Prints out something
    delete order;

    g++ Workshop2.cc
    ./a.out
    */

    // DineIn test_1 = new DineIn();
    // test_1.completeOrder();

    OrderMethod *test_order;
    test_order->completeOrder();
    cout << endl;
    DineIn *test_s;
    test_s->completeOrder();
    // test_order = new DineIn();
    // OrderMethod *test_order_two;
    // test_order_two = new TakeOut();
    // test_order->completeOrder();
    // test_order_two->completeOrder();
    delete test_order;
    // delete test_order_two;
    return 0;
};