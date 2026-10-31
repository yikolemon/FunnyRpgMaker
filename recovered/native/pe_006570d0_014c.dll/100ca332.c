/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca332 */

/* WARNING: Removing unreachable block (ram,0x100ca392) */

void __thiscall FUN_100ca332(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_100cc400;
  local_10 = ExceptionList;
  local_8 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 8) = param_2;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  ExceptionList = local_10;
  return;
}

