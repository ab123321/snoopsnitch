/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MultiflowCapabBandCombList_H_
#define	_MultiflowCapabBandCombList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultiflowCapabBandCombination;

/* MultiflowCapabBandCombList */
typedef struct MultiflowCapabBandCombList {
	A_SEQUENCE_OF(struct MultiflowCapabBandCombination) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiflowCapabBandCombList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiflowCapabBandCombList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiflowCapabBandCombination.h"

#endif	/* _MultiflowCapabBandCombList_H_ */
#include <asn_internal.h>