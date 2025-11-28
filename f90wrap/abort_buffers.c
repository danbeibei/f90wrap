/* custom abort handler - James Kermode <james.kermode@gmail.com> */

#ifdef __cplusplus
extern "C"
{
#endif

#include <setjmp.h>

#define ABORT_BUFFER_SIZE 1024
jmp_buf environment_buffer;
char abort_message[ABORT_BUFFER_SIZE];

#ifdef __cplusplus
}
#endif

/* end of custom abort handler  */
