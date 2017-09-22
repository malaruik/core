/*                                                                                                                                              
 *  Pipes stubs for minggw porting - 8.2.2017 MAla                                                                                              
 *                                                                                                                                              
 *                                                                                                                                              
 */

#include <pipes.h>


int cf_pclose(FILE *pp)
{
  //
	Log(LOG_LEVEL_VERBOSE, "------ pipes stub: cf_pclose\n");
}

FILE *cf_popen(const char *command, const char *type, bool capture_stderr)
{
  //
	Log(LOG_LEVEL_VERBOSE, "------ pipes stub: cf_popen\n");
}

FILE *cf_popen_sh(const char *command, const char *type)
{
  //
	Log(LOG_LEVEL_VERBOSE, "------ pipes stub: cf_popen_sh\n");
}

int cf_pclose_full_duplex(IOData *data)
{
  //
	Log(LOG_LEVEL_VERBOSE, "------ pipes stub: cf_pclose_full_duplex\n");
}

IOData cf_popen_full_duplex(const char *command, bool capture_stderr, bool require_full_path)
{
  //
	Log(LOG_LEVEL_VERBOSE, "------ pipes stub: cf_popen_full_duplex\n");
}

FILE *cf_popen_powershell(const char *command, const char *type)
{
  //
	Log(LOG_LEVEL_VERBOSE, "------ pipes stub: cf_popen_powershell\n");
}

FILE *cf_popen_powershell_setuid(const char *command, const char *type, uid_t uid, gid_t gid, char *chdirv, char *chrootv, int background)
{
  //
	Log(LOG_LEVEL_VERBOSE, "------ pipes stub: cf_popen_powershell_setuid\n");
}

int cf_pclose_full_duplex_side(int fd)
{
  //
	Log(LOG_LEVEL_VERBOSE, "------ pipes stub: cf_pclose_full_duplex_side\n");
}

FILE *cf_popen_shsetuid(const char *command, const char *type, uid_t uid, gid_t gid, char *chdirv, char *chrootv, int background)
{
  //
	Log(LOG_LEVEL_VERBOSE, "------ pipes stub: cf_popen_shsetuid\n");
}

FILE *cf_popensetuid(const char *command, const char *type, uid_t uid, gid_t gid, char *chdirv, char *chrootv, int background)
{
  //
	Log(LOG_LEVEL_VERBOSE, "------ pipes stub: cf_popensetuid\n");
}
