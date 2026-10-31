/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bcf64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bcf64(void)

{
  float *pfVar1;
  undefined2 uVar2;
  uint uVar3;
  short unaff_BP;
  undefined2 uVar4;
  longlong unaff_RSI;
  short sVar5;
  
  *(char *)(ulonglong)_DAT_2308b08b1039d74c =
       *(char *)(ulonglong)_DAT_2308b08b1039d74c + (char)_DAT_2308b08b1039d74c;
  if ((int)unaff_RSI == 0) {
    FUN_140754dc5();
  }
  else {
    uVar3 = *(uint *)(unaff_RSI + 4);
    uVar2 = 0;
    if ((uVar3 >> 0x18 & 1) != 0) {
      uVar2 = FUN_140752553();
      uVar3 = *(uint *)(unaff_RSI + 4);
    }
    *(undefined2 *)(unaff_RSI + 0x1e0) = uVar2;
    pfVar1 = (float *)((ulonglong)*(uint *)(unaff_RSI + 0x158) + 0xc4);
    uVar4 = 0;
    if (*pfVar1 != 0.0) {
      uVar4 = uVar2;
    }
    if (NAN(*pfVar1)) {
      uVar4 = uVar2;
    }
    *(undefined2 *)(unaff_RSI + 0x1e2) = uVar4;
    if ((uVar3 >> 0x19 & 1) == 0) {
      unaff_BP = 0;
    }
    *(short *)(unaff_RSI + 0x1dc) = unaff_BP;
    pfVar1 = (float *)((ulonglong)*(uint *)(unaff_RSI + 0x158) + 200);
    sVar5 = 0;
    if (*pfVar1 != 0.0) {
      sVar5 = unaff_BP;
    }
    if (NAN(*pfVar1)) {
      sVar5 = unaff_BP;
    }
    *(short *)(unaff_RSI + 0x1de) = sVar5;
    *(bool *)(unaff_RSI + 0x1f9) = sVar5 == 0;
  }
  return;
}

