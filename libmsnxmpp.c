/*
Application name: 	Pidgin
Client ID: 	000000004C07035A
Client secret: 	3-xyj7uzjpqTekRLhMzY69VJgnfEpndV
*/
/*
Server:   xmpp.messenger.live.com  (SSL)
SASL Mech: X-MESSENGER-OAUTH2

GET https://oauth.live.com/authorize?client_id=CLIENT_ID&scope=SCOPES&response_type=RESPONSE_TYPE&redirect_uri=REDIRECT_URL
"Replace RESPONSE_TYPE with the specific type of response. If you're using the implicit grant flow, use token to specify an access token to be returned. If you're using the authorization code grant flow, use code to specify an authorization code to be returned."
"If you're using the implicit grant flow, replace REDIRECT_URL with https://oauth.live.com/desktop. "
*/

// Public api: https://apis.live.net/v5.0/74eb95f2de2dbf75
// Public pic: https://apis.live.net/v5.0/74eb95f2de2dbf75/picture

// scope:   wl.messenger,wl.basic,wl.offline_access,wl.contacts_create,wl.share

// https://oauth.live.com/authorize?client_id=000000004C07035A&scope=wl.messenger,wl.basic,wl.offline_access,wl.contacts_create,wl.share&response_type=token&redirect_uri=http://pidgin.im/

//http://pidgin.im/#access_token=EwAwAq1DBAAUlbRWyAJjK5w968Ru3Cyt%2f6GvwXwAAdKxMjPR2YVQOFaQR0H%2bxpYNT0T9Qvi4m7TGF%2bh9FNejOLrnQ5kPOs8oyFivwY6IZMW2LVrH2UPjxTiQNdxzFhc6PwIPRp0uorNFw2plij4iuvmYGkEssyeweFUtnwckhmhVKQEOBhuLtMVbRbhm%2f4p4JGq2i5WIaktsVSMBBw0YNcJ7%2bMvLWvRliY2l8C3ApC6TWBXmyTd9KCManG7agfNfDstuJ7eKIUiNbs7hiR4VZdzmUwkV0xrgujJLL%2bHhEKuATxRS6tC8skQLfUKLgr5fI3xCF7OCtz8ACSEc9cWIxWL5potIbhgNIGOkvYaHIpCOU9acuClLyFJsw6X1FCkDZgAACPW2z%2f8Sn%2fJBAAEcSgP%2bqiXCPvdejV1fXAWtFvAMCaMnNZ5AI01Y0k9srjbz5yV7sRuzrxPTjHyN%2bEqKZ1MObnMr2DZBnuXGZ4hB24mKzvyDQKXsFz1F3QLxrCnN6vMOxREUPrNY00lHNeFNhv%2fKGJi0aztDzuzE8qUTMdMEDQWYFRrxY2SjKWQUFs%2bvzv5m2qH5%2bQSUOAFfCSg3qCCd6UplN9RzrrLdFNdDBW%2bZNs3nGu4znEmrDR0VCPqk6zgW9xb%2bWAELSzVFCt10moPiwJYhg4AaPsIJPKIzZ6GlJgQ%2fVGAqHgOhiu%2bK3o7z9iqLZtJYgLtQSg%2fw0DUEUbnoZ9Rdn9IW4IZ6aMD0AAA%3d&token_type=bearer&expires_in=3600&scope=wl.messenger%20wl.basic%20wl.offline_access%20wl.contacts_create%20wl.share&authentication_token=eyJhbGciOiJIUzI1NiIsICJraWQiOiIwIiwgInR5cCI6IkpXVCJ9.eyJ2ZXIiOjEsICJpc3MiOiJ1cm46d2luZG93czpsaXZlaWQiLCAiZXhwIjoxMzI0NDE1Mjg5LCAiYXVkIjoicGlkZ2luLmltIiwgInVpZCI6ImJjNTBhZTEyMWY3ODk0NWU0ZDZhZGQ0N2IwYzU5NzQ0IiwgInVybjptaWNyb3NvZnQ6YXBwdXJpIjoiIiwgInVybjptaWNyb3NvZnQ6YXBwaWQiOiIwMDAwMDAwMDRDMDcwMzVBIn0.p6j8PgCsFL0qvr44ex1Zx5dBunBxbn-Z-B57EegfA0c

