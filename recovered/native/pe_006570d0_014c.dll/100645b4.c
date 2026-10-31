/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100645b4 */

undefined4 * __thiscall FUN_100645b4(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100c2150;
  local_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &local_14;
  *param_1 = std::exception::vftable;
  local_1c = param_1;
  FUN_10259020(param_1 + 1);
  puVar1 = local_1c;
  local_c = 0xffffffff;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x10);
  }
  ExceptionList = local_14;
  return puVar1;
}

