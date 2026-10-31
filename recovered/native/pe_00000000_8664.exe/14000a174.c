/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000a174 */

void FUN_14000a174(longlong param_1)

{
  longlong *plVar1;
  
  FUN_140004b06(param_1 + 0xb8);
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_14000bbee(param_1 + 0x40);
  FUN_14000bbee(param_1 + 0x20);
  FUN_1400022f6(param_1 + 8);
  return;
}

