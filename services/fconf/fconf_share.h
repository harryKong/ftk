/*
 * File: fconf_share.h
 * Author:  Li XianJing <xianjimli@hotmail.com>
 * Brief:   some macros shared by client and service.
 *
 * Copyright (c) 2009 - 2010  Li XianJing <xianjimli@hotmail.com>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * History:
 * ================================================================
 * 2010-08-01 Li XianJing <xianjimli@hotmail.com> created
 *
 */
#ifndef FCONF_SHARE_H
#define FCONF_SHARE_H

#include "fbus_typedef.h"

FTK_BEGIN_DECLS

typedef enum _FCONF_REQ
{	FCONF_LOCK,
	FCONF_UNLOCK,
	FCONF_REMOVE,
	FCONF_SET,
	FCONF_GET,
	FCONF_GET_CHILD_COUNT,
	FCONF_GET_CHILD,
	FCONF_REQ_NR
}FCONF_REQ;

#define FBUS_SERVICE_FCONF "fbus.service.fconf"

FTK_END_DECLS

#endif/*FCONF_SHARE_H*/
