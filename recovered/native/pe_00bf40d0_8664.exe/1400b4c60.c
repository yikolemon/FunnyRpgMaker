/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b4c60 */

void FUN_1400b4c60(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_14009d690();
  *(undefined4 *)((longlong)pvVar1 + 0x78) = 0xfffffffe;
  return;
}

