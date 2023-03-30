# KC2.0


Variadic template?

C++03


C++11


C++14


C++17

* Making the text message for static_assert optional
* Allow typename (as an alternative to class) in a template template parameter
* New rules for auto deduction from braced-init-list
* Nested namespace definitions, e.g., namespace X::Y { … } instead of namespace X { namespace Y { … } }
* Allowing attributes for namespaces and enumerators
* New standard attributes [[fallthrough]], [[maybe_unused]] and [[nodiscard]]
* UTF-8 (u8) character literals[10][13] (UTF-8 string literals have existed since C++11; C++17 adds the corresponding character literals for consistency, though as they are restricted to a single byte they can only store "Basic Latin" and C0 control codes, i.e. ASCII)
* Hexadecimal floating-point literals
* Use of auto as the type for a non-type template parameter
* Constant evaluation for all non-type template arguments
* Fold expressions, for variadic templates
* A compile-time static if with the form if constexpr(expression)
* Structured binding declarations, allowing auto [a, b] = getTwoReturnValues();
* Initializers in if and switch statements
* copy-initialization and direct-initialization of objects of type T from prvalue expressions of type T (ignoring top-level cv-qualifiers) shall result in no copy or move constructors from the prvalue expression. See copy elision for more information.
* Some extensions on over-aligned memory allocation
* Class template argument deduction (CTAD), introducing constructor deduction guides, e.g. allowing std::pair(5.0, false) instead of requiring explicit constructor arguments types std::pair<double, bool>(5.0, false) or an additional helper template function std::make_pair(5.0, false).
* Inline variables, which allows the definition of variables in header files without violating the one definition rule. The rules are effectively the same as inline functions
* __has_include, allowing the availability of a header to be checked by preprocessor directives
* Value of __cplusplus changed to 201703L
* Exception specifications were made part of the function type
* Lambda expressions can capture "*this" by value

C++20

concepts,[9] with terse syntax
modules
designated initializers (based on the C99 feature, and common g++ extension)
[=, this] as a lambda capture
template parameter lists on lambdas
three-way comparison using the "spaceship operator", operator <=>
initialization of an additional variable within a range-based for statement
lambdas in unevaluated contexts
default constructible and assignable stateless lambdas
allow pack expansions in lambda init-capture
class types in non-type template parameters, also allowing string literals as template parameters
removing the need for typename in certain circumstances
new standard attributes [[no_unique_address]], [[likely]] and [[unlikely]]
conditional explicit, allowing the explicit modifier to be contingent on a boolean expression
expanded constexpr: virtual functions, union, try and catch, dynamic_cast and typeid, std::pointer_traits
immediate functions using the new consteval keyword
signed integers are now defined to be represented using two's complement (signed integer overflow remains undefined behavior)
a revised memory model
various improvements to structured bindings (interaction with lambda captures, static and thread_local storage duration)
coroutines
using on scoped enums
constinit keyword


C++23
