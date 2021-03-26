#include "../include/Foo.hpp"

Foo::Foo(std::string && value)
	: value_ { value }
	{
		// Nothing to do
	}

std::string
Foo::get_value()
	{
		return value_;
	}
