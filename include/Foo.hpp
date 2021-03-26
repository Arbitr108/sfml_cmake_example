#ifndef FOO_HPP
#define FOO_HPP

#include <string>

class
Foo
	{
	  public:

		Foo() = delete;

		Foo(std::string && value);

		std::string
		get_value();

	  private:

		std::string
		value_;
	};

#endif // FOO_HPP
