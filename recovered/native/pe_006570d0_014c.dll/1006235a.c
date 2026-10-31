/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006235a */

undefined1 * __fastcall FUN_1006235a(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_44 [24];
  int local_2c [2];
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1ab0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = param_1;
  FUN_100446d6();
  local_14 = 0;
  if (param_1 == 0) {
    puVar2 = &DAT_10356101;
  }
  else {
    iVar1 = FUN_100627c2(&local_24);
    if (iVar1 == DAT_1039c9ec) {
      FUN_1005bef2(local_44,local_24);
      local_14 = 1;
      FUN_10062474();
      FUN_100672c2(local_2c,&local_24,local_44);
      local_14 = 0xffffffff;
      FUN_10001fee();
      iVar1 = local_2c[0];
    }
    if (*(uint *)(iVar1 + 0x3c) < 0x10) {
      puVar2 = (undefined1 *)(iVar1 + 0x28);
    }
    else {
      puVar2 = *(undefined1 **)(iVar1 + 0x28);
    }
  }
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_1039c9a4);
  ExceptionList = local_1c;
  return puVar2;
}

