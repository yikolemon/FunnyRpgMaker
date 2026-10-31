/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140762bd3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_140762bd3(int param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  pcVar1 = (char *)(ulonglong)_DAT_1fe0888b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_1fe0888b1039d74c;
  if (param_1 != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(ulonglong)*(uint *)(*(uint *)(pcVar1 + 0x1fe8) + uVar3) ==
          (int)((ulonglong)unaff_RDI >> 0x20)) {
        return (int *)(ulonglong)*(uint *)(*(uint *)(pcVar1 + 0x1fe8) + uVar3);
      }
      uVar2 = (int)uVar3 + 4;
      uVar3 = (ulonglong)uVar2;
    } while (param_1 << 2 != uVar2);
  }
  return (int *)0x0;
}

