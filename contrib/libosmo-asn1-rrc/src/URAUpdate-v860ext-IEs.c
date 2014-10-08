/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "URAUpdate-v860ext-IEs.h"

static int
supportOfHS_DSCHDRXOperation_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
supportOfHS_DSCHDRXOperation_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
supportOfHS_DSCHDRXOperation_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	supportOfHS_DSCHDRXOperation_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
supportOfHS_DSCHDRXOperation_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfHS_DSCHDRXOperation_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
supportOfHS_DSCHDRXOperation_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	supportOfHS_DSCHDRXOperation_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
supportOfHS_DSCHDRXOperation_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfHS_DSCHDRXOperation_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
supportOfHS_DSCHDRXOperation_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	supportOfHS_DSCHDRXOperation_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
supportOfHS_DSCHDRXOperation_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfHS_DSCHDRXOperation_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
supportOfHS_DSCHDRXOperation_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	supportOfHS_DSCHDRXOperation_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
supportOfHS_DSCHDRXOperation_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	supportOfHS_DSCHDRXOperation_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
supportOfCommonEDCH_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
supportOfCommonEDCH_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
supportOfCommonEDCH_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	supportOfCommonEDCH_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
supportOfCommonEDCH_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfCommonEDCH_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
supportOfCommonEDCH_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	supportOfCommonEDCH_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
supportOfCommonEDCH_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfCommonEDCH_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
supportOfCommonEDCH_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	supportOfCommonEDCH_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
supportOfCommonEDCH_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfCommonEDCH_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
supportOfCommonEDCH_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	supportOfCommonEDCH_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
supportOfCommonEDCH_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	supportOfCommonEDCH_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
supportOfMACiis_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
supportOfMACiis_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
supportOfMACiis_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	supportOfMACiis_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
supportOfMACiis_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfMACiis_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
supportOfMACiis_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	supportOfMACiis_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
supportOfMACiis_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfMACiis_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
supportOfMACiis_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	supportOfMACiis_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
supportOfMACiis_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfMACiis_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
supportOfMACiis_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	supportOfMACiis_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
supportOfMACiis_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	supportOfMACiis_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_supportOfHS_DSCHDRXOperation_constr_2 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_supportOfCommonEDCH_constr_4 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_supportOfMACiis_constr_6 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_supportOfHS_DSCHDRXOperation_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_supportOfHS_DSCHDRXOperation_enum2value_2[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_supportOfHS_DSCHDRXOperation_specs_2 = {
	asn_MAP_supportOfHS_DSCHDRXOperation_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfHS_DSCHDRXOperation_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_supportOfHS_DSCHDRXOperation_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfHS_DSCHDRXOperation_2 = {
	"supportOfHS-DSCHDRXOperation",
	"supportOfHS-DSCHDRXOperation",
	supportOfHS_DSCHDRXOperation_2_free,
	supportOfHS_DSCHDRXOperation_2_print,
	supportOfHS_DSCHDRXOperation_2_constraint,
	supportOfHS_DSCHDRXOperation_2_decode_ber,
	supportOfHS_DSCHDRXOperation_2_encode_der,
	supportOfHS_DSCHDRXOperation_2_decode_xer,
	supportOfHS_DSCHDRXOperation_2_encode_xer,
	supportOfHS_DSCHDRXOperation_2_decode_uper,
	supportOfHS_DSCHDRXOperation_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_supportOfHS_DSCHDRXOperation_tags_2,
	sizeof(asn_DEF_supportOfHS_DSCHDRXOperation_tags_2)
		/sizeof(asn_DEF_supportOfHS_DSCHDRXOperation_tags_2[0]) - 1, /* 1 */
	asn_DEF_supportOfHS_DSCHDRXOperation_tags_2,	/* Same as above */
	sizeof(asn_DEF_supportOfHS_DSCHDRXOperation_tags_2)
		/sizeof(asn_DEF_supportOfHS_DSCHDRXOperation_tags_2[0]), /* 2 */
	&asn_PER_type_supportOfHS_DSCHDRXOperation_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfHS_DSCHDRXOperation_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_supportOfCommonEDCH_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_supportOfCommonEDCH_enum2value_4[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_supportOfCommonEDCH_specs_4 = {
	asn_MAP_supportOfCommonEDCH_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfCommonEDCH_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_supportOfCommonEDCH_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfCommonEDCH_4 = {
	"supportOfCommonEDCH",
	"supportOfCommonEDCH",
	supportOfCommonEDCH_4_free,
	supportOfCommonEDCH_4_print,
	supportOfCommonEDCH_4_constraint,
	supportOfCommonEDCH_4_decode_ber,
	supportOfCommonEDCH_4_encode_der,
	supportOfCommonEDCH_4_decode_xer,
	supportOfCommonEDCH_4_encode_xer,
	supportOfCommonEDCH_4_decode_uper,
	supportOfCommonEDCH_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_supportOfCommonEDCH_tags_4,
	sizeof(asn_DEF_supportOfCommonEDCH_tags_4)
		/sizeof(asn_DEF_supportOfCommonEDCH_tags_4[0]) - 1, /* 1 */
	asn_DEF_supportOfCommonEDCH_tags_4,	/* Same as above */
	sizeof(asn_DEF_supportOfCommonEDCH_tags_4)
		/sizeof(asn_DEF_supportOfCommonEDCH_tags_4[0]), /* 2 */
	&asn_PER_type_supportOfCommonEDCH_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfCommonEDCH_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_supportOfMACiis_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_supportOfMACiis_enum2value_6[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_supportOfMACiis_specs_6 = {
	asn_MAP_supportOfMACiis_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfMACiis_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_supportOfMACiis_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfMACiis_6 = {
	"supportOfMACiis",
	"supportOfMACiis",
	supportOfMACiis_6_free,
	supportOfMACiis_6_print,
	supportOfMACiis_6_constraint,
	supportOfMACiis_6_decode_ber,
	supportOfMACiis_6_encode_der,
	supportOfMACiis_6_decode_xer,
	supportOfMACiis_6_encode_xer,
	supportOfMACiis_6_decode_uper,
	supportOfMACiis_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_supportOfMACiis_tags_6,
	sizeof(asn_DEF_supportOfMACiis_tags_6)
		/sizeof(asn_DEF_supportOfMACiis_tags_6[0]) - 1, /* 1 */
	asn_DEF_supportOfMACiis_tags_6,	/* Same as above */
	sizeof(asn_DEF_supportOfMACiis_tags_6)
		/sizeof(asn_DEF_supportOfMACiis_tags_6[0]), /* 2 */
	&asn_PER_type_supportOfMACiis_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfMACiis_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_URAUpdate_v860ext_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct URAUpdate_v860ext_IEs, supportOfHS_DSCHDRXOperation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfHS_DSCHDRXOperation_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportOfHS-DSCHDRXOperation"
		},
	{ ATF_POINTER, 2, offsetof(struct URAUpdate_v860ext_IEs, supportOfCommonEDCH),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfCommonEDCH_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportOfCommonEDCH"
		},
	{ ATF_POINTER, 1, offsetof(struct URAUpdate_v860ext_IEs, supportOfMACiis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfMACiis_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportOfMACiis"
		},
};
static int asn_MAP_URAUpdate_v860ext_IEs_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_URAUpdate_v860ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_URAUpdate_v860ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportOfHS-DSCHDRXOperation at 10794 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportOfCommonEDCH at 10795 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* supportOfMACiis at 10796 */
};
static asn_SEQUENCE_specifics_t asn_SPC_URAUpdate_v860ext_IEs_specs_1 = {
	sizeof(struct URAUpdate_v860ext_IEs),
	offsetof(struct URAUpdate_v860ext_IEs, _asn_ctx),
	asn_MAP_URAUpdate_v860ext_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_URAUpdate_v860ext_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_URAUpdate_v860ext_IEs = {
	"URAUpdate-v860ext-IEs",
	"URAUpdate-v860ext-IEs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_URAUpdate_v860ext_IEs_tags_1,
	sizeof(asn_DEF_URAUpdate_v860ext_IEs_tags_1)
		/sizeof(asn_DEF_URAUpdate_v860ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_URAUpdate_v860ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_URAUpdate_v860ext_IEs_tags_1)
		/sizeof(asn_DEF_URAUpdate_v860ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_URAUpdate_v860ext_IEs_1,
	3,	/* Elements count */
	&asn_SPC_URAUpdate_v860ext_IEs_specs_1	/* Additional specs */
};
