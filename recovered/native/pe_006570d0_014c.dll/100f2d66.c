/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2d66 */

undefined4 * FUN_100f2d66(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f5600;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_102285b0(&DAT_10356101);
  puVar1 = local_20;
  local_10 = 0;
  *local_20 = std::future_error::vftable;
  uVar2 = FUN_100f2ef5();
  puVar1[3] = param_1;
  puVar1[4] = uVar2;
  ExceptionList = local_18;
  return local_20;
}

