#ifndef QUEUE_H_
#define QUEUE_H_

template <typename E>  // E is the element type.
class Queue {
 public:
  Queue();
  void Enqueue(const E& element);
  E* Dequeue();  // Returns NULL if the queue is empty.
  int size() const;
  //...
};

template <typename E>
Queue<E>::Queue() {
}

template <typename E>
void Queue<E>::Enqueue(const E& element) {
}

template <typename E>
E* Queue<E>::Dequeue() {
    return nullptr;
}

template <typename E>
int Queue<E>::size() const {
    return 0;
}

#endif