/* * open and openat *

--open -> int open(const char *path,int oflag,... ,//mode _t mode //); return -1 if error
openat -> int openat(int fd,const char *path, int oflag,...//mode_t mode);

*/

/** oflags
-- O_RDONLY -> for readonly
-- O_WRONLY -> write only
-- O_RDWR -> reading and writing
--Note : Most implementations define O_RDONLy as 0,O_WRONLY as 1, and O_RDWR as 2
-- O_EXEC -> Open for execute only 
--O_SEARCH -> open for search only 

*/

