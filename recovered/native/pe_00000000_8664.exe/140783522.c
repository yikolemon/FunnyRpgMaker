/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140783522 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140783522(int *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong unaff_RSI;
  
  uVar1 = _DAT_221cb08b1039d74c;
  pcVar3 = (char *)(ulonglong)_DAT_221cb08b1039d74c;
  *pcVar3 = *pcVar3 + (char)_DAT_221cb08b1039d74c;
  if ((int)unaff_RSI == 0) {
    uVar1 = *(uint *)(pcVar3 + 0x2048);
    if ((uVar1 != 0) && (*(int *)(param_2 + 0x98) == *param_1)) {
      while (uVar4 = (ulonglong)*(uint *)((ulonglong)uVar1 + 0x3a8),
            (*(byte *)(uVar4 + 0xf) & 0x10) != 0) {
        uVar1 = *(uint *)(uVar4 + 0x3a0);
      }
      uVar2 = (ulonglong)*(uint *)(uVar4 + 0x434);
      if (*(uint *)(uVar4 + 0x434) != 0) goto LAB_140783581;
      for (; uVar2 = (ulonglong)*(uint *)(uVar4 + 0x430), *(uint *)(uVar4 + 0x430) != 0;
          uVar4 = (ulonglong)*(uint *)((ulonglong)*(uint *)(uVar4 + 0x78) + 0x3a8)) {
LAB_140783581:
        do {
          uVar4 = uVar2;
          uVar2 = (ulonglong)*(uint *)(uVar4 + 0x18);
        } while (*(uint *)(uVar4 + 0x18) != 0);
        if ((int)uVar4 == (int)param_2) {
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
        if (*(uint *)(uVar4 + 0x78) == 0) break;
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),*(int *)(unaff_RSI + 0x430) == (int)param_1);
  }
  return uVar4;
}

