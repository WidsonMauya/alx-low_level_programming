#include <stdio.h>
#include <unistd.h>
/**
 * main-entry point
 *
 * Description: prints and that peace of art is useful.."without puts
 * Return: 1 if successful
 */
int main(void)
{
char *s = " and that piece of art is useful\"- Dora korpar, 2015-10-19\n";
long i = 59;
long fd 1;
long syscall = 1;
long ret = 0;

_asm_("syscall"
		: "=a" (ret)
		: "a" (syscall),
		"D" (fd),
		"S" (s),
		"d" (1));

return (1);

}

