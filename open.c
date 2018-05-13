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
-- O_APPEND  -> Append to the end of the file on each write
-- O_CLOEXEC --> set the FD_CLOEXEC file descriptor flag.
-- O_CREAT --> create the file if doesn't exist. This option requires thid
arguemnt to open function i.e the mode which specifies the access permission
bit of the new file
--O_DIRECTORY -> Generate an error if path doesn;t refer to a directory
--O_EXCL -> Generate an error if O_CREAT is also specified and file already
exists
--O_NOCTTY -> If path refers to a terminal device, do not allocate the device as the controlling terminal for this process.
-- O_NOFOLLOW -> Generate an error if path refers to a symbolic link.
-- O_NONBLOCK -> If path refers to a FIFO, a block special file, or a character special file, this option sets the nonblocking mode for both the opening of the file and subsequent I/O.
-- O_TRUNC -> If the file exists and if it is successfully opened for either
write-only or read-write , truncate its length to 0.
*/ 
