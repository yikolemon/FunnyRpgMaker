/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b039c */

uint FUN_1400b039c(void)

{
  undefined8 uVar1;
  
  uVar1 = __acrt_initialize_multibyte();
  return (uint)uVar1 & 0xff ^ 1;
}