//https://apis.live.net/v5.0/me?access_token=EwAwAq1DBAAUlbRWyAJjK5w968Ru3Cyt%2f6GvwXwAAdKxMjPR2YVQOFaQR0H%2bxpYNT0T9Qvi4m7TGF%2bh9FNejOLrnQ5kPOs8oyFivwY6IZMW2LVrH2UPjxTiQNdxzFhc6PwIPRp0uorNFw2plij4iuvmYGkEssyeweFUtnwckhmhVKQEOBhuLtMVbRbhm%2f4p4JGq2i5WIaktsVSMBBw0YNcJ7%2bMvLWvRliY2l8C3ApC6TWBXmyTd9KCManG7agfNfDstuJ7eKIUiNbs7hiR4VZdzmUwkV0xrgujJLL%2bHhEKuATxRS6tC8skQLfUKLgr5fI3xCF7OCtz8ACSEc9cWIxWL5potIbhgNIGOkvYaHIpCOU9acuClLyFJsw6X1FCkDZgAACPW2z%2f8Sn%2fJBAAEcSgP%2bqiXCPvdejV1fXAWtFvAMCaMnNZ5AI01Y0k9srjbz5yV7sRuzrxPTjHyN%2bEqKZ1MObnMr2DZBnuXGZ4hB24mKzvyDQKXsFz1F3QLxrCnN6vMOxREUPrNY00lHNeFNhv%2fKGJi0aztDzuzE8qUTMdMEDQWYFRrxY2SjKWQUFs%2bvzv5m2qH5%2bQSUOAFfCSg3qCCd6UplN9RzrrLdFNdDBW%2bZNs3nGu4znEmrDR0VCPqk6zgW9xb%2bWAELSzVFCt10moPiwJYhg4AaPsIJPKIzZ6GlJgQ%2fVGAqHgOhiu%2bK3o7z9iqLZtJYgLtQSg%2fw0DUEUbnoZ9Rdn9IW4IZ6aMD0AAA%3d

#ifndef PURPLE_PLUGINS
#	define PURPLE_PLUGINS
#endif

#ifndef G_GNUC_NULL_TERMINATED
# if __GNUC__ >= 4
#  define G_GNUC_NULL_TERMINATED __attribute__((__sentinel__))
# else
#  define G_GNUC_NULL_TERMINATED
# endif
#endif

// GNU C libraries
#include <stdio.h>
#include <string.h>

// Glib
#include <glib.h>

// Jabber functions
#include "jabber.h"
#include "message.h"
#include "presence.h"

// Libpurple functions
#include "util.h"
#include "request.h"
#include "accountopt.h"
#include "debug.h"
#include "cipher.h"
#include "xmlnode.h"

#ifndef _
#define _(a) (a)
#define N_(a) (a)
#endif

#define MSN_XMPP_CLIENT_ID "000000004C07035A"

static void msn_oauth_set_access_token_cb(gpointer data, const gchar *access_token)
{
	PurpleAccount *account = data;
	gchar *real_access_token;
	const gchar *access_token_start;
	gchar *url;
	
	if((access_token_start = strstr(access_token, "access_token=")))
	{
		access_token_start += 13;
		real_access_token = g_strndup(access_token_start, strchr(access_token_start, '&') - access_token_start);
	} else {
		real_access_token = g_strdup(access_token);
	}
	
	purple_account_set_string(account, "access_token", purple_url_decode(real_access_token));
	
	g_free(real_access_token);
}

static void msn_oauth_request_access_token(PurpleAccount *account)
{
	
	purple_request_input(NULL, NULL, _("Set your Access Token"),
					_("Copy the Pidgin URL you are sent to after you accept"), NULL,
					FALSE, FALSE, "http://pidgin.im/#access_token=...", _("OK"),
					G_CALLBACK(msn_oauth_set_access_token_cb), _("Cancel"),
					NULL, account, NULL, NULL, account);
}

static void msn_oauth_set_access_token(PurplePluginAction *action)
{
	PurpleConnection *pc = action->context;
	msn_oauth_request_access_token(pc->account);
}

static void msn_oauth_request_auth()
{
	PurplePlugin *handle = NULL;
	
	purple_notify_uri(handle, "https://oauth.live.com/authorize?client_id=" MSN_XMPP_CLIENT_ID "&scope=wl.messenger,wl.basic,wl.offline_access,wl.contacts_create,wl.share&response_type=token&redirect_uri=http://pidgin.im/");
}

