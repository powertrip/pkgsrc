# $NetBSD: Makefile,v 1.7 2013/05/20 21:20:23 prlw1 Exp $

DISTNAME=	yelp-xsl-3.8.1
CATEGORIES=	textproc gnome
MASTER_SITES=	${MASTER_SITE_GNOME:=sources/yelp-xsl/${PKGVERSION_NOREV:R}/}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	prlw1@cam.ac.uk
HOMEPAGE=	http://www.gnome.org/
COMMENT=	XSL stylesheets for Yelp help browser
LICENSE=	gnu-gpl-v2 AND gnu-lgpl-v2.1 AND mit

GNU_CONFIGURE=	yes
USE_TOOLS+=	pkg-config intltool msgfmt
USE_PKGLOCALEDIR=	yes

PKGCONFIG_OVERRIDE+=	yelp-xsl.pc.in

BUILD_DEPENDS+=		itstool-[0-9]*:../../textproc/itstool

.include "../../lang/python/pyversion.mk"
.include "../../mk/bsd.pkg.mk"
