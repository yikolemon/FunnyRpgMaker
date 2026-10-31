/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007f222 */

void __fastcall FUN_1007f222(undefined1 *param_1)

{
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c2ff0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_1007fbb8(*param_1);
  ExceptionList = local_10;
  return;
}

