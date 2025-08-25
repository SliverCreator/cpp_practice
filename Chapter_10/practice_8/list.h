#ifndef CPP_PRACTICE_CHAPTER_10_PRACTICE_8_LIST_H
#define CPP_PRACTICE_CHAPTER_10_PRACTICE_8_LIST_H

#include <cstddef>

// 数据项类型别名：如需更换存储类型，只需修改此处
// 例如：using Item = double; 或自定义结构体
using Item = int;

class List {
public:
    // 构造空列表，默认容量为默认值
    explicit List(std::size_t capacity = kDefaultCapacity);

    // 拷贝控制，保证资源安全
    List(const List& other);
    List& operator=(const List& other);
    ~List();

    // 在列表末尾添加数据项，若已满返回 false
    bool add(const Item& value);

    // 判断是否为空 / 是否为满
    bool isempty() const;
    bool isfull() const;

    // 对每个数据项执行函数 pf（非成员函数）
    // 若 pf 为空指针则不执行任何操作
    void visit(void (*pf)(Item&));

    // 可选的辅助函数：返回当前元素个数与容量
    std::size_t size() const { return size_; }
    std::size_t capacity() const { return capacity_; }

private:
    static constexpr std::size_t kDefaultCapacity = 10;

    Item* data_ = nullptr;           // 存储区
    std::size_t size_ = 0;           // 已存元素个数
    std::size_t capacity_ = 0;       // 容量

    void swap(List& other) noexcept; // 供赋值使用的交换
};

#endif // CPP_PRACTICE_CHAPTER_10_PRACTICE_8_LIST_H
