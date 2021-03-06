/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_EPPLevel_H_
#define	_EPPLevel_H_


#include "asn_application.h"

/* Including external dependencies */
#include "QNEAltitude.h"
#include "QNHAltitude.h"
#include "MSLAltitude.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EPPLevel_PR {
	EPPLevel_PR_NOTHING,	/* No components present */
	EPPLevel_PR_qNEAltitude,
	EPPLevel_PR_qNHAltitude,
	EPPLevel_PR_mSLAltitude
} EPPLevel_PR;

/* EPPLevel */
typedef struct EPPLevel {
	EPPLevel_PR present;
	union EPPLevel_u {
		QNEAltitude_t	 qNEAltitude;
		QNHAltitude_t	 qNHAltitude;
		MSLAltitude_t	 mSLAltitude;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EPPLevel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EPPLevel;

#ifdef __cplusplus
}
#endif

#endif	/* _EPPLevel_H_ */
#include "asn_internal.h"
