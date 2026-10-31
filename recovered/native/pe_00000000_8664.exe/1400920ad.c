/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400920ad */

undefined8 FUN_1400920ad(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(DAT_140f2a910 + 0xb6e + (longlong)param_1) == '\x01') {
    uVar1 = FUN_140091dcf(param_1 + 0x290);
    return uVar1;
  }
  return 0;
}

