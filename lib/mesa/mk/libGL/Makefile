#	$OpenBSD: Makefile,v 1.2 2020/08/28 16:07:18 jsg Exp $

.include <bsd.xconf.mk>

LIB=	GL

SRCS=	clientattrib.c \
	clientinfo.c \
	compsize.c \
	create_context.c \
	dri_common.c \
	dri_common_interop.c \
	dri_common_query_renderer.c \
	drisw_glx.c \
	eval.c \
	glx_error.c \
	glx_pbuffer.c \
	glx_query.c \
	glxcmds.c \
	glxconfig.c \
	glxcurrent.c \
	glxext.c \
	glxextensions.c \
	glxhash.c \
	indirect_glx.c \
	indirect_texture_compression.c \
	indirect_transpose_matrix.c \
	indirect_vertex_array.c \
	indirect_vertex_program.c \
	indirect_window_pos.c \
	pixel.c \
	pixelstore.c \
	query_renderer.c \
	render2.c \
	renderpix.c \
	single2.c \
	singlepix.c \
	vertarr.c \
	xfont.c

# generated
SRCS+=	indirect.c \
	indirect_init.c \
	indirect_size.c

.if ${XENOCARA_BUILD_DRI:L} == "yes"
SRCS+=	dri2.c \
	dri2_glx.c \
	dri_glx.c \
	XF86dri.c
.endif

.if ${XENOCARA_BUILD_DRI3:L} == "yes"
SRCS+=	dri3_glx.c
.endif

.include "../Makefile.inc"

CFLAGS+=	${C_VIS_ARGS}
CPPFLAGS+=	-I${MESA_SRC}/src/glx \
		-I${MESA_SRC}/src/loader \
		-I${MESA_SRC}/src/mapi/glapi \
		-I${MESA_SRC}/generated/src/mapi/glapi/gen

LDADD+=	-L${X11BASE}/lib -lz -lexpat -lXdamage -lXfixes -lX11-xcb -lxcb-glx \
	-lxcb-dri2 -lXxf86vm -lXext -lX11 -lxcb \
	-ldrm -lm -lpthread -lXau -lXdmcp

.if ${XENOCARA_BUILD_DRI3:L} == "yes"
LDADD+=	-lxcb-dri3 -lxcb-xfixes -lxcb-present -lxcb-sync -lxshmfence
.endif

LDADD+=	-L${.CURDIR}/../libglapi/${__objdir} -lglapi \
	${.CURDIR}/../libglapi_static/${__objdir}/libglapi_static.a \
	${.CURDIR}/../libloader/${__objdir}/libloader.a \
	${.CURDIR}/../libxmlconfig/${__objdir}/libxmlconfig.a \
	${.CURDIR}/../libmesa_util/${__objdir}/libmesa_util.a

.if ${XENOCARA_BUILD_DRI3:L} == "yes"
LDADD+=	${.CURDIR}/../libloader_dri3_helper/${__objdir}/libloader_dri3_helper.a
.endif

obj: _xenocara_obj

beforeinstall:
	rm -f ${DESTDIR}${LIBDIR}/lib${LIB}.la

.include <bsd.lib.mk>
.include <bsd.xorg.mk>

.PATH:	${MESA_SRC}/src/glx
.PATH:	${MESA_SRC}/generated/src/mapi/glapi/gen
