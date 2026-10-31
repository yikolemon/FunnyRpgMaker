/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d7920 */

undefined4 * __thiscall
FUN_100d7920(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100dded0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = param_2;
  param_1[1] = 0;
  local_14 = 0;
  local_24 = param_1;
  iVar1 = FUN_10228350(0x50);
  local_24[1] = iVar1;
  FUN_100d7b36(iVar1 + 8,param_3,param_4,param_5);
  ExceptionList = local_1c;
  return local_24;
}

