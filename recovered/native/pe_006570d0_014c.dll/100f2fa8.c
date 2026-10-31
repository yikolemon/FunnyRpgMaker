/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2fa8 */

undefined4 * FUN_100f2fa8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100f5620;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_102285b0(&DAT_10356101);
  *local_1c = std::future_error::vftable;
  local_1c[3] = param_1;
  local_1c[4] = param_2;
  ExceptionList = local_14;
  return local_1c;
}

