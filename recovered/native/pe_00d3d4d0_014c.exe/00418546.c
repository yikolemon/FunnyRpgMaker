/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00418546 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418546(void)

{
  int iVar1;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_0041a040;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_0041903e((uint *)&DAT_0050e7a0);
  local_14 = 0;
  if (DAT_0051ba40 != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_0051ba40);
    DAT_0051ba40 = (HHOOK)0x0;
  }
  if (DAT_0051ba44 != 0) {
    PostThreadMessageW(DAT_0051ba44,0x12,0,0);
    DAT_0051ba44 = 0;
  }
  iVar1 = DAT_0051ba28;
  FUN_00418c8c(&DAT_0051ba28,*(int **)(DAT_0051ba28 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  iVar1 = DAT_0051ba30;
  _DAT_0051ba2c = 0;
  FUN_00418c8c(&DAT_0051ba30,*(int **)(DAT_0051ba30 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  _DAT_0051ba34 = 0;
  local_14 = 0xffffffff;
  FUN_00483a10(0x50e7a0);
  ExceptionList = local_1c;
  return;
}

