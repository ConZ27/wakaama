/*
 * types.h
 *
 *  Created on: Aug 4, 2014
 *      Author: constantine
 */

#ifndef TYPES_H_
#define TYPES_H_

#ifdef ERIBIUM_TYPES

#include "er-coap-13/er-coap-13.h"

#define COAP_STATUS_T coap_status_t

#endif

#ifdef LIBCOAP_TYPES

#include "libcoap/coap.h"

#define COAP_STATUS_T int

typedef enum {
  COAP_GET = COAP_REQUEST_GET,
  COAP_POST = COAP_REQUEST_POST,
  COAP_PUT = COAP_REQUEST_PUT,
  COAP_DELETE = COAP_REQUEST_DELETE
} coap_method_t;

#define COAP_MAX_RETRANSMIT COAP_DEFAULT_MAX_RETRANSMIT

#endif

#endif /* TYPES_H_ */
