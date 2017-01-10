
./configure --host=x86_64-w64-mingw32 --target=x86_64-w64-mingw32 --disable-slapd CFLAGS="-i/usr/x86_64-w64-mingw32/sys-root/mingw/include/"

make depend
make

emacs ./libraries/liblber/nt_err.c
emacs include/portable.h
emacs ./cf-execd/cf-execd-runner.c
emacs /home/kortemik/code/core/cf-upgrade/update.c
emacs /home/kortemik/code/core/cf-upgrade/alloc-mini.c
emacs cf-upgrade/process.c
emacs /home/kortemik/code/core/cf-upgrade/log.c

CFLAGS="-I/home/kortemik/code/openldap/libraries/liblmdb" LDFLAGS="-L/home/kortemik/code/openldap/libraries/liblmdb" ./configure --target=x86_64-w64-mingw32 --host=x86_64-w64-mingw32 --with-lmdb=/home/kortemik/code/openldap/libraries/liblmdb/ 
make -j9

CFLAGS="-I/home/kortemik/code/openldap/libraries/liblmdb" LDFLAGS="-L/home/kortemik/code/openldap/libraries/liblmdb -lmsvcrt" ./configure --target=x86_64-w64-mingw32 --host=x86_64-w64-mingw32 --with-lmdb=/home/kortemik/code/openldap/libraries/liblmdb/

x86_64-w64-mingw32-gcc -D__MSVCRT_VERSION__=0x0700 -D__USE_MINGW_ANSI_STDIO=1 -I/home/kortemik/code/openldap/libraries/liblmdb -g -Wall -Wno-pointer-sign -Werror=implicit-function-declaration -Wunused-parameter -Wno-format -O2 -DNDEBUG -D__MSVCRT_VERSION__=0x0700 -D__USE_MINGW_ANSI_STDIO=1 -I/home/kortemik/code/openldap/libraries/liblmdb -static-libgcc -o .libs/cf-upgrade.exe alloc-mini.o command_line.o configuration.o log.o process.o update.o cf-upgrade.o  -L/home/kortemik/code/openldap/libraries/liblmdb ../libcompat/.libs/libcompat.a
rm cf-upgrade.exe 

/bin/sh ../libtool  --tag=CC   --mode=link x86_64-w64-mingw32-gcc -D__MSVCRT_VERSION__=0x0700 -D__USE_MINGW_ANSI_STDIO=1 -I/home/kortemik/code/openldap/libraries/liblmdb -g -Wall -Wno-pointer-sign -Werror=implicit-function-declaration -Wunused-parameter -Wno-format -O2 -DNDEBUG -D__MSVCRT_VERSION__=0x0700 -D__USE_MINGW_ANSI_STDIO=1 -I/home/kortemik/code/openldap/libraries/liblmdb -L/home/kortemik/code/openldap/libraries/liblmdb -static-libgcc -o .libs/cf-agent .libs/cf-agent.o  ./.libs/libcf-agent.a /home/kortemik/code/core/libpromises/.libs/libpromises.la /home/kortemik/code/core/libutils/.libs/libutils.la -lssl -lcrypto -lpcre -lm -pthread -llmdb 2>&1|wc -l
