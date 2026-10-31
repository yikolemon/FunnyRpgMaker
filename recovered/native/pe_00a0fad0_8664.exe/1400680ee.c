/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400680ee */

void FUN_1400680ee(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1400578a6(param_1 + 0xb8);
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_1400696ea(param_1 + 0x40);
  FUN_1400696ea(param_1 + 0x20);
  FUN_140016e5c(param_1 + 8);
  return;
}

