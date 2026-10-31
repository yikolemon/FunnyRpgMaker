/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cc58c */

undefined4 __thiscall FUN_100cc58c(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  WCHAR local_138 [128];
  undefined1 local_38 [24];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_138;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ce450;
  local_1c = ExceptionList;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  ExceptionList = &local_1c;
  _memset(local_138,0,0x100);
  iVar3 = GetKeyNameTextW((uint)(byte)uVar2 << 0x18 | (uint)uVar1 << 0x10,local_138,0x80);
  if (iVar3 == 0) {
    FUN_10001f66(&DAT_10356101);
  }
  else {
    FUN_100012b0(local_138);
    local_14 = 0;
    FUN_100c5628(param_2,local_38);
    local_14 = 0xffffffff;
    FUN_10001134();
  }
  ExceptionList = local_1c;
  return param_2;
}

