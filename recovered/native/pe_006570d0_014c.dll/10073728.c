/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073728 */

undefined4 * __thiscall FUN_10073728(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100c2970;
  local_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &local_14;
  *param_1 = std::ios_base::vftable;
  local_1c = param_1;
  FUN_1022dae0(param_1);
  puVar1 = local_1c;
  local_c = 0xffffffff;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x48);
  }
  ExceptionList = local_14;
  return puVar1;
}

