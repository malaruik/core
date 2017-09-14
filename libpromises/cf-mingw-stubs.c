/*



 */

#include <fncall.h>
#include <cf3.defs.h>
#include <windows.h>
#include <stddef.h>

int IsExecutable(const char *file)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: IsExecutable ..");
}

void CloseLog(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: CloseLog ..");
}

void OpenLog(int facility)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: OpenLog ..");
}

void OpenNetwork(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: OpenNetwork ..");
}

void CloseNetwork(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: CloseNetwork ..");
}

int NovaWin_GetWinDir(char *winDir, int winDirSz)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_GetWinDir ..");
}

int NovaWin_GetSysDir(char *sysDir, int sysDirSz)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_GetSysDir ..");
}

int NovaWin_GetProgDir(char *progDir, int progDirSz)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_GetProgDir ..");
}

int NovaWin_GetEnv(char *varName, char *varContents, int varContentsSz)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_GetEnv ..");
}

int NovaWin_FileExists(const char *fileName)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_FileExists ..");
}

int NovaWin_IsDir(char *fileName)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_IsDir ..");
}

int NovaWin_PackageListInstalledFromAPI(EvalContext *ctx, PackageItem ** pkgList, Attributes a, Promise *pp)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_PackageListInstalledFromAPI ..");
}

int NovaWin_UserNameToSid(char *userName, SID *sid, DWORD sidSz, int shouldExist)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: NovaWin_UserNameToSid ..");
}

const char *GetDefaultWorkDir(void)
{

	Log(LOG_LEVEL_VERBOSE, "---- stub: GetDefaultWorkDir ..");

    const unsigned long maxDir = 260;
    // malloc !!!
    //const char currentDir[maxDir];

    const char *currentDir = malloc(sizeof(char) * 260);

    GetCurrentDirectory(maxDir, currentDir);

    Log(LOG_LEVEL_VERBOSE, "---- stubs: WorkDir: %s", currentDir);

    return currentDir;

}

const char *GetDefaultLogDir(void)
{
	 Log(LOG_LEVEL_VERBOSE, "---- stub: GetDefaultLogDir ..");

	 const char* defwd = GetDefaultWorkDir();
	 return defwd;

}

const char *GetDefaultPidDir(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: GetDefaultPidDir ..");

	 const char* defwd = GetDefaultWorkDir();
	 return defwd;
}

const char *GetDefaultMasterDir(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: GetDefaultMasterDir ..");

	 const char* defwd = GetDefaultWorkDir();
	 const char* defmasterd = malloc(sizeof(char)*strlen(defwd)+sizeof(char)*strlen("\\masterfiles")+1);
	 defmasterd = strncat(defwd, "\\masterfiles", strlen("\\masterfiles")+1);

	  Log(LOG_LEVEL_VERBOSE, "---- stubs: MasterDir: %s", defmasterd);

	 return defmasterd;
}

const char *GetDefaultInputDir(void)
{
  //MAla

    Log(LOG_LEVEL_VERBOSE, "---- stubs: GetDefaultInputDir");

	const char* defwd = GetDefaultWorkDir();
	const char* definputd = malloc(sizeof(char)*strlen(defwd)+sizeof(char)*strlen("\\inputs")+1);
	definputd = strncat(defwd, "\\inputs", strlen("\\inputs")+1);

    Log(LOG_LEVEL_VERBOSE, "---- stubs: InputDir: %s", definputd);

	return definputd;
}

FnCallResult FnCallUserExists(EvalContext *ctx, FnCall *fp, Rlist *finalargs)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: FnCallUserExists ..");
}

FnCallResult FnCallGroupExists(EvalContext *ctx, FnCall *fp, Rlist *finalargs)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: FnCallGroupExists ..");
}

off_t GetDiskUsage(char *file, CfSize type)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: GetDiskUsage ..");
}

void InitializeWindows(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: InitializeWindows ..");
}

void CreateEmptyFile(char *name)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: CreateEmptyFile name: %s", name);

	 CreateFile("File.txt", FILE_READ_DATA, FILE_SHARE_READ,
	     NULL, OPEN_ALWAYS, 0, NULL);
}

int LoadProcessTable()
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: LoadProcessTable ..");
}

bool ShellCommandReturnsZero(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "---- stub: ShellCommandReturnsZero ..");
}

int CopyACLs(ARG_UNUSED const char *src, ARG_UNUSED const char *dst)
{
	 Log(LOG_LEVEL_VERBOSE, "---- stub: CopyACLs ..");
  return true;
}

int ExclusiveLockFile(int fd)
{
	 Log(LOG_LEVEL_VERBOSE, "---- stub: ExclusiveLockFile ..");
  return true;
}

int ExclusiveUnlockFile(int fd)
{
	 Log(LOG_LEVEL_VERBOSE, "---- stub: ExclusiveUnlockFile ..");
  return true;
}
bool BootstrapAllowed(void)
{
	 Log(LOG_LEVEL_VERBOSE, "---- stub: BootstrapAllowed ..");
  //MAla
	 return 0;
}
