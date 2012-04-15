/*
 * The internal libclocale header
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

#if !defined( _EVTXTOOLS_LIBCLOCALE_H )
#define _EVTXTOOLS_LIBCLOCALE_H

#include <common.h>

/* Define HAVE_LOCAL_LIBCLOCALE for local use of libclocale
 */
#if defined( HAVE_LOCAL_LIBCLOCALE )

#include <libclocale_codepage.h>
#include <libclocale_definitions.h>
#include <libclocale_locale.h>
#include <libclocale_support.h>

#elif defined( HAVE_LIBCLOCALE_H )

/* If libtool DLL support is enabled set LIBCLOCALE_DLL_IMPORT
 * before including libclocale.h
 */
#if defined( _WIN32 ) && defined( DLL_IMPORT )
#define LIBCLOCALE_DLL_IMPORT
#endif

#include <libclocale.h>

#else
#error Missing libclocale.h
#endif

#endif
