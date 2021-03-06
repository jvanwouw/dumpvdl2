/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMADSCAPDUVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_pmadsc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "CancelPositiveAcknowledgement.h"

int
CancelPositiveAcknowledgement_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_RequestType.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using RequestType,
 * so here we adjust the DEF accordingly.
 */
static void
CancelPositiveAcknowledgement_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_RequestType.free_struct;
	td->print_struct   = asn_DEF_RequestType.print_struct;
	td->check_constraints = asn_DEF_RequestType.check_constraints;
	td->ber_decoder    = asn_DEF_RequestType.ber_decoder;
	td->der_encoder    = asn_DEF_RequestType.der_encoder;
	td->xer_decoder    = asn_DEF_RequestType.xer_decoder;
	td->xer_encoder    = asn_DEF_RequestType.xer_encoder;
	td->uper_decoder   = asn_DEF_RequestType.uper_decoder;
	td->uper_encoder   = asn_DEF_RequestType.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_RequestType.per_constraints;
	td->elements       = asn_DEF_RequestType.elements;
	td->elements_count = asn_DEF_RequestType.elements_count;
	td->specifics      = asn_DEF_RequestType.specifics;
}

void
CancelPositiveAcknowledgement_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	CancelPositiveAcknowledgement_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
CancelPositiveAcknowledgement_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	CancelPositiveAcknowledgement_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
CancelPositiveAcknowledgement_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	CancelPositiveAcknowledgement_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
CancelPositiveAcknowledgement_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	CancelPositiveAcknowledgement_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
CancelPositiveAcknowledgement_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	CancelPositiveAcknowledgement_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
CancelPositiveAcknowledgement_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	CancelPositiveAcknowledgement_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
CancelPositiveAcknowledgement_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	CancelPositiveAcknowledgement_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
CancelPositiveAcknowledgement_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	CancelPositiveAcknowledgement_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_CancelPositiveAcknowledgement_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_CancelPositiveAcknowledgement_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CancelPositiveAcknowledgement = {
	"CancelPositiveAcknowledgement",
	"CancelPositiveAcknowledgement",
	CancelPositiveAcknowledgement_free,
	CancelPositiveAcknowledgement_print,
	CancelPositiveAcknowledgement_constraint,
	CancelPositiveAcknowledgement_decode_ber,
	CancelPositiveAcknowledgement_encode_der,
	CancelPositiveAcknowledgement_decode_xer,
	CancelPositiveAcknowledgement_encode_xer,
	CancelPositiveAcknowledgement_decode_uper,
	CancelPositiveAcknowledgement_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CancelPositiveAcknowledgement_tags_1,
	sizeof(asn_DEF_CancelPositiveAcknowledgement_tags_1)
		/sizeof(asn_DEF_CancelPositiveAcknowledgement_tags_1[0]), /* 1 */
	asn_DEF_CancelPositiveAcknowledgement_tags_1,	/* Same as above */
	sizeof(asn_DEF_CancelPositiveAcknowledgement_tags_1)
		/sizeof(asn_DEF_CancelPositiveAcknowledgement_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	0	/* No specifics */
};

