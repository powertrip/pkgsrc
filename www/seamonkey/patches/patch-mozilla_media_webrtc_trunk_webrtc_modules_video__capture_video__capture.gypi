$NetBSD: patch-mozilla_media_webrtc_trunk_webrtc_modules_video__capture_video__capture.gypi,v 1.2 2013/09/28 14:37:05 ryoon Exp $

--- mozilla/media/webrtc/trunk/webrtc/modules/video_capture/video_capture.gypi.orig	2013-09-16 18:26:51.000000000 +0000
+++ mozilla/media/webrtc/trunk/webrtc/modules/video_capture/video_capture.gypi
@@ -7,6 +7,9 @@
 # be found in the AUTHORS file in the root of the source tree.
 
 {
+  'variables': {
+     'use_libv4l2%': 0,
+  },
   'targets': [
     {
       'target_name': 'video_capture_module',
@@ -49,6 +52,16 @@
         }, {  # include_internal_video_capture == 1
           'conditions': [
             ['include_v4l2_video_capture==1', {
+              'conditions': [
+                ['use_libv4l2==1', {
+                  'defines': [
+                    'HAVE_LIBV4L2',
+                  ],
+                  'libraries': [
+                    '-lv4l2',
+                  ],
+                }],
+              ],
               'include_dirs': [
                 'linux',
               ],
