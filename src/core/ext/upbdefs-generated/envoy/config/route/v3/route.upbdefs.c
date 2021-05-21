/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/route/v3/route.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/config/route/v3/route.upbdefs.h"

extern upb_def_init envoy_config_core_v3_base_proto_upbdefinit;
extern upb_def_init envoy_config_core_v3_config_source_proto_upbdefinit;
extern upb_def_init envoy_config_route_v3_route_components_proto_upbdefinit;
extern upb_def_init google_protobuf_wrappers_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_annotations_versioning_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout envoy_config_route_v3_RouteConfiguration_msginit;
extern const upb_msglayout envoy_config_route_v3_Vhds_msginit;

static const upb_msglayout *layouts[2] = {
  &envoy_config_route_v3_RouteConfiguration_msginit,
  &envoy_config_route_v3_Vhds_msginit,
};

static const char descriptor[1389] = {'\n', '!', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'r', 'o', 'u', 't', 'e', '/', 'v', '3', '/', 'r', 
'o', 'u', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\022', '\025', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 
'r', 'o', 'u', 't', 'e', '.', 'v', '3', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 
'r', 'e', '/', 'v', '3', '/', 'b', 'a', 's', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '(', 'e', 'n', 'v', 'o', 'y', '/', 'c', 
'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 'o', 'u', 'r', 
'c', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', ',', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'r', 'o', 
'u', 't', 'e', '/', 'v', '3', '/', 'r', 'o', 'u', 't', 'e', '_', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', 's', '.', 'p', 
'r', 'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'w', 'r', 'a', 
'p', 'p', 'e', 'r', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 
'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 
'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 
't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 
't', 'o', '\"', '\202', '\007', '\n', '\022', 'R', 'o', 'u', 't', 'e', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 't', 'i', 'o', 'n', 
'\022', '\022', '\n', '\004', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\004', 'n', 'a', 'm', 'e', '\022', 'G', '\n', '\r', 'v', 
'i', 'r', 't', 'u', 'a', 'l', '_', 'h', 'o', 's', 't', 's', '\030', '\002', ' ', '\003', '(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 
'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'o', 'u', 't', 'e', '.', 'v', '3', '.', 'V', 'i', 'r', 't', 'u', 'a', 'l', 
'H', 'o', 's', 't', 'R', '\014', 'v', 'i', 'r', 't', 'u', 'a', 'l', 'H', 'o', 's', 't', 's', '\022', '/', '\n', '\004', 'v', 'h', 'd', 
's', '\030', '\t', ' ', '\001', '(', '\013', '2', '\033', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'o', 
'u', 't', 'e', '.', 'v', '3', '.', 'V', 'h', 'd', 's', 'R', '\004', 'v', 'h', 'd', 's', '\022', 'D', '\n', '\025', 'i', 'n', 't', 'e', 
'r', 'n', 'a', 'l', '_', 'o', 'n', 'l', 'y', '_', 'h', 'e', 'a', 'd', 'e', 'r', 's', '\030', '\003', ' ', '\003', '(', '\t', 'B', '\020', 
'\372', 'B', '\r', '\222', '\001', '\n', '\"', '\010', 'r', '\006', '\300', '\001', '\001', '\310', '\001', '\000', 'R', '\023', 'i', 'n', 't', 'e', 'r', 'n', 'a', 
'l', 'O', 'n', 'l', 'y', 'H', 'e', 'a', 'd', 'e', 'r', 's', '\022', 'i', '\n', '\027', 'r', 'e', 's', 'p', 'o', 'n', 's', 'e', '_', 
'h', 'e', 'a', 'd', 'e', 'r', 's', '_', 't', 'o', '_', 'a', 'd', 'd', '\030', '\004', ' ', '\003', '(', '\013', '2', '\'', '.', 'e', 'n', 
'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'H', 'e', 'a', 'd', 'e', 'r', 
'V', 'a', 'l', 'u', 'e', 'O', 'p', 't', 'i', 'o', 'n', 'B', '\t', '\372', 'B', '\006', '\222', '\001', '\003', '\020', '\350', '\007', 'R', '\024', 'r', 
'e', 's', 'p', 'o', 'n', 's', 'e', 'H', 'e', 'a', 'd', 'e', 'r', 's', 'T', 'o', 'A', 'd', 'd', '\022', 'M', '\n', '\032', 'r', 'e', 
's', 'p', 'o', 'n', 's', 'e', '_', 'h', 'e', 'a', 'd', 'e', 'r', 's', '_', 't', 'o', '_', 'r', 'e', 'm', 'o', 'v', 'e', '\030', 
'\005', ' ', '\003', '(', '\t', 'B', '\020', '\372', 'B', '\r', '\222', '\001', '\n', '\"', '\010', 'r', '\006', '\300', '\001', '\001', '\310', '\001', '\000', 'R', '\027', 
'r', 'e', 's', 'p', 'o', 'n', 's', 'e', 'H', 'e', 'a', 'd', 'e', 'r', 's', 'T', 'o', 'R', 'e', 'm', 'o', 'v', 'e', '\022', 'g', 
'\n', '\026', 'r', 'e', 'q', 'u', 'e', 's', 't', '_', 'h', 'e', 'a', 'd', 'e', 'r', 's', '_', 't', 'o', '_', 'a', 'd', 'd', '\030', 
'\006', ' ', '\003', '(', '\013', '2', '\'', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', 
'.', 'v', '3', '.', 'H', 'e', 'a', 'd', 'e', 'r', 'V', 'a', 'l', 'u', 'e', 'O', 'p', 't', 'i', 'o', 'n', 'B', '\t', '\372', 'B', 
'\006', '\222', '\001', '\003', '\020', '\350', '\007', 'R', '\023', 'r', 'e', 'q', 'u', 'e', 's', 't', 'H', 'e', 'a', 'd', 'e', 'r', 's', 'T', 'o', 
'A', 'd', 'd', '\022', 'K', '\n', '\031', 'r', 'e', 'q', 'u', 'e', 's', 't', '_', 'h', 'e', 'a', 'd', 'e', 'r', 's', '_', 't', 'o', 
'_', 'r', 'e', 'm', 'o', 'v', 'e', '\030', '\010', ' ', '\003', '(', '\t', 'B', '\020', '\372', 'B', '\r', '\222', '\001', '\n', '\"', '\010', 'r', '\006', 
'\300', '\001', '\001', '\310', '\001', '\000', 'R', '\026', 'r', 'e', 'q', 'u', 'e', 's', 't', 'H', 'e', 'a', 'd', 'e', 'r', 's', 'T', 'o', 'R', 
'e', 'm', 'o', 'v', 'e', '\022', 'L', '\n', '#', 'm', 'o', 's', 't', '_', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'c', '_', 'h', 'e', 
'a', 'd', 'e', 'r', '_', 'm', 'u', 't', 'a', 't', 'i', 'o', 'n', 's', '_', 'w', 'i', 'n', 's', '\030', '\n', ' ', '\001', '(', '\010', 
'R', '\037', 'm', 'o', 's', 't', 'S', 'p', 'e', 'c', 'i', 'f', 'i', 'c', 'H', 'e', 'a', 'd', 'e', 'r', 'M', 'u', 't', 'a', 't', 
'i', 'o', 'n', 's', 'W', 'i', 'n', 's', '\022', 'G', '\n', '\021', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '_', 'c', 'l', 'u', 's', 
't', 'e', 'r', 's', '\030', '\007', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 
'b', 'u', 'f', '.', 'B', 'o', 'o', 'l', 'V', 'a', 'l', 'u', 'e', 'R', '\020', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'C', 'l', 
'u', 's', 't', 'e', 'r', 's', '\022', 'i', '\n', '#', 'm', 'a', 'x', '_', 'd', 'i', 'r', 'e', 'c', 't', '_', 'r', 'e', 's', 'p', 
'o', 'n', 's', 'e', '_', 'b', 'o', 'd', 'y', '_', 's', 'i', 'z', 'e', '_', 'b', 'y', 't', 'e', 's', '\030', '\013', ' ', '\001', '(', 
'\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', 
'2', 'V', 'a', 'l', 'u', 'e', 'R', '\036', 'm', 'a', 'x', 'D', 'i', 'r', 'e', 'c', 't', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', 
'B', 'o', 'd', 'y', 'S', 'i', 'z', 'e', 'B', 'y', 't', 'e', 's', ':', '&', '\232', '\305', '\210', '\036', '!', '\n', '\037', 'e', 'n', 'v', 
'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'R', 'o', 'u', 't', 'e', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 't', 
'i', 'o', 'n', '\"', 's', '\n', '\004', 'V', 'h', 'd', 's', '\022', 'Q', '\n', '\r', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 'o', 'u', 
'r', 'c', 'e', '\030', '\001', ' ', '\001', '(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 
'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'C', 'o', 'n', 'f', 'i', 'g', 'S', 'o', 'u', 'r', 'c', 'e', 'B', '\010', '\372', 'B', '\005', 
'\212', '\001', '\002', '\020', '\001', 'R', '\014', 'c', 'o', 'n', 'f', 'i', 'g', 'S', 'o', 'u', 'r', 'c', 'e', ':', '\030', '\232', '\305', '\210', '\036', 
'\023', '\n', '\021', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'V', 'h', 'd', 's', 'B', ';', '\n', '#', 'i', 
'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', 
'.', 'r', 'o', 'u', 't', 'e', '.', 'v', '3', 'B', '\n', 'R', 'o', 'u', 't', 'e', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', 
'\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[8] = {
  &envoy_config_core_v3_base_proto_upbdefinit,
  &envoy_config_core_v3_config_source_proto_upbdefinit,
  &envoy_config_route_v3_route_components_proto_upbdefinit,
  &google_protobuf_wrappers_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_config_route_v3_route_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/config/route/v3/route.proto",
  UPB_STRVIEW_INIT(descriptor, 1389)
};
