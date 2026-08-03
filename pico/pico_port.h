*** Begin Patch
*** Update File: pico/pico_port.h
@@
-#if defined __BYTE_ORDER__
-#define	CPU_IS_LE	__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
-#elif defined __BYTE_ORDER
-#define	CPU_IS_LE	__BYTE_ORDER == __LITTLE_ENDIAN
+#if defined __BYTE_ORDER__
+#define	CPU_IS_LE	(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
+#elif defined __BYTE_ORDER
+#define	CPU_IS_LE	(__BYTE_ORDER == __LITTLE_ENDIAN)
*** End Patch
