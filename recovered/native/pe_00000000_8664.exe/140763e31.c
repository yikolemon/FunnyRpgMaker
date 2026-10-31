/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140763e31 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_140763e31(void)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = FUN_140763df2();
  if (cVar1 != '\0') {
    pcVar2 = (char *)(ulonglong)_DAT_155c808a1039d74c;
    *pcVar2 = *pcVar2 + (char)_DAT_155c808a1039d74c;
    return pcVar2;
  }
  return (char *)0x0;
}

