#ifndef FIMC_IS_VENDOR_CONFIG_NOBLE_H
#define FIMC_IS_VENDOR_CONFIG_NOBLE_H

#include "fimc-is-eeprom-rear-3p3_v001.h"
#include "fimc-is-eeprom-front-4h9_v002.h"

#define CAMERA_SYSFS_V2

#ifdef CONFIG_COMPANION_STANDBY_USE
#define CAMERA_PARALLEL_RETENTION_SEQUENCE
#define CONFIG_COMPANION_STANDBY_CRC
#define CONFIG_COMPANION_AUTOMATIC_CRC_ON_CLOSE
#endif

#define CAMERA_MODULE_CORE_CS_VERSION 'K'
#define CAMERA_MODULE_ES_VERSION_REAR 'A'
#define CAMERA_MODULE_ES_VERSION_FRONT 'B'
#define CAL_MAP_ES_VERSION_REAR '1'
#define CAL_MAP_ES_VERSION_FRONT '2'

#if defined(CONFIG_ARM_EXYNOS7420_BUS_DEVFREQ_TDNR)
/* Sync with SUPPORT_GROUP_MIGRATION in HAL Side. */
#define CONFIG_SUPPORT_GROUP_MIGRATION_FOR_TDNR
#define CONFIG_ENABLE_TDNR
#endif

#endif /* FIMC_IS_VENDOR_CONFIG_NOBLE_H */
