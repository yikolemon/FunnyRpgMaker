/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018efb0 */

void FUN_14018efb0(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140011866();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_1400ab82c();
  *puVar1 = *puVar1 | 2;
  return;
}

