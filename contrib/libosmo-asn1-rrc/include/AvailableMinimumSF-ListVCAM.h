/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_AvailableMinimumSF_ListVCAM_H_
#define	_AvailableMinimumSF_ListVCAM_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AvailableMinimumSF_VCAM;

/* AvailableMinimumSF-ListVCAM */
typedef struct AvailableMinimumSF_ListVCAM {
	A_SEQUENCE_OF(struct AvailableMinimumSF_VCAM) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AvailableMinimumSF_ListVCAM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AvailableMinimumSF_ListVCAM;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AvailableMinimumSF-VCAM.h"

#endif	/* _AvailableMinimumSF_ListVCAM_H_ */
#include <asn_internal.h>
