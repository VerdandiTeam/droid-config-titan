#!/bin/sh
export PATH=/system/xbin:$PATH

if [ ! -f /cache/pds.img ]
then
    #make a copy of pds in /cache
    /system/xbin/dd if=/dev/block/platform/msm_sdcc.1/by-name/pds of=/cache/pds.img
    echo "Backed up PDS"
fi

#mount the fake pds
/sbin/losetup /dev/block/loop0 /cache/pds.img
/bin/mount -o rw /dev/block/loop0 /pds
#/system/bin/restorecon -R /pds
echo "Mounted PDS"
