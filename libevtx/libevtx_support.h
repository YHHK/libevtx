/*
 * Support functions
 *
 * Copyright (c) 2011-2012, Joachim Metz <jbmetz@users.sourceforge.net>
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

#if !defined( _LIBEVTX_SUPPORT_H )
#define _LIBEVTX_SUPPORT_H

#include <common.h>
#include <types.h>

#include "libevtx_extern.h"
#include "libevtx_libbfio.h"
#include "libevtx_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

#if !defined( HAVE_LOCAL_LIBEVTX )

LIBEVTX_EXTERN \
const char *libevtx_get_version(
             void );

LIBEVTX_EXTERN \
int libevtx_get_access_flags_read(
     void );

LIBEVTX_EXTERN \
int libevtx_get_codepage(
     int *codepage,
     libcerror_error_t **error );

LIBEVTX_EXTERN \
int libevtx_set_codepage(
     int codepage,
     libcerror_error_t **error );

#endif /* !defined( HAVE_LOCAL_LIBEVTX ) */

LIBEVTX_EXTERN \
int libevtx_check_file_signature(
     const char *filename,
     libcerror_error_t **error );

#if defined( HAVE_WIDE_CHARACTER_TYPE )
LIBEVTX_EXTERN \
int libevtx_check_file_signature_wide(
     const wchar_t *filename,
     libcerror_error_t **error );
#endif

LIBEVTX_EXTERN \
int libevtx_check_file_signature_file_io_handle(
     libbfio_handle_t *bfio_handle,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

