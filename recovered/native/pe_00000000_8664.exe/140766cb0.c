/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140766cb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140766cb0(void)

{
  char cVar1;
  char *pcVar2;
  undefined1 unaff_BL;
  longlong unaff_RBP;
  uint unaff_retaddr;
  
  pcVar2 = (char *)(ulonglong)_DAT_8689bf0f1039d74c;
  cVar1 = (char)_DAT_8689bf0f1039d74c;
  *pcVar2 = *pcVar2 + cVar1;
  *(char *)(unaff_RBP + 0x391778c9) = *(char *)(unaff_RBP + 0x391778c9) + cVar1;
  (&stack0x0f7e0000)[unaff_retaddr] = unaff_BL;
  return unaff_retaddr * 0x28 + *(int *)(pcVar2 + 0xca4);
}

