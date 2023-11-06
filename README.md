Summary:
	This project is about coding a C library.
	It will contain a lot of general purpose functions your programs will rely upon.

Mandatory part
	Description Write your own library: a collection of functions
	that will be a useful tool for your cursus.

  Part 1 - Libc functions
	To begin, you must redo a set of functions from the libc. Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their man. The only difference will be their names. They will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.

	Some of the functions’ prototypes you have to redo use the ’restrict’ qualifier. This keyword is part of the c99 standard. It is therefore forbidden to include it in your own prototypes and to compile your code with the -std=c99 flag. 
	
	You must write your own function implementing the following original ones. They do not require any external functions:
	• isalpha				• strlcat
	• isdigit				• toupper
	• isalnum				• tolower
	• isascii				• strchr
	• isprint				• strrchr
	• strlen				• strncmp
	• memset				• memchr
	• bzero					• memcmp
	• memcpy				• strnstr
	• memmove				• atoi
	• strlcpy

	In order to implement the two following functions, you will use malloc():
	• calloc
	• strdup

  Part 2 - Additional functions
	In this second part, you must develop a set of functions that are either not in the libc, or that are part of it but in a different form.
	
	char *ft_substr(char const *s, unsigned int start, size_t len);
	  Parameters:
	  	s: The string from which to create the substring.
	  	start: The start index of the substring in the string ’s’.
	  	len: The maximum length of the substring.
	  Return value:
	  	- The substring.
	  	- NULL if the allocation fails.
	  External functs. malloc
	  Description:
	  	Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.

	char *ft_strjoin(char const *s1, char const *s2);
	  Parameters:
		s1: The prefix string.
		s2: The suffix string.
	  Return value:
		- The new string.
		- NULL if the allocation fails.
	  External functs. malloc
	  Description:
		Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

	char *ft_strtrim(char const *s1, char const *set);
	  Parameters:
		s1: The string to be trimmed.
		set: The reference set of characters to trim.
	  Return value:
		- The trimmed string.
		- NULL if the allocation fails.
	  External functs. malloc
	  Description:
	  	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

	char **ft_split(char const *s, char c);
	  Parameters:
		s: The string to be split.
		c: The delimiter character.
	  Return value:
		- The array of new strings resulting from the split.
		- NULL if the allocation fails.
	  External functs. malloc, free
	  Description:
		Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.
	
	char *ft_itoa(int n);
	  Parameters:
		n: the integer to convert.
	  Return value:
		- The string representing the integer.
		- NULL if the allocation fails.
	  External functs. malloc
	  Description:
		Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
	
	char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
	  Parameters:
		s: The string on which to iterate.
		f: The function to apply to each character.
	  Return value:
		- The string created from the successive applications of ’f’.
		- NULL if the allocation fails.
	  External functs. malloc
	  Description:
		Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.

	void ft_striteri(char *s, void (*f)(unsigned int, char*));
	  Parameters:
		s: The string on which to iterate.
		f: The function to apply to each character.
	  Return value None
	  External functs. None
	  Description:
		Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.

	void ft_putchar_fd(char c, int fd);
	  Parameters:
		c: The character to output.
		fd: The file descriptor on which to write.
	  Return value:
		- None
	  External functs. write
	  Description:
		Outputs the character ’c’ to the given file descriptor.
	
	void ft_putstr_fd(char *s, int fd);
	  Parameters:
		s: The string to output.
		fd: The file descriptor on which to write.
	  Return value:
		- None
	  External functs. write
	  Description:
		Outputs the string ’s’ to the given file descriptor.

	void ft_putendl_fd(char *s, int fd);
	  Parameters:
	  	s: The string to output
		fd: The file descriptor on which to write
	  Return value:
	  	- None
	  External functs. write
	  Description:
		Outputs the string ’s’ to the given file descriptor followed by a newline.

	void ft_putnbr_fd(int n, int fd);
	  Parameters:
		n: The integer to output
		fd: The file descriptor on which to write
	  Return value:
	  	- None
	  External functs. write
	  Description:
		Outputs the integer ’n’ to the given file descriptor.

Bonus part
	If you completed the mandatory part, do not hesitate to go further by doing this extra one. It will bring bonus points if passed successfully.
	Functions to manipulate memory and strings is very useful. But you will soon discover that manipulating lists is even more useful.
	You have to use the following structure to represent a node of your list. Add its declaration to your libft.h file:

	typedef struct s_list
	{
		void *content;
		struct s_list *next;
	} t_list;

	The members of the t_list struct are:
	• content: The data contained in the node. void * allows to store any kind of data.
	• next: The address of the next node, or NULL if the next node is the last one.

	In your Makefile, add a make bonus rule to add the bonus functions to your libft.

	Implement the following functions in order to easily use your lists.
	
	t_list *ft_lstnew(void *content);
	  Parameters:
		content: The content to create the node with.
	  Return value:
		- The new node
	  External functs. malloc
	  Description:
		Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
	
	void ft_lstadd_front(t_list **lst, t_list *new);
	  Parameters:
		lst: The address of a pointer to the first link of a list. 
		new: The address of a pointer to the node to be added to the list.
	  Return value:
		- None
	  External functs. None
	  Description:
		Adds the node ’new’ at the beginning of the list.
	
	int ft_lstsize(t_list *lst);
	  Parameters:
		lst: The beginning of the list.
	  Return value:
		- The length of the list
	  External functs. None
	  Description:
		Counts the number of nodes in a list.
	
	t_list *ft_lstlast(t_list *lst);	
	  Parameters:
		lst: The beginning of the list.
	  Return value:
		- Last node of the list
	  External functs. None
	  Description:
		Returns the last node of the list.

	void ft_lstadd_back(t_list **lst, t_list *new);
	  Parameters:
		lst: The address of a pointer to the first link of a list.
		new: The address of a pointer to the node to be added to the list.
	  Return value:
		- None
	  External functs. None
	  Description:
		Adds the node ’new’ at the end of the list.
	
	void ft_lstdelone(t_list *lst, void (*del)(void *));
	  Parameters:
		lst: The node to free.
		del: The address of the function used to delete the content.
	  Return value:
		- None
	  External functs. free
	  Description:
		Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.

	void ft_lstclear(t_list **lst, void (*del)(void *));
	  Parameters:
		lst: The address of a pointer to a node.
		del: The address of the function used to delete the content of the node.
	  Return value:
		- None
	  External functs. free
	  Description:
		Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3).
		Finally, the pointer to the list must be set to NULL.

	void ft_lstiter(t_list *lst, void (*f)(void *));
	  Parameters:
		lst: The address of a pointer to a node.
		f: The address of the function used to iterate on the list.
	  Return value:
		- None
	  External functs. None
	  Description:
		Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
	
	t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
	  Parameters:
		lst: The address of a pointer to a node.
		f: The address of the function used to iterate on the list.
		del: The address of the function used to delete the content of a node if needed.
	  Return value:
		- The new list.
		- NULL if the allocation fails.
	  External functs. malloc, free
	  Description
		Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.