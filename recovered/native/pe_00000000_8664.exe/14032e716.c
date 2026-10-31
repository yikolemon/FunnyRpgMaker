/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032e716 */

void FUN_14032e716(undefined4 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_14062a630;
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  *(undefined1 *)(DAT_14062a630 + 0x167a) = 1;
  *(undefined1 *)(lVar2 + 0x2a40) = 1;
  *(undefined4 *)(lVar2 + 0x2a44) = param_1;
  *(longlong *)(lVar2 + 0x2a48) = lVar1;
  *(undefined8 *)(lVar2 + 0x2a68) = 0;
  *(undefined8 *)(lVar2 + 0x2a70) = 0;
  *(undefined4 *)(lVar2 + 0x2a7c) = *(undefined4 *)(lVar1 + 0x1e0);
  if (param_2 < 0) {
    param_2 = *(int *)(lVar2 + 0x2a84);
  }
  *(int *)(lVar2 + 0x2a80) = param_2;
  *(undefined4 *)(lVar2 + 0x2a78) = 0x7f7fffff;
  *(undefined1 *)(lVar2 + 0x2a41) = 1;
  return;
}

