/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076252a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14076252a(void)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  int unaff_ESI;
  int unaff_retaddr;
  
  pcVar3 = (char *)(ulonglong)_DAT_1484b08b1039d74c;
  *pcVar3 = *pcVar3 + (char)_DAT_1484b08b1039d74c;
  uVar1 = *(uint *)(pcVar3 + 0x148c);
  piVar4 = (int *)(ulonglong)uVar1;
  if (0 < unaff_ESI) {
    piVar4 = (int *)(ulonglong)uVar1;
    do {
      if (*piVar4 == unaff_retaddr) break;
      uVar2 = (int)piVar4 + 4;
      piVar4 = (int *)(ulonglong)uVar2;
    } while (uVar2 < uVar1 + unaff_ESI * 4);
  }
  return (int)((int)piVar4 - uVar1) >> 2;
}