static JabberSaslState 
msn_oauth_sasl_start(JabberStream *js, xmlnode *packet, xmlnode **response, char **error) 
{
	xmlnode *auth;
	const gchar *access_token;
	
	access_token = purple_account_get_string(purple_connection_get_account(js->gc), "access_token", NULL);
	
	if (!access_token)
	{
		msn_oauth_request_auth();
		msn_oauth_request_access_token(js->gc->account);
		return JABBER_SASL_STATE_FAIL;
	}

	auth = xmlnode_new("auth");
	xmlnode_set_namespace(auth, "urn:ietf:params:xml:ns:xmpp-sasl");
	xmlnode_set_attrib(auth, "mechanism", "X-MESSENGER-OAUTH2");
	xmlnode_insert_data(auth, access_token, -1);

	*response = auth;
	return JABBER_SASL_STATE_CONTINUE;
}

static JabberSaslState
msn_oauth_sasl_handle_failure(JabberStream *js, xmlnode *packet, xmlnode **reply, char **error)
{
	purple_account_set_string(purple_connection_get_account(js->gc), "access_token", NULL);
	
	msn_oauth_request_auth();
	msn_oauth_request_access_token(js->gc->account);
	
	/* Nothing to send */
	return JABBER_SASL_STATE_FAIL;
}

static JabberSaslMech msn_oauth_sasl_mech = { 
	120, /* priority */ 
	"X-MESSENGER-OAUTH2", /* name */ 
	msn_oauth_sasl_start, 
	NULL, /* handle_challenge */ 
	NULL, /* handle_success */ 
	msn_oauth_sasl_handle_failure, /* handle_failure */ 
	NULL  /* dispose */ 
};

static gboolean load_msn_plugin(PurplePlugin *plugin)
{
	purple_debug_info("facebook", "plugin_load %s\n", purple_plugin_get_id(plugin));
	jabber_auth_add_mech(&msn_oauth_sasl_mech);
	
	return TRUE;
}

static gboolean unload_msn_plugin(PurplePlugin *plugin)
{
	purple_signals_unregister_by_instance(plugin);
	purple_signals_disconnect_by_handle(plugin);
	
	jabber_auth_remove_mech(&msn_oauth_sasl_mech);
	
	return TRUE;
}

static const char *msn_list_icon(PurpleAccount *account, PurpleBuddy *buddy)
{
	return "msn";
}

static void plugin_msn_init(PurplePlugin *plugin)
{
	PurpleAccountOption *option;
	PurplePluginInfo *info = plugin->info;
	/*PurplePluginProtocolInfo *prpl_info = info->extra_info;
	
	option = purple_account_option_string_new(_("Access Token"), "access_token", "");
	prpl_info->protocol_options = g_list_append(prpl_info->protocol_options, option);*/
	
	info->dependencies = g_list_prepend(info->dependencies, "prpl-jabber");
}

static PurplePluginInfo info =
{
	PURPLE_PLUGIN_MAGIC,
	2,
	7,
	PURPLE_PLUGIN_STANDARD/*PURPLE_PLUGIN_PROTOCOL*/,                             /**< type           */
	NULL,                                             /**< ui_requirement */
	0,                                                /**< flags          */
	NULL,                                             /**< dependencies   */
	PURPLE_PRIORITY_DEFAULT,                            /**< priority       */

	"prpl-msn-xmpp",                                    /**< id             */
	"MSN (XMPP)",                                           /**< name           */
	"1.0",                                  /**< version        */
	                                                  /**  summary        */
	N_("MSN (XMPP) Protocol Plugin"),
	                                                  /**  description    */
	N_("MSN (XMPP) Protocol Plugin"),
	"Eion Robb <eionrobb@gmail.com>",                  /**< author         */
	"",                                     /**< homepage       */

	load_msn_plugin,                                      /**< load           */
	unload_msn_plugin,                                    /**< unload         */
	NULL,                                             /**< destroy        */

	NULL,                                             /**< ui_info        */
	NULL/*&prpl_info*/,                                       /**< extra_info     */
	NULL,                                             /**< prefs_info     */
	NULL,

	/* padding */
	NULL,
	NULL,
	NULL,
	NULL
};

PURPLE_INIT_PLUGIN(msnxmpp, plugin_msn_init, info);
