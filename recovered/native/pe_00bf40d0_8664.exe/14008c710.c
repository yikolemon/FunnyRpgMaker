/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008c710 */

void FUN_14008c710(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140009dc3();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_14001b6c1();
  *puVar1 = *puVar1 | 2;
  return;
}

