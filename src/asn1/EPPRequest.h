/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_EPPRequest_H_
#define	_EPPRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EPPWindow.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EPPRequest */
typedef EPPWindow_t	 EPPRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EPPRequest;
asn_struct_free_f EPPRequest_free;
asn_struct_print_f EPPRequest_print;
asn_constr_check_f EPPRequest_constraint;
ber_type_decoder_f EPPRequest_decode_ber;
der_type_encoder_f EPPRequest_encode_der;
xer_type_decoder_f EPPRequest_decode_xer;
xer_type_encoder_f EPPRequest_encode_xer;
per_type_decoder_f EPPRequest_decode_uper;
per_type_encoder_f EPPRequest_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EPPRequest_H_ */
#include "asn_internal.h"