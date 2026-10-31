/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010b10c */

undefined4 FUN_1010b10c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_1039d74c + 0xec + param_1) == '\x01') {
    uVar1 = FUN_10113c9d(param_1 + 0x290,0);
    return uVar1;
  }
  return 0;
}

