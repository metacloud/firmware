#include "usb_protocol_handler.h"
#include "usb_commands/usb_command_jump_to_slave_bootloader.h"
#include "slot.h"
#include "slave_drivers/uhk_module_driver.h"

void UsbCommand_JumpToSlaveBootloader(void)
{
    uint8_t slotId = GET_USB_BUFFER_UINT8(1);

    if (!IS_VALID_SLAVE_SLOT(slotId)) {
        SET_USB_BUFFER_UINT8(0, UsbStatusCode_JumpToSlaveBootloader_InvalidSlaveSlotId);
        return;
    }

    uint8_t uhkModuleDriverId = SLOT_ID_TO_UHK_MODULE_DRIVER_ID(slotId);
    UhkModuleStates[uhkModuleDriverId].jumpToBootloader = true;
}