</$objtype/mkfile

CFLAGS=-Fp -I/sys/include/npe -I/sys/include/npe/SDL2 -D__plan9__ -D__${objtype}__ -I .
BIN=/$objtype/bin/games
TARG=zelda3

OFILES=\
	apu.$O \
	cart.$O \
	cpu.$O \
	dma.$O \
	dsp.$O \
	input.$O \
	ppu.$O \
	snes.$O \
	snes_other.$O \
	spc.$O \
	tracing.$O \
	ancilla.$O \
	attract.$O \
	audio.$O \
	config.$O \
	dungeon.$O \
	ending.$O \
#	glsl_shader.$O \
	hud.$O \
	load_gfx.$O \
	main.$O \
	messaging.$O \
	misc.$O \
	nmi.$O \
#	opengl.$O \
	overlord.$O \
	overworld.$O \
	player.$O \
	player_oam.$O \
	poly.$O \
	select_file.$O \
	spc_player.$O \
	sprite.$O \
	sprite_main.$O \
	tagalong.$O \
	tile_detect.$O \
	util.$O \
	zelda_cpu_infra.$O \
	zelda_rtl.$O \

default:V:	$O.out

all:V:	$O.out

$O.out: $OFILES $LIB
	$LD $LDFLAGS -o $target $prereq

%.$O:	$HFILES		# don't combine with following %.$O rules

%.$O:	snes/%.c
	$CC $CFLAGS $prereq

%.$O:	src/%.c
	$CC $CFLAGS $prereq

%.$O:	%.c
	$CC $CFLAGS $stem.c

install:V:	$BIN/$TARG

$BIN/$TARG:	$O.out
	cp $prereq $BIN/$TARG

installall:V:
	for(objtype in $CPUS)
		mk install

allall:V:
	for(objtype in $CPUS)
		mk all

nuke:V:
	rm -f *.[$OS] [$OS].out y.tab.? lex.yy.c y.debug y.output *.acid $TARG $CLEANFILES

clean:V:
	rm -f *.[$OS] [$OS].out y.tab.? lex.yy.c y.debug y.output $TARG $CLEANFILES
