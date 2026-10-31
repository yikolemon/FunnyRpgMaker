/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10041326 */

/* WARNING: Removing unreachable block (ram,0x100413af) */

void __thiscall FUN_10041326(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_1005a370;
  local_1c = ExceptionList;
  local_14 = 0;
  local_24 = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = &local_1c;
  local_28 = param_1;
  FUN_100446d6();
  local_14 = 1;
  puVar1 = *(undefined4 **)(local_28 + 0x14);
  *(undefined4 *)(local_28 + 0x14) = param_2;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  local_14 = 0xffffffff;
  FUN_1022c200(local_24);
  ExceptionList = local_1c;
  return;
}

