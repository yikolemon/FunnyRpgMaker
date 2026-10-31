/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400af96e */

void Unwind_1400af96e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x990);
  while (param_2 + 0x28 != lVar1) {
    lVar1 = lVar1 + -0x40;
    FUN_1400aecc8(lVar1);
  }
  return;
}

