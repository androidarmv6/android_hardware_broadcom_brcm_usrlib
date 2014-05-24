/* ============================================================================
Copyright (c) 2010-2014, Broadcom Corporation
All rights reserved.
Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
============================================================================ */
#ifndef _VC_HDCP2_RX_SERVICE_H_
#define _VC_HDCP2_RX_SERVICE_H_

#include "vcinclude/common.h"
#include "interface/vcos/vcos.h"
#include "interface/vchi/vchi.h"
#include "interface/vmcs_host/vc_hdcp2service_defs.h"

/**
 * \file
 *
 * This API defines the Rx host side HDCP2 service.
 * Define ENABLE_HDCP2_LOOPBACK_TEST in HDCP2 Tx/Rx services/state machine
 * to test HDCP2 local loopback. The API is much more simpler than Tx because
 * Rx is passive.
 */

/**
 * <DFN>vc_vchi_hdcp2_rx_init</DFN> is called at the beginning of the application
 * to initialise the client to Rx side HDCP2 service
 * 
 * @param initialise_instance is the VCHI instance [in]
 *
 * @param connections is the array of pointers of connections [in]
 * 
 * @param num_connections is the length of the array [in]
 *
 * @return void
 */
VCHPRE_ void VCHPOST_ vc_vchi_hdcp2_rx_init(VCHI_INSTANCE_T initialise_instance, VCHI_CONNECTION_T **connections, uint32_t num_connections );

/**
 * <DFN>vc_vchi_hdcp2_rx_stop</DNF> stops the Rx host side HDCP2 service
 *
 * @param none
 *
 * @return void
 */
VCHPRE_ void VCHPOST_ vc_vchi_hdcp2_rx_stop( void );

/**
 * Host applications must call <DFN>vc_hdcp2_rx_register_callback</DNF> at 
 * the beginning to register a function to handle all outgoing message
 * from HDCP2 Rx state machine. Note that notifications from 
 * state machine also come in the form of outgoing message, so you have
 * to look at the message type.
 *
 * @param callback function [in]
 *
 * @param callback_data is the context to be passed when function is called [in]
 *
 * @return void
 */
VCHPRE_ void VCHPOST_ vc_hdcp2_rx_register_callback(HDCP2SERVICE_CALLBACK_T callback, void *callback_data);

/**
 * Use <DFN>vc_hdcp2_rx_send_message</DFN> to send message [from Tx] to
 * HDCP2 Rx state machine. You should only use this to send genuine 
 * HDCP2 message. Use <DFN>vc_hdcp2_rx_send_loopback_message</DFN> to
 * send loopback test data.
 *
 * @param buffer is the message buffer [in]
 *
 * @param buffer_size is the size [in]
 *
 * @return zero if message is successfully transmitted, non-zero otherwise
 */
VCHPRE_ int VCHPOST_ vc_hdcp2_rx_send_message(const void *buffer, uint32_t buffer_size); 

/**
 * Use <DFN>vc_hdcp2_rx_send_loopback_message</DFN> to send loopback message 
 * [from Tx] to HDCP2 Rx service. This message does NOT travel to
 * HDCP2 Rx state machine. This function is only available if you are running loopback 
 * test.
 *
 * @param streamCtr is the stream counter (NOT the stream id) [in]
 *
 * @param inputCtr is the input counter (big endian) [in]
 * 
 * @param encrypted_buffer is the encrypted buffer [in]
 *
 * @param buffer_size if the length of encrypted buffer [in]
 *
 * @param plaintext_buffer is the expected data (same size as encrypted buffer) [in]
 *
 * @param last_packet is non-zero if this is the last packet [in], which will
 *        terminate the loopback test.
 *
 * @return 1 if message is decrypted successfully, 0 if decrypt failed
 *         -1 if message failed to be sent to Videocore
 */
#ifdef ENABLE_HDCP2_LOOPBACK_TEST
VCHPRE_ int VCHPOST_ vc_hdcp2_rx_send_loopback_message(uint32_t streamCtr, uint64_t inputCtr,
                                                       const uint8_t *encrypted_buffer,
                                                       uint32_t buffer_size,
                                                       const uint8_t *plaintext_buffer,
                                                       uint32_t last_packet);
#endif


/**
 * <DFN>vc_hdcp2_rx_is_authenticated</DFN> returns whether there is 
 * currently an authenticated link or not. Note that the result here does
 * not necessarily agree with the result from <DFN>vc_hdcp2_tx_is_authenticated</DFN>
 * because Rx is passive in the context of authentication.
 *
 * @param pointer to auth [in], non-zero if the link is authenticated, zero otherwise
 *
 * @return zero if the command is sent successfully, auth is also set to zero if 
 *         command failed 
 *
 */
VCHPRE_ int VCHPOST_ vc_hdcp2_rx_is_authenticated(uint32_t *auth);
#endif
