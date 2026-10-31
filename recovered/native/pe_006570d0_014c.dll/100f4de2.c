/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4de2 */

void __fastcall FUN_100f4de2(undefined4 *param_1)

{
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f5760;
  local_18 = ExceptionList;
  local_20 = *param_1;
  ExceptionList = &local_18;
  FUN_100446d6();
  local_10 = 0;
  FUN_1022c7c0(param_1 + 2);
  local_10 = 0xffffffff;
  FUN_1022c200(local_20);
  ExceptionList = local_18;
  return;
}

