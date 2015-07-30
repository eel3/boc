/* ********************************************************************** */
/**
 * @brief   Command line tool to show byte order (endianness).
 * @author  eel3
 * @date    2015/07/28
 *
 * @par OS:
 *   - Windows 7 Ultimate 64bit SP1
 *   - Mac OS X 10.9.5
 *   - Raspbian (Raspberry Pi)
 */
/* ********************************************************************** */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	static const char *endian[] = {
		"", "big", "PDP", "middle", "little",
	};
	uint32_t n = (uint32_t) 0x01020304UL;
	const uint8_t *p = (uint8_t *) &n;

	(void) printf("%s-endian\n", endian[*p]);

	return EXIT_SUCCESS;
}
