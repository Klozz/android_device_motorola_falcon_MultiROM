/* MULTIROM init file 
 * Autor of this file 
 * Carlos Jesus B.C <xxx.reptar.rawrr.xxx@Gmail.com>
 * TeamMEX in XDA-Developers
 */
#include <stdlib.h>

const char *mr_init_devices[] =
{
	//initialize Graphics
    "/sys/devices/virtual/graphics/fb0",
    "/dev/graphics/fb0",

  //FileSystem
    "/sys/block/mmcblk0",
    "/sys/devices/msm_sdcc.1/",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p31",
    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers*",


    "/sys/devices/gpio_keys.78/input*",
    "/sys/devices/virtual/misc/uinput/",
    "/sys/devices/virtual/input/*",

	//adb
    "/sys/bus/usb",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p34",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p33",
    "/sys/devices/virtual/misc/android_adb/uevent",
    "/sys/devices/virtual/android_usb/android0/f_adb/uevent",
    "/sys/module/usb_storage/",

    "/sys/devices/platform/msm_hsusb*",
   
   NULL // must be NULL-terminated
}
