#ifndef SIMPLE_CATCH_HPP
#define SIMPLE_CATCH_HPP

#include <iostream>
#include <vector>
#include <functional>

struct TestEntry {
    std::string name;
    std::function<void()> func;
};

inline std::vector<TestEntry>& get_tests() {
    static std::vector<TestEntry> tests;
    return tests;
}

struct TestRegistrar {
    TestRegistrar(const std::string& name, std::function<void()> func) {
        get_tests().push_back({name, func});
    }
};

#define CONCAT_INNER(a, b) a##b
#define CONCAT(a, b) CONCAT_INNER(a, b)

#define TEST_CASE(name) \
    static void CONCAT(test_func_, __COUNTER__)(); \
    static TestRegistrar CONCAT(test_reg_, __COUNTER__)(name, CONCAT(test_func_, __COUNTER__)); \
    static void CONCAT(test_func_, __COUNTER__)()

#endif
