$NetBSD: patch-ipc_chromium_src_base_sys__info__posix.cc,v 1.3 2014/02/20 13:19:03 ryoon Exp $

--- ipc/chromium/src/base/sys_info_posix.cc.orig	2013-05-11 19:19:32.000000000 +0000
+++ ipc/chromium/src/base/sys_info_posix.cc
@@ -119,7 +119,11 @@ std::wstring SysInfo::GetEnvVar(const wc
 
 // static
 std::string SysInfo::OperatingSystemName() {
+#ifdef OS_SOLARIS
+  struct utsname info;
+#else
   utsname info;
+#endif
   if (uname(&info) < 0) {
     NOTREACHED();
     return "";
@@ -129,7 +133,11 @@ std::string SysInfo::OperatingSystemName
 
 // static
 std::string SysInfo::OperatingSystemVersion() {
+#ifdef OS_SOLARIS
+  struct utsname info;
+#else
   utsname info;
+#endif
   if (uname(&info) < 0) {
     NOTREACHED();
     return "";
@@ -139,7 +147,11 @@ std::string SysInfo::OperatingSystemVers
 
 // static
 std::string SysInfo::CPUArchitecture() {
+#ifdef OS_SOLARIS
+  struct utsname info;
+#else
   utsname info;
+#endif
   if (uname(&info) < 0) {
     NOTREACHED();
     return "";
