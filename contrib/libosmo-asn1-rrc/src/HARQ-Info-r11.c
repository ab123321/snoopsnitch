/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "HARQ-Info-r11.h"

static int
numberOfProcesses_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
numberOfProcesses_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
numberOfProcesses_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	numberOfProcesses_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
numberOfProcesses_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	numberOfProcesses_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
numberOfProcesses_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	numberOfProcesses_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
numberOfProcesses_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numberOfProcesses_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
numberOfProcesses_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	numberOfProcesses_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
numberOfProcesses_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numberOfProcesses_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
numberOfProcesses_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	numberOfProcesses_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
numberOfProcesses_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	numberOfProcesses_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_memorySize_constraint_19(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_additionalMemorySizesForMIMO_constraint_19(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_additionalMemorySizesThirdMIMOStream_constraint_19(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_additionalMemorySizesFourthMIMOStream_constraint_19(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_numberOfProcesses_constr_2 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  13 }	/* (0..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_memorySize_constr_20 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_additionalMemorySizesForMIMO_constr_22 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_additionalMemorySizesThirdMIMOStream_constr_24 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_additionalMemorySizesFourthMIMOStream_constr_26 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_memorySize_constr_20 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_additionalMemorySizesForMIMO_constr_22 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_additionalMemorySizesThirdMIMOStream_constr_24 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_additionalMemorySizesFourthMIMOStream_constr_26 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_memoryPartitioning_constr_17 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_numberOfProcesses_value2enum_2[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n7" },
	{ 7,	2,	"n8" },
	{ 8,	3,	"n12" },
	{ 9,	3,	"n14" },
	{ 10,	3,	"n16" },
	{ 11,	3,	"n24" },
	{ 12,	3,	"n28" },
	{ 13,	3,	"n32" }
};
static unsigned int asn_MAP_numberOfProcesses_enum2value_2[] = {
	0,	/* n1(0) */
	8,	/* n12(8) */
	9,	/* n14(9) */
	10,	/* n16(10) */
	1,	/* n2(1) */
	11,	/* n24(11) */
	12,	/* n28(12) */
	2,	/* n3(2) */
	13,	/* n32(13) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6,	/* n7(6) */
	7	/* n8(7) */
};
static asn_INTEGER_specifics_t asn_SPC_numberOfProcesses_specs_2 = {
	asn_MAP_numberOfProcesses_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_numberOfProcesses_enum2value_2,	/* N => "tag"; sorted by N */
	14,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_numberOfProcesses_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberOfProcesses_2 = {
	"numberOfProcesses",
	"numberOfProcesses",
	numberOfProcesses_2_free,
	numberOfProcesses_2_print,
	numberOfProcesses_2_constraint,
	numberOfProcesses_2_decode_ber,
	numberOfProcesses_2_encode_der,
	numberOfProcesses_2_decode_xer,
	numberOfProcesses_2_encode_xer,
	numberOfProcesses_2_decode_uper,
	numberOfProcesses_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_numberOfProcesses_tags_2,
	sizeof(asn_DEF_numberOfProcesses_tags_2)
		/sizeof(asn_DEF_numberOfProcesses_tags_2[0]) - 1, /* 1 */
	asn_DEF_numberOfProcesses_tags_2,	/* Same as above */
	sizeof(asn_DEF_numberOfProcesses_tags_2)
		/sizeof(asn_DEF_numberOfProcesses_tags_2[0]), /* 2 */
	&asn_PER_type_numberOfProcesses_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numberOfProcesses_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_memorySize_20[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_HARQMemorySize,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_memorySize_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_memorySize_specs_20 = {
	sizeof(struct HARQ_Info_r11__memoryPartitioning__Explicit__memorySize),
	offsetof(struct HARQ_Info_r11__memoryPartitioning__Explicit__memorySize, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_memorySize_20 = {
	"memorySize",
	"memorySize",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_memorySize_tags_20,
	sizeof(asn_DEF_memorySize_tags_20)
		/sizeof(asn_DEF_memorySize_tags_20[0]) - 1, /* 1 */
	asn_DEF_memorySize_tags_20,	/* Same as above */
	sizeof(asn_DEF_memorySize_tags_20)
		/sizeof(asn_DEF_memorySize_tags_20[0]), /* 2 */
	&asn_PER_type_memorySize_constr_20,
	asn_MBR_memorySize_20,
	1,	/* Single element */
	&asn_SPC_memorySize_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_additionalMemorySizesForMIMO_22[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_HARQMemorySize,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_additionalMemorySizesForMIMO_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_additionalMemorySizesForMIMO_specs_22 = {
	sizeof(struct HARQ_Info_r11__memoryPartitioning__Explicit__additionalMemorySizesForMIMO),
	offsetof(struct HARQ_Info_r11__memoryPartitioning__Explicit__additionalMemorySizesForMIMO, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalMemorySizesForMIMO_22 = {
	"additionalMemorySizesForMIMO",
	"additionalMemorySizesForMIMO",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_additionalMemorySizesForMIMO_tags_22,
	sizeof(asn_DEF_additionalMemorySizesForMIMO_tags_22)
		/sizeof(asn_DEF_additionalMemorySizesForMIMO_tags_22[0]) - 1, /* 1 */
	asn_DEF_additionalMemorySizesForMIMO_tags_22,	/* Same as above */
	sizeof(asn_DEF_additionalMemorySizesForMIMO_tags_22)
		/sizeof(asn_DEF_additionalMemorySizesForMIMO_tags_22[0]), /* 2 */
	&asn_PER_type_additionalMemorySizesForMIMO_constr_22,
	asn_MBR_additionalMemorySizesForMIMO_22,
	1,	/* Single element */
	&asn_SPC_additionalMemorySizesForMIMO_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_additionalMemorySizesThirdMIMOStream_24[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_HARQMemorySize,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_additionalMemorySizesThirdMIMOStream_specs_24 = {
	sizeof(struct HARQ_Info_r11__memoryPartitioning__Explicit__additionalMemorySizesThirdMIMOStream),
	offsetof(struct HARQ_Info_r11__memoryPartitioning__Explicit__additionalMemorySizesThirdMIMOStream, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalMemorySizesThirdMIMOStream_24 = {
	"additionalMemorySizesThirdMIMOStream",
	"additionalMemorySizesThirdMIMOStream",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24,
	sizeof(asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24)
		/sizeof(asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24[0]) - 1, /* 1 */
	asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24,	/* Same as above */
	sizeof(asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24)
		/sizeof(asn_DEF_additionalMemorySizesThirdMIMOStream_tags_24[0]), /* 2 */
	&asn_PER_type_additionalMemorySizesThirdMIMOStream_constr_24,
	asn_MBR_additionalMemorySizesThirdMIMOStream_24,
	1,	/* Single element */
	&asn_SPC_additionalMemorySizesThirdMIMOStream_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_additionalMemorySizesFourthMIMOStream_26[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_HARQMemorySize,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_additionalMemorySizesFourthMIMOStream_specs_26 = {
	sizeof(struct HARQ_Info_r11__memoryPartitioning__Explicit__additionalMemorySizesFourthMIMOStream),
	offsetof(struct HARQ_Info_r11__memoryPartitioning__Explicit__additionalMemorySizesFourthMIMOStream, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalMemorySizesFourthMIMOStream_26 = {
	"additionalMemorySizesFourthMIMOStream",
	"additionalMemorySizesFourthMIMOStream",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26,
	sizeof(asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26)
		/sizeof(asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26[0]) - 1, /* 1 */
	asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26,	/* Same as above */
	sizeof(asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26)
		/sizeof(asn_DEF_additionalMemorySizesFourthMIMOStream_tags_26[0]), /* 2 */
	&asn_PER_type_additionalMemorySizesFourthMIMOStream_constr_26,
	asn_MBR_additionalMemorySizesFourthMIMOStream_26,
	1,	/* Single element */
	&asn_SPC_additionalMemorySizesFourthMIMOStream_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_explicit_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HARQ_Info_r11__memoryPartitioning__Explicit, memorySize),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_memorySize_20,
		memb_memorySize_constraint_19,
		&asn_PER_memb_memorySize_constr_20,
		0,
		"memorySize"
		},
	{ ATF_POINTER, 3, offsetof(struct HARQ_Info_r11__memoryPartitioning__Explicit, additionalMemorySizesForMIMO),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_additionalMemorySizesForMIMO_22,
		memb_additionalMemorySizesForMIMO_constraint_19,
		&asn_PER_memb_additionalMemorySizesForMIMO_constr_22,
		0,
		"additionalMemorySizesForMIMO"
		},
	{ ATF_POINTER, 2, offsetof(struct HARQ_Info_r11__memoryPartitioning__Explicit, additionalMemorySizesThirdMIMOStream),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_additionalMemorySizesThirdMIMOStream_24,
		memb_additionalMemorySizesThirdMIMOStream_constraint_19,
		&asn_PER_memb_additionalMemorySizesThirdMIMOStream_constr_24,
		0,
		"additionalMemorySizesThirdMIMOStream"
		},
	{ ATF_POINTER, 1, offsetof(struct HARQ_Info_r11__memoryPartitioning__Explicit, additionalMemorySizesFourthMIMOStream),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_additionalMemorySizesFourthMIMOStream_26,
		memb_additionalMemorySizesFourthMIMOStream_constraint_19,
		&asn_PER_memb_additionalMemorySizesFourthMIMOStream_constr_26,
		0,
		"additionalMemorySizesFourthMIMOStream"
		},
};
static int asn_MAP_explicit_oms_19[] = { 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_explicit_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_explicit_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* memorySize at 5362 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* additionalMemorySizesForMIMO at 5364 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* additionalMemorySizesThirdMIMOStream at 5366 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* additionalMemorySizesFourthMIMOStream at 5368 */
};
static asn_SEQUENCE_specifics_t asn_SPC_explicit_specs_19 = {
	sizeof(struct HARQ_Info_r11__memoryPartitioning__Explicit),
	offsetof(struct HARQ_Info_r11__memoryPartitioning__Explicit, _asn_ctx),
	asn_MAP_explicit_tag2el_19,
	4,	/* Count of tags in the map */
	asn_MAP_explicit_oms_19,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_explicit_19 = {
	"explicit",
	"explicit",
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
	asn_DEF_explicit_tags_19,
	sizeof(asn_DEF_explicit_tags_19)
		/sizeof(asn_DEF_explicit_tags_19[0]) - 1, /* 1 */
	asn_DEF_explicit_tags_19,	/* Same as above */
	sizeof(asn_DEF_explicit_tags_19)
		/sizeof(asn_DEF_explicit_tags_19[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_explicit_19,
	4,	/* Elements count */
	&asn_SPC_explicit_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_memoryPartitioning_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HARQ_Info_r11__memoryPartitioning, choice.implicit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"implicit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HARQ_Info_r11__memoryPartitioning, choice.Explicit),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_explicit_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicit"
		},
};
static asn_TYPE_tag2member_t asn_MAP_memoryPartitioning_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* implicit at 5359 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* explicit at 5362 */
};
static asn_CHOICE_specifics_t asn_SPC_memoryPartitioning_specs_17 = {
	sizeof(struct HARQ_Info_r11__memoryPartitioning),
	offsetof(struct HARQ_Info_r11__memoryPartitioning, _asn_ctx),
	offsetof(struct HARQ_Info_r11__memoryPartitioning, present),
	sizeof(((struct HARQ_Info_r11__memoryPartitioning *)0)->present),
	asn_MAP_memoryPartitioning_tag2el_17,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_memoryPartitioning_17 = {
	"memoryPartitioning",
	"memoryPartitioning",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_memoryPartitioning_constr_17,
	asn_MBR_memoryPartitioning_17,
	2,	/* Elements count */
	&asn_SPC_memoryPartitioning_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HARQ_Info_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HARQ_Info_r11, numberOfProcesses),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numberOfProcesses_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numberOfProcesses"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HARQ_Info_r11, memoryPartitioning),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_memoryPartitioning_17,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"memoryPartitioning"
		},
};
static ber_tlv_tag_t asn_DEF_HARQ_Info_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HARQ_Info_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberOfProcesses at 5356 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* memoryPartitioning at 5359 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HARQ_Info_r11_specs_1 = {
	sizeof(struct HARQ_Info_r11),
	offsetof(struct HARQ_Info_r11, _asn_ctx),
	asn_MAP_HARQ_Info_r11_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HARQ_Info_r11 = {
	"HARQ-Info-r11",
	"HARQ-Info-r11",
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
	asn_DEF_HARQ_Info_r11_tags_1,
	sizeof(asn_DEF_HARQ_Info_r11_tags_1)
		/sizeof(asn_DEF_HARQ_Info_r11_tags_1[0]), /* 1 */
	asn_DEF_HARQ_Info_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_HARQ_Info_r11_tags_1)
		/sizeof(asn_DEF_HARQ_Info_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HARQ_Info_r11_1,
	2,	/* Elements count */
	&asn_SPC_HARQ_Info_r11_specs_1	/* Additional specs */
};

