/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140106170 */

void FUN_140106170(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140024697();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_140106190();
  *puVar1 = *puVar1 | 2;
  return;
}

