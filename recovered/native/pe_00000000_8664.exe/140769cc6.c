/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769cc6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769cc6(void)

{
  uint *puVar1;
  ulonglong uVar2;
  uint unaff_retaddr;
  
  uVar2 = (ulonglong)_DAT_150b0741c;
  puVar1 = (uint *)(uVar2 + 0x1ed0);
  *puVar1 = *puVar1 | 4;
  *(ulonglong *)(uVar2 + 0x1efc) =
       CONCAT44((float)(int)(float)((ulonglong)*(undefined8 *)(ulonglong)unaff_retaddr >> 0x20),
                (float)(int)(float)*(undefined8 *)(ulonglong)unaff_retaddr);
  return;
}

