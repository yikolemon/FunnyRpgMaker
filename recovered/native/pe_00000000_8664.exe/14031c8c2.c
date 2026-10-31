/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031c8c2 */

void FUN_14031c8c2(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14062a630;
  if ((*(char *)(DAT_14062a630 + 0x2428) == '\x01') &&
     ((*(byte *)(DAT_14062a630 + 0x2acc) & 2) != 0)) {
    FUN_14030f4ba(L"Set");
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
    FUN_14030fda4();
    *(undefined8 *)(lVar1 + 0x24c8) = 0;
  }
  *(undefined8 *)(lVar1 + 0x24d0) = 0;
  *(undefined8 *)(lVar1 + 0x24d8) = 0;
  return;
}

