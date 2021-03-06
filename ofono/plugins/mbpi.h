/*
 *
 *  oFono - Open Source Telephony
 *
 *  Copyright (C) 2008-2011  Intel Corporation. All rights reserved.
 *  Copyright (C) 2013-2020  Jolla Ltd.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

extern const char *mbpi_database;
extern enum ofono_gprs_proto mbpi_default_internet_proto;
extern enum ofono_gprs_proto mbpi_default_mms_proto;
extern enum ofono_gprs_proto mbpi_default_ims_proto;
extern enum ofono_gprs_proto mbpi_default_proto;
extern enum ofono_gprs_auth_method mbpi_default_auth_method;

const char *mbpi_ap_type(enum ofono_gprs_context_type type);

void mbpi_ap_free(struct ofono_gprs_provision_data *data);

GSList *mbpi_lookup_apn(const char *mcc, const char *mnc,
			gboolean allow_duplicates, GError **error);

char *mbpi_lookup_cdma_provider_name(const char *sid, GError **error);
