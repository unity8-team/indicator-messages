const char * _messages_service = 
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<node name=\"/\">\n"
"	<interface name=\"com.canonical.indicator.messages.service\">\n"
"\n"
"<!-- Methods -->\n"
"		<method name=\"Watch\">\n"
"			<annotation name=\"org.freedesktop.DBus.GLib.Async\" value=\"true\" />\n"
"		</method>\n"
"		<method name=\"AttentionRequested\">\n"
"			<arg type=\"b\" name=\"dot\" direction=\"out\" />\n"
"		</method>\n"
"		<method name=\"IconShown\">\n"
"			<arg type=\"b\" name=\"hidden\" direction=\"out\" />\n"
"		</method>\n"
"\n"
"<!-- Signals -->\n"
"		<signal name=\"AttentionChanged\">\n"
"			<arg type=\"b\" name=\"dot\" direction=\"out\" />\n"
"		</signal>\n"
"		<signal name=\"IconChanged\">\n"
"			<arg type=\"b\" name=\"hidden\" direction=\"out\" />\n"
"		</signal>\n"
"\n"
"	</interface>\n"
"</node>\n"
;
