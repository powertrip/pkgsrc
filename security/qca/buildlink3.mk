# $NetBSD: buildlink3.mk,v 1.24 2013/10/09 17:39:01 wiz Exp $
#

BUILDLINK_TREE+=	qca

.if !defined(QCA_BUILDLINK3_MK)
QCA_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.qca+=	qca>=1.0
BUILDLINK_ABI_DEPENDS.qca+=	qca>=1.0nb14
BUILDLINK_PKGSRCDIR.qca?=	../../security/qca

.include "../../x11/qt3-libs/buildlink3.mk"
.include "../../x11/qt3-tools/buildlink3.mk"
.endif # QCA_BUILDLINK3_MK

BUILDLINK_TREE+=	-qca
