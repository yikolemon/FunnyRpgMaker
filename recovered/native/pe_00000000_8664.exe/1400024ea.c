/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400024ea */

void FUN_1400024ea(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x2050);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x2018));
    *(undefined8 *)(param_1 + 0x2050) = 0;
  }
  return;
}

