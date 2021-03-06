#	$OpenBSD: Makefile,v 1.2 2020/08/28 16:07:19 jsg Exp $

LIB=	vulkan_intel

NOPROFILE=

SRCS=	anv_gem.c

.include "../Makefile.inc"

CFLAGS+=	${C_VIS_ARGS} ${NO_OVERRIDE_INIT_ARGS} ${C_SSE2_ARGS}

CPPFLAGS+=	-I${MESA_SRC}/src/gallium/include \
		-I${MESA_SRC}/src/vulkan/wsi \
		-I${MESA_SRC}/src/vulkan/util \
		-I${MESA_SRC}/src/compiler \
		-I${MESA_SRC}/src/intel \
		-I${MESA_SRC}/src/intel/vulkan \
		-I${MESA_SRC}/src/mesa \
		-I${MESA_SRC}/src/mapi \
		-I${MESA_SRC}/generated/src/intel/vulkan \
		-DVK_USE_PLATFORM_XCB_KHR \
		-DVK_USE_PLATFORM_XLIB_KHR \
		-DVK_USE_PLATFORM_DISPLAY_KHR \
		-DVK_USE_PLATFORM_XLIB_XRANDR_EXT

.if "${MACHINE_ARCH}" == "amd64"
VKARCH=x86_64
.else
VKARCH=${MACHINE_ARCH}
.endif

install: beforeinstall
	${INSTALL} ${INSTALL_COPY} ${INSTALL_STRIP} \
	    -o ${LIBOWN} -g ${LIBGRP} -m ${LIBMODE} \
	    lib${LIB}.so ${DESTDIR}${X11BASE}/lib
	${INSTALL} ${INSTALL_COPY} -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    ${MESA_SRC}/generated/src/intel/vulkan/intel_icd.json \
	    ${DESTDIR}${X11BASE}/share/vulkan/icd.d/intel_icd.${VKARCH}.json

obj: _xenocara_obj

beforeinstall:
	rm -f ${DESTDIR}${LIBDIR}/lib${LIB}.la

.include <bsd.lib.mk>
.include <bsd.xorg.mk>

SLIBS=	libintel_compiler \
	libintel_dev \
	libisl \
	libisl_gen40 \
	libisl_gen50 \
	libisl_gen60 \
	libisl_gen70 \
	libisl_gen75 \
	libisl_gen80 \
	libisl_gen90 \
	libisl_gen100 \
	libisl_gen110 \
	libisl_gen120 \
	libisl_tiled_memcpy \
	libisl_tiled_memcpy_sse41 \
	libblorp \
	libvulkan_wsi \
	libvulkan_util \
	libxmlconfig \
	libmesa_util \
	libmesa_format \
	libintel_perf \
	libintel_common \
	libnir \
	libcompiler

LDADD+=		-Wl,--as-needed -Wl,--allow-shlib-undefined -Wl,--start-group

LDADD+=		-Wl,--whole-archive
LDADD+=		${.CURDIR}/../libanv_common/${__objdir}/libanv_common.a
.for gen in 70 75 80 90 100 110 120
LDADD+=		${.CURDIR}/../libanv_gen${gen}/${__objdir}/libanv_gen${gen}.a
.endfor
LDADD+=		-Wl,--no-whole-archive

.for slib in ${SLIBS}
LDADD+=		${.CURDIR}/../${slib}/${__objdir}/${slib}.a
.endfor

LDADD+=		-pthread -lm -lz -lexpat
LDADD+=		-L${X11BASE}/lib -ldrm \
		-lxcb-dri3 -lxcb-randr -lXrandr -lxcb -lX11-xcb \
		-lX11 -lxcb-dri2 -lxcb-present -lxcb-sync -lxshmfence

LDADD+=		${BUILD_ID_SHA1} -Wl,-Bsymbolic -Wl,--gc-sections \
		-Wl,--end-group

all:	lib${LIB}.so

lib${LIB}.so: ${SOBJS} ${DPADD}
	${CXX} -shared -Wl,-soname,lib${LIB}.so ${PICFLAG} -o ${.TARGET} \
	    `echo ${SOBJS} | tr ' ' '\n' | sort -R` ${LDADD}

CLEANFILES+= lib${LIB}.so

.PATH: ${MESA_SRC}/src/intel/vulkan
.PATH: ${MESA_SRC}/generated/src/intel/vulkan
