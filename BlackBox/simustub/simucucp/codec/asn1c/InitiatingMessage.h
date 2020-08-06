/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Descriptions"
 * 	found in "E1AP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_InitiatingMessage_H_
#define	_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "Reset.h"
#include "ResetAcknowledge.h"
#include "GNB-CU-UP-E1SetupRequest.h"
#include "GNB-CU-UP-E1SetupResponse.h"
#include "GNB-CU-UP-E1SetupFailure.h"
#include "GNB-CU-CP-E1SetupRequest.h"
#include "GNB-CU-CP-E1SetupResponse.h"
#include "GNB-CU-CP-E1SetupFailure.h"
#include "GNB-CU-UP-ConfigurationUpdate.h"
#include "GNB-CU-UP-ConfigurationUpdateAcknowledge.h"
#include "GNB-CU-UP-ConfigurationUpdateFailure.h"
#include "GNB-CU-CP-ConfigurationUpdate.h"
#include "GNB-CU-CP-ConfigurationUpdateAcknowledge.h"
#include "GNB-CU-CP-ConfigurationUpdateFailure.h"
#include "E1ReleaseRequest.h"
#include "E1ReleaseResponse.h"
#include "BearerContextSetupRequest.h"
#include "BearerContextSetupResponse.h"
#include "BearerContextSetupFailure.h"
#include "BearerContextModificationRequest.h"
#include "BearerContextModificationResponse.h"
#include "BearerContextModificationFailure.h"
#include "BearerContextModificationRequired.h"
#include "BearerContextModificationConfirm.h"
#include "BearerContextReleaseCommand.h"
#include "BearerContextReleaseComplete.h"
#include "ErrorIndication.h"
#include "BearerContextReleaseRequest.h"
#include "BearerContextInactivityNotification.h"
#include "DLDataNotification.h"
#include "ULDataNotification.h"
#include "DataUsageReport.h"
#include "GNB-CU-UP-CounterCheckRequest.h"
#include "GNB-CU-UP-StatusIndication.h"
#include "MRDC-DataUsageReport.h"
#include "PrivateMessage.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitiatingMessage__value_PR {
	InitiatingMessage__value_PR_NOTHING,	/* No components present */
	InitiatingMessage__value_PR_Reset,
	InitiatingMessage__value_PR_GNB_CU_UP_E1SetupRequest,
	InitiatingMessage__value_PR_GNB_CU_CP_E1SetupRequest,
	InitiatingMessage__value_PR_GNB_CU_UP_ConfigurationUpdate,
	InitiatingMessage__value_PR_GNB_CU_CP_ConfigurationUpdate,
	InitiatingMessage__value_PR_E1ReleaseRequest,
	InitiatingMessage__value_PR_BearerContextSetupRequest,
	InitiatingMessage__value_PR_BearerContextModificationRequest,
	InitiatingMessage__value_PR_BearerContextModificationRequired,
	InitiatingMessage__value_PR_BearerContextReleaseCommand,
	InitiatingMessage__value_PR_ErrorIndication,
	InitiatingMessage__value_PR_BearerContextReleaseRequest,
	InitiatingMessage__value_PR_BearerContextInactivityNotification,
	InitiatingMessage__value_PR_DLDataNotification,
	InitiatingMessage__value_PR_ULDataNotification,
	InitiatingMessage__value_PR_DataUsageReport,
	InitiatingMessage__value_PR_GNB_CU_UP_CounterCheckRequest,
	InitiatingMessage__value_PR_GNB_CU_UP_StatusIndication,
	InitiatingMessage__value_PR_MRDC_DataUsageReport,
	InitiatingMessage__value_PR_PrivateMessage
} InitiatingMessage__value_PR;

/* InitiatingMessage */
typedef struct InitiatingMessage {
	ProcedureCode_t	 procedureCode;
	Criticality_t	 criticality;
	struct InitiatingMessage__value {
		InitiatingMessage__value_PR present;
		union InitiatingMessage__value_u {
			Reset_t	 Reset;
			GNB_CU_UP_E1SetupRequest_t	 GNB_CU_UP_E1SetupRequest;
			GNB_CU_CP_E1SetupRequest_t	 GNB_CU_CP_E1SetupRequest;
			GNB_CU_UP_ConfigurationUpdate_t	 GNB_CU_UP_ConfigurationUpdate;
			GNB_CU_CP_ConfigurationUpdate_t	 GNB_CU_CP_ConfigurationUpdate;
			E1ReleaseRequest_t	 E1ReleaseRequest;
			BearerContextSetupRequest_t	 BearerContextSetupRequest;
			BearerContextModificationRequest_t	 BearerContextModificationRequest;
			BearerContextModificationRequired_t	 BearerContextModificationRequired;
			BearerContextReleaseCommand_t	 BearerContextReleaseCommand;
			ErrorIndication_t	 ErrorIndication;
			BearerContextReleaseRequest_t	 BearerContextReleaseRequest;
			BearerContextInactivityNotification_t	 BearerContextInactivityNotification;
			DLDataNotification_t	 DLDataNotification;
			ULDataNotification_t	 ULDataNotification;
			DataUsageReport_t	 DataUsageReport;
			GNB_CU_UP_CounterCheckRequest_t	 GNB_CU_UP_CounterCheckRequest;
			GNB_CU_UP_StatusIndication_t	 GNB_CU_UP_StatusIndication;
			MRDC_DataUsageReport_t	 MRDC_DataUsageReport;
			PrivateMessage_t	 PrivateMessage;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _InitiatingMessage_H_ */
#include <asn_internal.h>