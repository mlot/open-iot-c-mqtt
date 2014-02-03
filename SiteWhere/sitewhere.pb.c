/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.2.5 at Sun Feb 02 22:22:48 2014. */

#include "sitewhere.pb.h"



const pb_field_t SiteWhere_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_Header_fields[3] = {
    PB_FIELD2(  1, ENUM    , REQUIRED, STATIC  , FIRST, SiteWhere_Header, command, command, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, SiteWhere_Header, originator, command, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_RegisterDevice_fields[5] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_RegisterDevice, hardwareId, hardwareId, 0),
    PB_FIELD2(  2, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_RegisterDevice, specificationToken, hardwareId, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, SiteWhere_RegisterDevice, siteToken, specificationToken, 0),
    PB_FIELD2(  4, STRING  , OPTIONAL, STATIC  , OTHER, SiteWhere_RegisterDevice, replyTo, siteToken, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_Acknowledge_fields[2] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_Acknowledge, hardwareId, hardwareId, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_DeviceLocation_fields[6] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_DeviceLocation, hardwareId, hardwareId, 0),
    PB_FIELD2(  2, FLOAT   , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceLocation, latitude, hardwareId, 0),
    PB_FIELD2(  3, FLOAT   , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceLocation, longitude, latitude, 0),
    PB_FIELD2(  4, FLOAT   , OPTIONAL, STATIC  , OTHER, SiteWhere_DeviceLocation, elevation, longitude, 0),
    PB_FIELD2(  5, INT64   , OPTIONAL, STATIC  , OTHER, SiteWhere_DeviceLocation, eventDate, elevation, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_DeviceAlert_fields[5] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_DeviceAlert, hardwareId, hardwareId, 0),
    PB_FIELD2(  2, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceAlert, alertType, hardwareId, 0),
    PB_FIELD2(  3, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceAlert, alertMessage, alertType, 0),
    PB_FIELD2(  4, INT64   , OPTIONAL, STATIC  , OTHER, SiteWhere_DeviceAlert, eventDate, alertMessage, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_Measurement_fields[3] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_Measurement, measurementId, measurementId, 0),
    PB_FIELD2(  2, FLOAT   , REQUIRED, STATIC  , OTHER, SiteWhere_Measurement, value, measurementId, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_DeviceMeasurements_fields[4] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_DeviceMeasurements, hardwareId, hardwareId, 0),
    PB_FIELD2(  2, MESSAGE , REPEATED, CALLBACK, OTHER, SiteWhere_DeviceMeasurements, measurement, hardwareId, &SiteWhere_Measurement_fields),
    PB_FIELD2(  3, INT64   , OPTIONAL, STATIC  , OTHER, SiteWhere_DeviceMeasurements, eventDate, measurement, 0),
    PB_LAST_FIELD
};

const pb_field_t Device_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t Device_Header_fields[3] = {
    PB_FIELD2(  1, ENUM    , REQUIRED, STATIC  , FIRST, Device_Header, command, command, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, Device_Header, originator, command, 0),
    PB_LAST_FIELD
};

const pb_field_t Device_registrationAck_fields[4] = {
    PB_FIELD2(  1, ENUM    , REQUIRED, STATIC  , FIRST, Device_registrationAck, state, state, 0),
    PB_FIELD2(  2, ENUM    , OPTIONAL, STATIC  , OTHER, Device_registrationAck, errorType, state, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, Device_registrationAck, errorMessage, errorType, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
STATIC_ASSERT((pb_membersize(SiteWhere_DeviceMeasurements, measurement) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_SiteWhere_SiteWhere_Header_SiteWhere_RegisterDevice_SiteWhere_Acknowledge_SiteWhere_DeviceLocation_SiteWhere_DeviceAlert_SiteWhere_Measurement_SiteWhere_DeviceMeasurements_Device_Device_Header_Device_registrationAck)
#endif

#if !defined(PB_FIELD_32BIT)
STATIC_ASSERT((pb_membersize(SiteWhere_DeviceMeasurements, measurement) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_SiteWhere_SiteWhere_Header_SiteWhere_RegisterDevice_SiteWhere_Acknowledge_SiteWhere_DeviceLocation_SiteWhere_DeviceAlert_SiteWhere_Measurement_SiteWhere_DeviceMeasurements_Device_Device_Header_Device_registrationAck)
#endif

