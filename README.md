### This Project is all about Templates
	* Templates is like a blueprint for blueprint, instead of writing the same function 5 times for different data type, we wrote it once and make the compiler handles it
	* There are 2 types of Templates:
		> Function Teamplates: One Function definition that works with multiple data types
		> Class Templates: One Class definition (like List or Array) that can store any data type
	* 'T' is like a placeholder for any types
		> So when calling swap(int,int), T-> int, same thing happen for string
	* Templates must be declare in header files, Why ?
		> Compiler needs to see the template definition before when using it
		> templates are instantiated at compile time
		> so this is why implementation of template need to be in header, cause if in .cpp the compiler will have a linker error
	* template can be access using (::) means use the global namespace, not the std::swap(this is in <algorithm>)
		> :: means global namespace
