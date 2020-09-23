require rauc-disk-updater.inc

PR = "r0"

SRC_URI = "git://github.com/helbling-technik-gmbh/rauc-disk-updater.git;protocol=https"

PV = "git${SRCPV}"
S = "${WORKDIR}/git"

SRCREV = "b1ae7f2b3bdf2a64fcb730e09695ecd7ab553479"

DEFAULT_PREFERENCE = "-1"
