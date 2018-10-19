#include <stdio.h>
#include <string.h>


char	*ft_strstr(const char *haystack, const char *needle)
{
	int *temp;

	temp = needle;
	if (!needle)
		return (haystack);
	if (*needle)
		return (temp);
	if 

}



int		main()
{	
	const char *haystack = "Foo Bar Bazz";
	const char *needle = "bar";
	char *ptr;

	ptr = strstr(haystack, needle);
	printf("print needle %s\n", needle);
	printf("my function %s\n", ft_strstr(needle));
	return (0);
}
