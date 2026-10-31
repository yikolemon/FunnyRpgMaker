/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d22a */

void FUN_18011d22a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(DAT_180419160 + 0x242a) = 0;
  lVar2 = DAT_180419160;
  if (*(char *)(lVar1 + 0x2472) != '\x01') {
    return;
  }
  if ((*(char *)(DAT_180419160 + 0x2428) == '\x01') &&
     ((*(byte *)(DAT_180419160 + 0x2acc) & 2) != 0)) {
    FUN_1800fdfea("[dragdrop] ClearDragDrop()\n");
  }
  *(undefined1 *)(lVar2 + 0x2428) = 0;
  *(undefined8 *)(lVar2 + 0x2450) = 0;
  *(undefined8 *)(lVar2 + 0x2458) = 0;
  *(undefined8 *)(lVar2 + 0x2460) = 0;
  *(undefined8 *)(lVar2 + 0x2468) = 0;
  *(undefined1 *)(lVar2 + 0x2470) = 0;
  *(undefined8 *)(lVar2 + 0x2438) = 0;
  *(undefined8 *)(lVar2 + 0x2440) = 0;
  *(undefined8 *)(lVar2 + 0x2448) = 0xffffffff00000000;
  *(undefined2 *)(lVar2 + 0x2471) = 0;
  *(undefined4 *)(lVar2 + 0x24a0) = 0;
  *(undefined8 *)(lVar2 + 0x24b0) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x24a8) = 0x7f7fffff;
  if (*(longlong *)(lVar2 + 0x24c8) != 0) {
    *(undefined8 *)(lVar2 + 0x24c0) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(lVar2 + 0x24c8) = 0;
  }
  *(undefined8 *)(lVar2 + 0x24d0) = 0;
  *(undefined8 *)(lVar2 + 0x24d8) = 0;
  return;
}

