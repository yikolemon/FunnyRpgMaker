/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008470a */

void FUN_14008470a(void)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  if ((*(char *)(DAT_140f2a910 + 0x2428) == '\x01') &&
     ((*(byte *)(DAT_140f2a910 + 0x2acc) & 2) != 0)) {
    FUN_1400772a6("[dragdrop] ClearDragDrop()\n");
  }
  *(undefined1 *)(lVar1 + 0x2428) = 0;
  *(undefined8 *)(lVar1 + 0x2450) = 0;
  *(undefined8 *)(lVar1 + 0x2458) = 0;
  *(undefined8 *)(lVar1 + 0x2460) = 0;
  *(undefined8 *)(lVar1 + 0x2468) = 0;
  *(undefined1 *)(lVar1 + 0x2470) = 0;
  *(undefined8 *)(lVar1 + 0x2438) = 0;
  *(undefined8 *)(lVar1 + 0x2440) = 0;
  *(undefined8 *)(lVar1 + 0x2448) = 0xffffffff00000000;
  *(undefined2 *)(lVar1 + 0x2471) = 0;
  *(undefined4 *)(lVar1 + 0x24a0) = 0;
  *(undefined8 *)(lVar1 + 0x24b0) = 0xffffffff00000000;
  *(undefined8 *)(lVar1 + 0x24a8) = 0x7f7fffff;
  if (*(longlong *)(lVar1 + 0x24c8) != 0) {
    *(undefined8 *)(lVar1 + 0x24c0) = 0;
    FUN_140077b90();
    *(undefined8 *)(lVar1 + 0x24c8) = 0;
  }
  *(undefined8 *)(lVar1 + 0x24d0) = 0;
  *(undefined8 *)(lVar1 + 0x24d8) = 0;
  return;
}

