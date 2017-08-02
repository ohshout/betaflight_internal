#include <stdbool.h>
#include <stdint.h>

#include <platform.h>

#include "common/axis.h"

#include "drivers/sensor.h"
#include "drivers/compass/compass.h"
#include "drivers/serial.h"

#include "fc/rc_controls.h"

#include "flight/failsafe.h"
#include "flight/mixer.h"
#include "flight/pid.h"

#include "rx/rx.h"

#include "io/serial.h"

#include "telemetry/telemetry.h"

#include "sensors/sensors.h"
#include "sensors/compass.h"
#include "sensors/barometer.h"

#include "config/feature.h"

#include "fc/config.h"

void targetConfiguration (void)
{
	compassConfigMutable()->mag_hardware = MAG_FAKE;
}
