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
	WIN32_FIND_DATA FindFileData;
	HANDLE hFind;

	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: DirOpen %s", dirname);

	hFind = FindFirstFile(dirname, &FindFileData);

	   if (hFind == INVALID_HANDLE_VALUE)
	   {
		   Log(LOG_LEVEL_VERBOSE, "---- FindFirstFile failed .. %s", GetLastError());
	   }

	   Log(LOG_LEVEL_VERBOSE, "---- handle: %s", hFind);

	   return hFind;
}

const struct dirent *DirRead(Dir *dir)
{
	// FindNextFile();
	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: DirRead ..");¨
	WIN32_FIND_DATA FindFileData;
	BOOL hFind;

	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: DirRead %s", dir);

	hFind = FindNextFile(dir, &FindFileData);

	   if (hFind == INVALID_HANDLE_VALUE)
	   {
		   Log(LOG_LEVEL_VERBOSE, "---- FindNextFile failed .. %s", GetLastError());
	   }

	   Log(LOG_LEVEL_VERBOSE, "---- handle: %s", hFind);

	   return hFind;
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
