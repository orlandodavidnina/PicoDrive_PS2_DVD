*** Begin Patch
*** Update File: pico/32x/32x.c
@@
-  m68k_cycles = m68k_target - osh2->m68krcycles_done;
-  if (m68k_cycles < 200)
+  m68k_cycles = m68k_target - osh2->m68krcycles_done;
+  if (m68k_cycles < 46) // Brutal
     return;
*** End Patch
