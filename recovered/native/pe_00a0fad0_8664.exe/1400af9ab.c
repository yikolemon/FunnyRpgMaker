/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400af9ab */

void Unwind_1400af9ab(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x980);
  if (param_2 + 0x28 != *(longlong *)(param_2 + 0x988)) {
    do {
      FUN_1400aecc8(lVar1 + param_2 + 0x28);
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != -0x40);
  }
  return;
}

