//------------------------------------------------------------------------------
// TQueue.h
//
// Template class demo implements a queue with data payload of any type
//------------------------------------------------------------------------------
#ifndef TQUEUE_H
#define TQUEUE_H

#include <vector>

//------------------------------------------------------------------------------
// class template TQueue<>
//------------------------------------------------------------------------------
template <class T>
class TQueue {
private:
	std::vector<T> tV;

public:
	// adds an item of type T to tail of queue
	template <class T>
	void enqueue(T item) { tV.push_back(item); }

	// removes and returns an item of type T from head of queue
	template <class T>
	bool dequeue(T& item) {

		if (tV.size() < 1) {
			return false;
		}

		item = tV.front();
		tV.erase(tV.begin());

		return true;
	}
};
#endif
