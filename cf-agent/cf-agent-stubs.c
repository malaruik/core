#include <cf3.defs.h>
#include <cfnet.h>
#include <comparray.h>
#include <generic_agent.h>

int GetOwnerName(char *path, struct stat *lstatptr, char *owner, int ownerSz)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- CF-AGENT stub: GetOwnerName ..");
}

PromiseResult VerifyRegistryPromise(EvalContext *ctx, Attributes a, const Promise *pp)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- CF-AGENT stub: VerifyRegistryPromise ..");
}

PromiseResult VerifyWindowsService(EvalContext *ctx, Attributes a, Promise *pp)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- CF-AGENT stub: VerifyWindowsService ..");
}

PromiseResult Nova_CheckNtACL(EvalContext *ctx, const char *file_path, Acl acl, Attributes a, const Promise *pp)
{
  //MAla
	Log(LOG_LEVEL_VERBOSE, "---- CF-AGENT stub: Nova_CheckNtACL ..");
}
