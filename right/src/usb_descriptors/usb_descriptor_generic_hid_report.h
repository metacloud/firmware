#ifndef __USB_DESCRIPTOR_GENERIC_HID_REPORT_H__
#define __USB_DESCRIPTOR_GENERIC_HID_REPORT_H__

// Macros:

    #define USB_GENERIC_HID_REPORT_DESCRIPTOR_LENGTH 34

    #define USB_GENERIC_HID_REPORT_DESCRIPTOR_VENDOR_USAGE_PAGE_INDEX 0x00
    #define USB_GENERIC_HID_REPORT_DESCRIPTOR_VENDOR_USAGE_COLLECTION 0x01
    #define USB_GENERIC_HID_REPORT_DESCRIPTOR_VENDOR_USAGE_DATA_IN    0x02
    #define USB_GENERIC_HID_REPORT_DESCRIPTOR_VENDOR_USAGE_DATA_OUT   0x03

// Variables:

    extern uint8_t UsbGenericHidReportDescriptor[USB_GENERIC_HID_REPORT_DESCRIPTOR_LENGTH];

#endif
