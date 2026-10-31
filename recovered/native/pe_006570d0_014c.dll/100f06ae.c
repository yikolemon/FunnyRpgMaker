/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f06ae */

void __fastcall FUN_100f06ae(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100f5370;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  local_1c = param_1;
  FUN_100f092a();
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_102283a0(uVar1,8);
  ExceptionList = local_14;
  return;
}

