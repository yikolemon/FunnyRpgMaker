/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008ddc2 */

undefined4 * __thiscall FUN_1008ddc2(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100c37b0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = CommonEvents::vftable;
  local_c = 0xffffffff;
  local_1c = param_1;
  FUN_1008d8fe();
  FUN_10070120();
  puVar1 = local_1c;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x4c);
  }
  ExceptionList = local_14;
  return puVar1;
}

