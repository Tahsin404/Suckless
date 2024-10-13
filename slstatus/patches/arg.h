From 3baa458322f4cf9bd4c7257d1250db490a30e8d8 Mon Sep 17 00:00:00 2001
From: Madison Lynch <madi@mxdi.xyz>
Date: Fri, 14 Jun 2024 13:00:02 -0700
Subject: [PATCH] Overhauled kanji patch: cleaner code, faster execution

---
 Makefile           |  1 +
 components/kanji.c | 30 ++++++++++++++++++++++++++++++
 config.def.h       |  1 +
 slstatus.h         |  3 +++
 4 files changed, 35 insertions(+)
 create mode 100644 components/kanji.c

diff --git a/Makefile b/Makefile
index 7a18274..305ab91 100644
--- a/Makefile
+++ b/Makefile
@@ -14,6 +14,7 @@ COM =\
 	components/entropy\
 	components/hostname\
 	components/ip\
+	components/kanji\
 	components/kernel_release\
 	components/keyboard_indicators\
 	components/keymap\
diff --git a/components/kanji.c b/components/kanji.c
new file mode 100644
index 0000000..2dbcd9a
--- /dev/null
+++ b/components/kanji.c
@@ -0,0 +1,30 @@
+/* Written by Madison Lynch <madi@mxdi.xyz> */
+#include <time.h>
+
+static const char *symbols[] = {
+        "日", // Sunday
+        "月", // Monday
+        "火", // Tuesday
+        "水", // Wednesday
+        "木", // Thursday
+        "金", // Friday
+        "土"  // Saturday
+};
+
+/**
+* Returns the appropriate Japanese Kanji character correlating with the current
+* day of the week.
+*
+* @param  unused (NULL)
+* @return the appropriate Kanji character (char)
+* @author Madison Lynch
+*/
+const char *
+kanji(const char *unused) { 
+    const time_t current_time = time(NULL);
+    const unsigned int weekday = localtime(
+        &current_time
+    )->tm_wday;
+
+    return (weekday < sizeof(symbols) / sizeof(char *)) ? symbols[weekday] : "?";
+}
diff --git a/config.def.h b/config.def.h
index d805331..099ed79 100644
--- a/config.def.h
+++ b/config.def.h
@@ -31,6 +31,7 @@ static const char unknown_str[] = "n/a";
  * hostname            hostname                        NULL
  * ipv4                IPv4 address                    interface name (eth0)
  * ipv6                IPv6 address                    interface name (eth0)
+ * kanji               current day of week kanji       NULL
  * kernel_release      `uname -r`                      NULL
  * keyboard_indicators caps/num lock indicators        format string (c?n?)
  *                                                     see keyboard_indicators.c
diff --git a/slstatus.h b/slstatus.h
index 8ef5874..dc927eb 100644
--- a/slstatus.h
+++ b/slstatus.h
@@ -31,6 +31,9 @@ const char *hostname(const char *unused);
 const char *ipv4(const char *interface);
 const char *ipv6(const char *interface);
 
+/* kanji */
+const char *kanji(const char *unused);
+
 /* kernel_release */
 const char *kernel_release(const char *unused);
 
-- 
2.45.2

