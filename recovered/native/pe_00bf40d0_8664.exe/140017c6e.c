/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017c6e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140017c6e(void)

{
  longlong lVar1;
  
  FUN_140018798((uint *)&DAT_14012e920);
  if (DAT_14013c988 != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_14013c988);
    DAT_14013c988 = (HHOOK)0x0;
  }
  if (DAT_14013c990 != 0) {
    PostThreadMessageW(DAT_14013c990,0x12,0,0);
    DAT_14013c990 = 0;
  }
  lVar1 = DAT_14013c958;
  FUN_140018402(&DAT_14013c958,&DAT_14013c958,*(longlong **)(DAT_14013c958 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  lVar1 = DAT_14013c968;
  _DAT_14013c960 = 0;
  FUN_140018402(&DAT_14013c968,&DAT_14013c968,*(longlong **)(DAT_14013c968 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  _DAT_14013c970 = 0;
  FUN_14008b270(0x14012e920);
  return;
}

