/* Generated from Opc.Ua.Types.bsd, Custom.Opc.Ua.AssetAdministrationShell.bsd with script /home/opcua/Downloads/openAASworkshop/external/open62541/tools/generate_datatypes.py
 * on host opcua-VirtualBox by user opcua at 2018-01-10 09:00:49 */

#include "stddef.h"
#include "ua_types.h"
#include "ua_openaas_generated.h"

/* ExpressionSemanticEnum */
static UA_DataTypeMember ExpressionSemanticEnum_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* ExpressionLogicEnum */
static UA_DataTypeMember ExpressionLogicEnum_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* ViewEnum */
static UA_DataTypeMember ViewEnum_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* VisibilityEnum */
static UA_DataTypeMember VisibilityEnum_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* IdEnum */
static UA_DataTypeMember IdEnum_members[1] = {
  { .memberTypeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },};

/* Identification */
static UA_DataTypeMember Identification_members[2] = {
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "idSpec",
#endif
    .namespaceZero = true,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_OPENAAS_IDENUM,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "idType",
#endif
    .namespaceZero = false,
    .padding = offsetof(UA_Identification, idType) - offsetof(UA_Identification, idSpec) - sizeof(UA_String),
    .isArray = false
  },};

/* LifeCycleEntry */
static UA_DataTypeMember LifeCycleEntry_members[6] = {
  { .memberTypeIndex = UA_OPENAAS_IDENTIFICATION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "creatingInstance",
#endif
    .namespaceZero = false,
    .padding = 0,
    .isArray = false
  },
  { .memberTypeIndex = UA_OPENAAS_IDENTIFICATION,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "writingInstance",
#endif
    .namespaceZero = false,
    .padding = offsetof(UA_LifeCycleEntry, writingInstance) - offsetof(UA_LifeCycleEntry, creatingInstance) - sizeof(UA_Identification),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_DATAVALUE,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "data",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_LifeCycleEntry, data) - offsetof(UA_LifeCycleEntry, writingInstance) - sizeof(UA_Identification),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "subject",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_LifeCycleEntry, subject) - offsetof(UA_LifeCycleEntry, data) - sizeof(UA_DataValue),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_STRING,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "eventClass",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_LifeCycleEntry, eventClass) - offsetof(UA_LifeCycleEntry, subject) - sizeof(UA_String),
    .isArray = false
  },
  { .memberTypeIndex = UA_TYPES_INT64,
#ifdef UA_ENABLE_TYPENAMES
    .memberName = "id",
#endif
    .namespaceZero = true,
    .padding = offsetof(UA_LifeCycleEntry, id) - offsetof(UA_LifeCycleEntry, eventClass) - sizeof(UA_String),
    .isArray = false
  },};
UA_DataType UA_OPENAAS[UA_OPENAAS_COUNT] = {

/* ExpressionSemanticEnum */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 0},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ExpressionSemanticEnum",
#endif
  .memSize = sizeof(UA_ExpressionSemanticEnum),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .binaryEncodingId = 0,
  .membersSize = 1,
  .members = ExpressionSemanticEnum_members },

/* ExpressionLogicEnum */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 0},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ExpressionLogicEnum",
#endif
  .memSize = sizeof(UA_ExpressionLogicEnum),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .binaryEncodingId = 0,
  .membersSize = 1,
  .members = ExpressionLogicEnum_members },

/* ViewEnum */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 0},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "ViewEnum",
#endif
  .memSize = sizeof(UA_ViewEnum),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .binaryEncodingId = 0,
  .membersSize = 1,
  .members = ViewEnum_members },

/* VisibilityEnum */
{ .typeId = {.namespaceIndex = 0, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 0},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "VisibilityEnum",
#endif
  .memSize = sizeof(UA_VisibilityEnum),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .binaryEncodingId = 0,
  .membersSize = 1,
  .members = VisibilityEnum_members },

/* IdEnum */
{ .typeId = {.namespaceIndex = 3, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 6},
  .typeIndex = UA_TYPES_INT32,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "IdEnum",
#endif
  .memSize = sizeof(UA_IdEnum),
  .builtin = true,
  .fixedSize = true,
  .overlayable = UA_BINARY_OVERLAYABLE_INTEGER,
  .binaryEncodingId = 0,
  .membersSize = 1,
  .members = IdEnum_members },

/* Identification */
{ .typeId = {.namespaceIndex = 3, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 3002},
  .typeIndex = UA_OPENAAS_IDENTIFICATION,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "Identification",
#endif
  .memSize = sizeof(UA_Identification),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .binaryEncodingId = 5001,
  .membersSize = 2,
  .members = Identification_members },

/* LifeCycleEntry */
{ .typeId = {.namespaceIndex = 5, .identifierType = UA_NODEIDTYPE_NUMERIC, .identifier.numeric = 3002},
  .typeIndex = UA_OPENAAS_LIFECYCLEENTRY,
#ifdef UA_ENABLE_TYPENAMES
  .typeName = "LifeCycleEntry",
#endif
  .memSize = sizeof(UA_LifeCycleEntry),
  .builtin = false,
  .fixedSize = false,
  .overlayable = false,
  .binaryEncodingId = 5001,
  .membersSize = 6,
  .members = LifeCycleEntry_members },
};

