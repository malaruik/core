#include <logging.h>
#include <dir.h>
#include <file_lib.h>
#include <windows.h>

#define ioctlsocket(a,b,c)      ioctl(a,b,c)
#define closesocket(s)          close(s)

// Stubs by MAla:

Dir *DirOpen(const char *dirname)
{

	WIN32_FIND_DATA FindFileData;
	HANDLE hFind;

	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: DirOpen %s", dirname);

	hFind = FindFirstFile(dirname, &FindFileData);

	   if (hFind == INVALID_HANDLE_VALUE)
	   {
		   Log(LOG_LEVEL_VERBOSE, "---- FindFirstFile failed .. %s", GetLastError());
	   }

	   //Log(LOG_LEVEL_VERBOSE, "---- handle: %s", hFind);

	   return hFind;
}

const struct dirent *DirRead(Dir *dir)
{

	WIN32_FIND_DATA FindFileData;
	BOOL hFind;

	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: DirRead %x", dir);

	hFind = FindNextFile(dir, &FindFileData);

	   if (hFind == INVALID_HANDLE_VALUE)
	   {
		   Log(LOG_LEVEL_VERBOSE, "---- FindNextFile failed .. %s", GetLastError());
	   }

	   //Log(LOG_LEVEL_VERBOSE, "---- handle: %s", hFind);

	   return hFind;
}

void DirClose(Dir *dir)
{
	BOOL hClose;

	Log(LOG_LEVEL_VERBOSE, "---- libutils stub: DirClose %s", dir);

	hClose = FindClose(dir);

	   if (hClose == INVALID_HANDLE_VALUE)
	   {
		   Log(LOG_LEVEL_VERBOSE, "---- FindClose failed .. %s", GetLastError());
	   }

	   //Log(LOG_LEVEL_VERBOSE, "---- handle: %s", hFind);

	   // return;
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

int socketpair(int domain, int type, int protocol, int sv[2])
{

	SOCKET sock = INVALID_SOCKET;

	Log(LOG_LEVEL_VERBOSE, "---- socket %d %d %d \n", AF_INET, type, protocol);

	sock = socket("127.0.0.1", type, protocol);

	if (sock == INVALID_SOCKET) {

	Log(LOG_LEVEL_VERBOSE, "---- socket function failed with error = %d\n", WSAGetLastError());
	}

	else {
		wprintf(L"socket function succeeded\n");
		Log(LOG_LEVEL_VERBOSE, "---- socket function succeeded\n");
		// Close the socket to release the resources associated
		// Normally an application calls shutdown() before closesocket
		//   to  disables sends or receives on a socket first
		// This isn't needed in this simple sample
		//iResult = closesocket(sock);
		//if (iResult == SOCKET_ERROR) {
		//	wprintf(L"closesocket failed with error = %d\n", WSAGetLastError() );
		//	WSACleanup();
		//	return 1;
		//}
	}
}

