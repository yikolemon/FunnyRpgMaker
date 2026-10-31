/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407692bf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407692bf(ulonglong param_1)

{
  short sVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(ulonglong)_DAT_1f98888b1039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_1f98888b1039d74c;
  sVar1 = *(short *)((ulonglong)*(uint *)(pcVar2 + 0x27ac) + 0xc);
  if ((int)sVar1 < (int)param_1) {
    *(ulonglong *)(pcVar2 + 0x1f98) = param_1 & 0xffffffff;
    if ((int)param_1 == (int)sVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(((ulonglong)*(uint *)(pcVar2 + 0x1fa0) - 0x10) + param_1 * 8);
    }
    *(undefined4 *)(pcVar2 + 0x1e3c) = uVar3;
    return;
  }
  FUN_140754dc5();
  return;
}

