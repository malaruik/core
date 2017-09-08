/*



 */

#include <fncall.h>
#include <cf3.defs.h>
#include <windows.h>
#include <stddef.h>

int IsExecutable(const char *file)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: IsExecutable ..");
}

void CloseLog(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: CloseLog ..");
}

void OpenLog(int facility)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: OpenLog ..");
}

void OpenNetwork(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: OpenNetwork ..");
}

void CloseNetwork(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: CloseNetwork ..");
}

int NovaWin_GetWinDir(char *winDir, int winDirSz)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: NovaWin_GetWinDir ..");
}

int NovaWin_GetSysDir(char *sysDir, int sysDirSz)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: NovaWin_GetSysDir ..");
}

int NovaWin_GetProgDir(char *progDir, int progDirSz)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: NovaWin_GetProgDir ..");
}

int NovaWin_GetEnv(char *varName, char *varContents, int varContentsSz)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "mingw stub: NovaWin_GetEnv ..");
}

int NovaWin_FileExists(const char *fileName)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "mingw stub: NovaWin_FileExists ..");
}

int NovaWin_IsDir(char *fileName)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "mingw stub: NovaWin_IsDir ..");
}

int NovaWin_PackageListInstalledFromAPI(EvalContext *ctx, PackageItem ** pkgList, Attributes a, Promise *pp)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "mingw stub: NovaWin_PackageListInstalledFromAPI ..");
}

const char *GetDefaultWorkDir(void)
{

	Log(LOG_LEVEL_NOTICE, "GetDefaultWorkDir.. ");

    const unsigned long maxDir = 260;
    // malloc !!!
    //const char currentDir[maxDir];

    const char *currentDir = malloc(sizeof(char) * 260);

    GetCurrentDirectory(maxDir, currentDir);

    Log(LOG_LEVEL_NOTICE, "Work (orig)directory is %s", currentDir);

    return currentDir;

}

const char *GetDefaultLogDir(void)
{
	 Log(LOG_LEVEL_VERBOSE, "mingw stub: GetDefaultLogDir ..");

	 const char* defwd = GetDefaultWorkDir();
	 const char* definputd = malloc(sizeof(char)*strlen(defwd)+sizeof(char)*strlen("\log")+1);
	 definputd = strncat(defwd, "\log", strlen("\log")+1);

	 return definputd;

}

const char *GetDefaultPidDir(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "mingw stub: GetDefaultPidDir ..");

	 const char* defwd = GetDefaultWorkDir();
	 const char* definputd = malloc(sizeof(char)*strlen(defwd)+sizeof(char)*strlen("\pid")+1);
	 definputd = strncat(defwd, "\pid", strlen("\pid")+1);

	  Log(LOG_LEVEL_VERBOSE, "mingw stubs: PidDir: %s", defwd);

	 return definputd;
}

const char *GetDefaultMasterDir(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "mingw stub: GetDefaultMasterDir ..");

	 const char* defwd = GetDefaultWorkDir();
	 const char* definputd = malloc(sizeof(char)*strlen(defwd)+sizeof(char)*strlen("\master")+1);
	 definputd = strncat(defwd, "\master", strlen("\master")+1);

	  Log(LOG_LEVEL_VERBOSE, "mingw stubs: MasterDir: %s", defwd);

	 return definputd;
}

const char *GetDefaultInputDir(void)
{
  //MAla

    Log(LOG_LEVEL_VERBOSE, "mingw stubs: GetDefaultInputDir");

	const char* defwd = GetDefaultWorkDir();
	const char* definputd = malloc(sizeof(char)*strlen(defwd)+sizeof(char)*strlen("\inputs")+1);
	definputd = strncat(defwd, "\inputs", strlen("\inputs")+1);

    Log(LOG_LEVEL_VERBOSE, "mingw stubs: InputDir: %s", defwd);

	return definputd;
}

FnCallResult FnCallUserExists(EvalContext *ctx, FnCall *fp, Rlist *finalargs)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: FnCallUserExists ..");
}

FnCallResult FnCallGroupExists(EvalContext *ctx, FnCall *fp, Rlist *finalargs)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: FnCallGroupExists ..");
}

off_t GetDiskUsage(char *file, CfSize type)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: GetDiskUsage ..");
}

void InitializeWindows(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: InitializeWindows ..");
}

void CreateEmptyFile(char *name)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: CreateEmptyFile ..");
}

int LoadProcessTable()
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: LoadProcessTable ..");
}

bool ShellCommandReturnsZero(void)
{
  //MAla
	 Log(LOG_LEVEL_VERBOSE, "minge stub: ShellCommandReturnsZero ..");
}

int CopyACLs(ARG_UNUSED const char *src, ARG_UNUSED const char *dst)
{
	 Log(LOG_LEVEL_VERBOSE, "minge stub: CopyACLs ..");
  return true;
}

int ExclusiveLockFile(int fd)
{
	 Log(LOG_LEVEL_VERBOSE, "minge stub: ExclusiveLockFile ..");
  return true;
}

int ExclusiveUnlockFile(int fd)
{
	 Log(LOG_LEVEL_VERBOSE, "minge stub: ExclusiveUnlockFile ..");
  return true;
}
bool BootstrapAllowed(void)
{
	 Log(LOG_LEVEL_VERBOSE, "minge stub: BootstrapAllowed ..");
  //MAla
}
