/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400adeae */

void Unwind_1400adeae(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x308);
  while (param_2 + 0x38 != lVar1) {
    lVar1 = lVar1 + -0x20;
    FUN_140005242(lVar1);
  }
  return;
}

