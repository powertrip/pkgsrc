# $NetBSD: Makefile,v 1.3 2014/03/31 10:20:26 fhajny Exp $

DISTNAME=	libgt-0.3.13
PKGNAME=	${DISTNAME:S/gt/guardtime/}
CATEGORIES=	security
MASTER_SITES=	http://download.guardtime.com/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.guardtime.com/
COMMENT=	GuardTime Client C SDK
LICENSE=	apache-2.0

WRKSRC=		${WRKDIR}/${DISTNAME:S/-src//}

GNU_CONFIGURE=	yes
MAKE_FILE=	GNUmakefile
USE_LIBTOOL=	yes
USE_TOOLS+=	gmake

.include "../../security/openssl/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
