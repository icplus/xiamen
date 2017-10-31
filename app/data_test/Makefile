.PHONY:all install clean

BINDIR=./bin
OBJDIR=./obj
SRCDIR=./src
CROSS_COMPILE=/yanfa/zhu/.pz/lede_9531/source/staging_dir/toolchain-mips_24kc_gcc-5.4.0_musl/bin/mips-openwrt-linux-
export STAGING_DIR=/yanfa/zhu/.pz/lede_9531/source/staging_dir/toolchain-mips_24kc_gcc-5.4.0_musl/

CC:=$(CROSS_COMPILE)gcc

SRCLIST=$(wildcard $(SRCDIR)/*.c)
OBJLIST=$(SRCLIST:%.c=%.o)

TARGET=data1

all:$(OBJLIST) $(TARGET) install

$(OBJLIST):%.o:%.c 
	$(CC) -c $< -o $@

$(TARGET):$(OBJLIST) 
	$(CC) -o $(TARGET) $(OBJLIST)

install:
	[ -d $(BINDIR) ]|| mkdir bin 
	[ -d $(OBJDIR) ]|| mkdir obj
	mv $(OBJLIST) $(OBJDIR);
	mv $(TARGET) $(BINDIR);

clean:
	rm $(OBJDIR)/* $(BINDIR)/*


.DELETE_ON_ERROR: 
