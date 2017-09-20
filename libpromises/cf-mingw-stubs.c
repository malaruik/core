/*

  Stubs by MAla:

 */

#include <fncall.h>
#include <cf3.defs.h>
#include <windows.h>
#include <stddef.h>

int IsExecutable(const char *file)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: IsExecutable ..");
}

void CloseLog(void)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: CloseLog ..");
}

void OpenLog(int facility)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: OpenLog ..");
}

void OpenNetwork(void)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: OpenNetwork ..");
}

void CloseNetwork(void)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: CloseNetwork ..");
}

int NovaWin_GetWinDir(char *winDir, int winDirSz)
{

	 //Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_GetWinDir ..");
	 return GetWindowsDirectory(winDir, winDirSz);
}

int NovaWin_GetSysDir(char *sysDir, int sysDirSz)
{

	 //Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_GetSysDir ..");
	 return GetSystemDirectory(sysDir, sysDirSz);
}

int NovaWin_GetProgDir(char *progDir, int progDirSz)
{

	 //Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_GetProgDir ..");
	 // Program Directory ?
	 return GetWindowsDirectory(progDir, progDirSz);
}

int NovaWin_GetEnv(char *varName, char *varContents, int varContentsSz)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_GetEnv ..");
	 return true;
}

int NovaWin_FileExists(const char *fileName)
{

	 DWORD dfile = GetFileAttributes(fileName);

	 Log(LOG_LEVEL_VERBOSE, "---- stubs: NovaWin_FileExists ..");
	 Log(LOG_LEVEL_VERBOSE, "---- return value: %d", dfile);

	 return GetFileAttributes(fileName);
}

int NovaWin_IsDir(char *fileName)
{
	//BOOL DirectoryExists(LPCTSTR szPath)
	//{
	//  DWORD dwAttrib = GetFileAttributes(szPath);

	//  return (dwAttrib != INVALID_FILE_ATTRIBUTES &&
	 //        (dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
	//}
	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_IsDir ..");
}

int NovaWin_PackageListInstalledFromAPI(EvalContext *ctx, PackageItem ** pkgList, Attributes a, Promise *pp)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_PackageListInstalledFromAPI ..");
}

int NovaWin_UserNameToSid(char *userName, SID *sid, DWORD sidSz, int shouldExist)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_UserNameToSid ..");
}

const char *GetDefaultWorkDir(void)
{
    const unsigned long maxDir = 260;
    const char *currentDir = malloc(sizeof(char) * 260);

    GetCurrentDirectory(maxDir, currentDir);
    //Log(LOG_LEVEL_VERBOSE, "---- stubs: WorkDir: %s", currentDir);

    return currentDir;

}

const char *GetDefaultLogDir(void)
{
	 //Log(LOG_LEVEL_VERBOSE, "---- stub: GetDefaultLogDir ..");

	 const char* defwd = GetDefaultWorkDir();
	 return defwd;

}

const char *GetDefaultPidDir(void)
{
	 //Log(LOG_LEVEL_VERBOSE, "---- stub: GetDefaultPidDir ..");

	 const char* defwd = GetDefaultWorkDir();
	 return defwd;
}

const char *GetDefaultMasterDir(void)
{
	 //Log(LOG_LEVEL_VERBOSE, "---- stub: GetDefaultMasterDir ..");

	 const char* defwd = GetDefaultWorkDir();
	 const char* defmasterd = malloc(sizeof(char)*strlen(defwd)+sizeof(char)*strlen("\\masterfiles")+1);
	 defmasterd = strncat(defwd, "\\masterfiles", strlen("\\masterfiles")+1);

	  Log(LOG_LEVEL_VERBOSE, "---- stubs: MasterDir: %s", defmasterd);

	 return defmasterd;
}

const char *GetDefaultInputDir(void)
{
    //Log(LOG_LEVEL_VERBOSE, "---- stubs: GetDefaultInputDir");

	const char* defwd = GetDefaultWorkDir();
	const char* definputd = malloc(sizeof(char)*strlen(defwd)+sizeof(char)*strlen("\\inputs")+1);
	definputd = strncat(defwd, "\\inputs", strlen("\\inputs")+1);

    Log(LOG_LEVEL_VERBOSE, "---- stubs: InputDir: %s", definputd);

	return definputd;
}

FnCallResult FnCallUserExists(EvalContext *ctx, FnCall *fp, Rlist *finalargs)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: FnCallUserExists ..");
}

FnCallResult FnCallGroupExists(EvalContext *ctx, FnCall *fp, Rlist *finalargs)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: FnCallGroupExists ..");
}

off_t GetDiskUsage(char *file, CfSize type)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: GetDiskUsage ..");
}

void InitializeWindows(void)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: InitializeWindows ..");
}

void CreateEmptyFile(char *name)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: CreateEmptyFile name: %s", name);

	 CreateFile(name, FILE_READ_DATA, FILE_SHARE_READ, NULL, OPEN_ALWAYS, 0, NULL);
}

int LoadProcessTable()
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: LoadProcessTable ..");
}

bool ShellCommandReturnsZero(void)
{

	 Log(LOG_LEVEL_VERBOSE, "---- stub: ShellCommandReturnsZero ..");
}

int CopyACLs(ARG_UNUSED const char *src, ARG_UNUSED const char *dst)
{
	 Log(LOG_LEVEL_VERBOSE, "---- stub: CopyACLs ..");
     return true;
}

int ExclusiveLockFile(int fd)
{
	 // LockFIle
	 Log(LOG_LEVEL_VERBOSE, "---- stub: ExclusiveLockFile ..");

	 BOOL a;

     a = LockFile(fd, 0, 0, 0, 0);

     Log(LOG_LEVEL_VERBOSE, "---- return value: %s", a);

     return a;
}

int ExclusiveUnlockFile(int fd)
{
	 // UnlockFile
	 Log(LOG_LEVEL_VERBOSE, "---- stub: ExclusiveUnlockFile ..");
     return UnlockFile(fd, 0, 0, 0, 0);
}
bool BootstrapAllowed(void)
{
	 Log(LOG_LEVEL_VERBOSE, "---- stub: BootstrapAllowed ..");
  	 return 0;
}
