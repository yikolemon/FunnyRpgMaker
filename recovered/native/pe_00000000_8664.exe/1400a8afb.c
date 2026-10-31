/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a8afb */

void FUN_1400a8afb(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140077ab4(0xb0);
  FUN_1400cb3f8(uVar1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}

