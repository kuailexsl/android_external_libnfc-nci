/******************************************************************************
**
** File:         nfa_hci_defs.h
**
** Description:   This file contains the NFA HCI related definitions from
**                the specification.
**
** Copyright (c) 2009-2012  Broadcom Corp.  All Rights Reserved.
** Broadcom Bluetooth Core. Proprietary and confidential.
**
******************************************************************************/

#ifndef NFA_HCI_DEFS_H
#define NFA_HCI_DEFS_H

/* Default Session id */
#define NFA_HCI_DEFAULT_SESSION             0xFFFFFFFFFFFFFFFF

/* Static gates */
#define NFA_HCI_LOOP_BACK_GATE              0x04
#define NFA_HCI_IDENTITY_MANAGEMENT_GATE    0x05

#define NFA_HCI_FIRST_DYNAMIC_GATE          0x10
#define NFA_HCI_LAST_DYNAMIC_GATE           0xFF

/* Generic Gates */
#define NFA_HCI_CONNECTIVITY_GATE           0x41

/* Static pipes */
#define NFA_HCI_LINK_MANAGEMENT_PIPE        0x00
#define NFA_HCI_ADMIN_PIPE                  0x01

/* Dynamic pipe range */
#define NFA_HCI_FIRST_DYNAMIC_PIPE          0x02
#define NFA_HCI_LAST_DYNAMIC_PIPE           0x6F

/* host_table */
#define NFA_HCI_HOST_CONTROLLER             0x00
#define NFA_HCI_DH_HOST                     0x01
#define NFA_HCI_UICC_HOST                   0x02

/* Type of instruction */
#define NFA_HCI_COMMAND_TYPE                0x00
#define NFA_HCI_EVENT_TYPE                  0x01
#define NFA_HCI_RESPONSE_TYPE               0x02

/* Chaining bit value */
#define NFA_HCI_MESSAGE_FRAGMENTATION       0x00
#define NFA_HCI_NO_MESSAGE_FRAGMENTATION    0x01

/* NFA HCI commands */

/* Commands for all gates */
#define NFA_HCI_ANY_SET_PARAMETER           0x01
#define NFA_HCI_ANY_GET_PARAMETER           0x02
#define NFA_HCI_ANY_OPEN_PIPE               0x03
#define NFA_HCI_ANY_CLOSE_PIPE              0x04

/* Admin gate commands */
#define NFA_HCI_ADM_CREATE_PIPE             0x10
#define NFA_HCI_ADM_DELETE_PIPE             0x11
#define NFA_HCI_ADM_NOTIFY_PIPE_CREATED     0x12
#define NFA_HCI_ADM_NOTIFY_PIPE_DELETED     0x13
#define NFA_HCI_ADM_CLEAR_ALL_PIPE          0x14
#define NFA_HCI_ADM_NOTIFY_ALL_PIPE_CLEARED 0x15

/* Connectivity gate command */
#define NFA_HCI_CON_PRO_HOST_REQUEST        0x10


/* NFA HCI responses */
#define NFA_HCI_ANY_OK                      0x00
#define NFA_HCI_ANY_E_NOT_CONNECTED         0x01
#define NFA_HCI_ANY_E_CMD_PAR_UNKNOWN       0x02
#define NFA_HCI_ANY_E_NOK                   0x03
#define NFA_HCI_ADM_E_NO_PIPES_AVAILABLE    0x04
#define NFA_HCI_ANY_E_REG_PAR_UNKNOWN       0x05
#define NFA_HCI_ANY_E_PIPE_NOT_OPENED       0x06
#define NFA_HCI_ANY_E_CMD_NOT_SUPPORTED     0x07
#define NFA_HCI_ANY_E_INHIBITED             0x08
#define NFA_HCI_ANY_E_TIMEOUT               0x09
#define NFA_HCI_ANY_E_REG_ACCESS_DENIED     0x0A
#define NFA_HCI_ANY_E_PIPE_ACCESS_DENIED    0x0B

/* NFA HCI Events */
#define NFA_HCI_EVT_HCI_END_OF_OPERATION    0x01
#define NFA_HCI_EVT_POST_DATA               0x02
#define NFA_HCI_EVT_HOT_PLUG                0x03


/* NFA HCI Connectivity gate Events */
#define NFA_HCI_EVT_CONNECTIVITY            0x10
#define NFA_HCI_EVT_TRANSACTION             0x12
#define NFA_HCI_EVT_OPERATION_ENDED         0x13

/* Host controller Admin gate registry identifiers */
#define NFA_HCI_SESSION_IDENTITY_INDEX      0x01
#define NFA_HCI_MAX_PIPE_INDEX              0x02
#define NFA_HCI_WHITELIST_INDEX             0x03
#define NFA_HCI_HOST_LIST_INDEX             0x04

/* Host controller and DH Link management gate registry identifier */
#define NFA_HCI_REC_ERROR_INDEX             0x02

/* DH Identity management gate registry identifier */
#define NFA_HCI_VERSION_SW_INDEX            0x01
#define NFA_HCI_VERSION_HW_INDEX            0x03
#define NFA_HCI_VENDOR_NAME_INDEX           0x04
#define NFA_HCI_MODEL_ID_INDEX              0x05
#define NFA_HCI_HCI_VERSION_INDEX           0x02
#define NFA_HCI_GATES_LIST_INDEX            0x06


#endif /* NFA_HCI_DEFS_H */
