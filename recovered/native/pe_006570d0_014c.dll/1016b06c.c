/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016b06c */

void FUN_1016b06c(void)

{
  int iVar1;
  int iVar2;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_101800d0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  iVar1 = DAT_1039d8ec;
  local_14 = 0;
  iVar2 = DAT_1039d8e8;
  if (DAT_1039d8e8 != DAT_1039d8ec) {
    do {
      FUN_10179724(&DAT_1039d8e8,iVar2);
      iVar2 = iVar2 + 0x2c;
    } while (iVar2 != iVar1);
    DAT_1039d8ec = DAT_1039d8e8;
  }
  iVar1 = DAT_1039d8fc;
  iVar2 = DAT_1039d8f8;
  if (DAT_1039d8f8 != DAT_1039d8fc) {
    do {
      FUN_101798e0(iVar2);
      iVar2 = iVar2 + 0x28;
    } while (iVar2 != iVar1);
    DAT_1039d8fc = DAT_1039d8f8;
  }
  local_14 = 0;
  FUN_1016b15d();
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_1039d8b4);
  ExceptionList = local_1c;
  return;
}

