DESCRIPTION = "RAUC update controller for disk devices"
HOMEPAGE = "https://github.com/helbling-technik-gmbh/rauc-disk-updater"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"
DEPENDS = "glib-2.0 dbus-glib libgudev glib-2.0-native"

inherit cmake systemd

SYSTEMD_SERVICE_${PN} = "rauc-disk-updater.service"

EXTRA_OECMAKE += "\
	-DSYSTEMD_SYSTEM_UNITDIR=${systemd_system_unitdir} \
	-DDBUS_POLICY_DIR=${datadir}/dbus-1/system.d \
	-DDBUS_SYSTEM_UNITDIR=${datadir}/dbus-1/system-services \
"


FILES_${PN} += " \
	${systemd_system_unitdir}/rauc-disk-updater.service \
	${datadir}/dbus-1/system.d/de.helbling.DiskUpdater.conf \
	${datadir}/dbus-1/system-services/de.helbling.DiskUpdater.service \
"
