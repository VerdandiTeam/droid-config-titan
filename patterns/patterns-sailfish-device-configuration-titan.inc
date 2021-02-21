%package -n patterns-sailfish-device-configuration-titan
Summary: Jolla Configuration titan
Requires: patterns-sailfish-device-configuration-common-titan
Requires: patterns-sailfish-device-adaptation-titan

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps

Requires: sailfish-content-graphics-z%{icon_res}

# Multi-SIM settings
Requires: jolla-settings-networking-multisim

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# Jolla Store items
Requires: patterns-sailfish-consumer-generic

# Non-trusted app installation support
Requires: jolla-settings-system-sideloading

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Sailfish OS CSD tool for hardware testing
# needs some configuration to get all features working

# sd-utils for mounting sdcard
Requires: sd-utils

# For all keyboard layouts
Requires: jolla-keyboard-layout-all

Requires: patterns-sailfish-rnd
# dev-tools pattern will be fixed in the next release
# for now we'll use its 'exploded' version:
#Requires: patterns-sailfish-dev-tools
Recommends: jolla-developer-mode
Requires: strace
Requires: gdb
Requires: gdb-gdbserver
Requires: vim-enhanced
Requires: less
Requires: valgrind
Requires: lipstick-qt5-tools
Requires: libhybris-tests
Requires: busybox-static
Requires: openssh-server
Requires: zypper

%description -n patterns-sailfish-device-configuration-titan
Pattern with packages for titan configurations

%files -n patterns-sailfish-device-configuration-titan
