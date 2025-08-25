#include "list.h"
#include <algorithm> // std::swap
#include <new>       // std::nothrow

List::List(std::size_t capacity)
    : data_(nullptr), size_(0), capacity_(capacity == 0 ? kDefaultCapacity : capacity) {
    data_ = new (std::nothrow) Item[capacity_];
    if (!data_) {
        // 分配失败则退回到默认容量
        capacity_ = kDefaultCapacity;
        data_ = new Item[capacity_];
    }
}

List::List(const List& other)
    : data_(nullptr), size_(other.size_), capacity_(other.capacity_) {
    data_ = new Item[capacity_];
    for (std::size_t i = 0; i < size_; ++i) {
        data_[i] = other.data_[i];
    }
}

List& List::operator=(const List& other) {
    if (this != &other) {
        List tmp(other);
        swap(tmp);
    }
    return *this;
}

List::~List() {
    delete[] data_;
    data_ = nullptr;
    size_ = 0;
    capacity_ = 0;
}

bool List::add(const Item& value) {
    if (isfull()) {
        return false;
    }
    data_[size_++] = value;
    return true;
}

bool List::isempty() const {
    return size_ == 0;
}

bool List::isfull() const {
    return size_ >= capacity_;
}

void List::visit(void (*pf)(Item&)) {
    if (!pf) return;
    for (std::size_t i = 0; i < size_; ++i) {
        pf(data_[i]);
    }
}

void List::swap(List& other) noexcept {
    using std::swap;
    swap(data_, other.data_);
    swap(size_, other.size_);
    swap(capacity_, other.capacity_);
}
