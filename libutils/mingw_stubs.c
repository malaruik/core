#include <logging.h>
#include <dir.h>


#define ioctlsocket(a,b,c)      ioctl(a,b,c)
#define closesocket(s)          close(s)


Dir *DirOpen(const char *dirname)
{
  //MAla
}

const struct dirent *DirRead(Dir *dir)
{
  //MAla
}

void DirClose(Dir *dir)
{
  //MAla
}

int rpl_rename(const char *oldpath, const char *newpath)
{
  //MAla
}

int rpl_stat(const char *path, struct stat *buf)
{
  //MAla
}

int lstat(const char *file_name, struct stat *buf)
{
  //MAla
}
