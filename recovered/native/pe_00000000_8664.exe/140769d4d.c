/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769d4d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769d4d(void)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined4 unaff_retaddr;
  
  uVar2 = (ulonglong)_DAT_150b074a3;
  puVar1 = (uint *)(uVar2 + 0x1ed0);
  *puVar1 = *puVar1 | 0x800;
  *(undefined4 *)(uVar2 + 0x1f34) = unaff_retaddr;
  return;
}

