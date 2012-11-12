/*
 * Template definition functions
 *
 * Copyright (c) 2011-2012, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBEVTX_INTERNAL_TEMPLATE_DEFINITION_H )
#define _LIBEVTX_INTERNAL_TEMPLATE_DEFINITION_H

#include <common.h>
#include <types.h>

#include "libevtx_extern.h"
#include "libevtx_libcerror.h"
#include "libevtx_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libevtx_internal_template_definition libevtx_internal_template_definition_t;

struct libevtx_internal_template_definition
{
	/* The binary XML data
	 */
	uint8_t *binary_xml_data;

	/* The binary XML data size
	 */
	size_t binary_xml_data_size;

	/* The instance values data
	 */
	uint8_t *instance_values_data;

	/* The instance values data size
	 */
	size_t instance_values_data_size;
};

LIBEVTX_EXTERN \
int libevtx_template_definition_initialize(
     libevtx_template_definition_t **template_definition,
     libcerror_error_t **error );

LIBEVTX_EXTERN \
int libevtx_template_definition_free(
     libevtx_template_definition_t **template_definition,
     libcerror_error_t **error );

LIBEVTX_EXTERN \
int libevtx_template_definition_set_binary_xml_data(
     libevtx_template_definition_t *template_definition,
     const uint8_t *data,
     size_t data_size,
     libcerror_error_t **error );

LIBEVTX_EXTERN \
int libevtx_template_definition_set_instance_values_data(
     libevtx_template_definition_t *template_definition,
     const uint8_t *data,
     size_t data_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif
