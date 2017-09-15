#include <logging.h>
#include <dir.h>
#include <file_lib.h>
#include <windows.h>

#define ioctlsocket(a,b,c)      ioctl(a,b,c)
#define closesocket(s)          close(s)

// Stubs by MAla:

Dir *DirOpen(const char *dirname)
{
	// FindFirstFile();
	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: DirOpen ..");
}

const struct dirent *DirRead(Dir *dir)
{
	// FindNextFile();
	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: DirRead ..");
}

void DirClose(Dir *dir)
{
	// FindClose();
	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: DirClose ..");
}

int rpl_rename(const char *oldpath, const char *newpath)
{

	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: rpl_rename ..");
}

int rpl_stat(const char *path, struct stat *buf)
{

	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: rpl_stat ..");
}

int lstat(const char *file_name, struct stat *buf)
{

	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: lstat ..");
}

int rpl_mkdir(const char *pathname, mode_t mode)
{

	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: rpl_mkdir .. Directory: %s", pathname);
	CreateDirectory(pathname, NULL);
	return 0;
}

void LogToSystemLog(const char *msg, LogLevel level)
{
  //char logmsg[4096];
  //snprintf(logmsg, sizeof(logmsg), "CFEngine(%s) %s %s\n", AgentType, VPREFIX, msg);
  //syslog(LogLevelToSyslogPriority(level), "%s", logmsg);
	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: LogToSystemLog ..");
}

NewLineMode FileNewLineMode(ARG_UNUSED const char *file)
{

	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: FileNewLineMode ..");
}
