#include <logging.h>
#include <dir.h>
#include <file_lib.h>
#include <windows.h>

#define ioctlsocket(a,b,c)      ioctl(a,b,c)
#define closesocket(s)          close(s)


Dir *DirOpen(const char *dirname)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- LIBUTILS stub: DirOpen ..");
}

const struct dirent *DirRead(Dir *dir)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- LIBUTILS stub: DirRead ..");
}

void DirClose(Dir *dir)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- LIBUTILS stub: DirClose ..");
}

int rpl_rename(const char *oldpath, const char *newpath)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- LIBUTILS stub: rpl_rename ..");
}

int rpl_stat(const char *path, struct stat *buf)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- LIBUTILS stub: rpl_stat ..");
}

int lstat(const char *file_name, struct stat *buf)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- LIBUTILS stub: lstat ..");
}

int rpl_mkdir(const char *pathname, mode_t mode)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- LIBUTILS stub: rpl_mkdir .. Dire: %s", pathname);
	CreateDirectory(pathname, NULL);
	Log(LOG_LEVEL_VERBOSE, "---- LIBUTILS stub: rpl_mkdir done ..");
	return 0;
}

void LogToSystemLog(const char *msg, LogLevel level)
{
  //char logmsg[4096];
  //snprintf(logmsg, sizeof(logmsg), "CFEngine(%s) %s %s\n", AgentType, VPREFIX, msg);
  //syslog(LogLevelToSyslogPriority(level), "%s", logmsg);
	Log(LOG_LEVEL_VERBOSE, "---- LIBUTILS stub: LogToSystemLog ..");
}

NewLineMode FileNewLineMode(ARG_UNUSED const char *file)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- LIBUTILS stub: FileNewLineMode ..");
}
