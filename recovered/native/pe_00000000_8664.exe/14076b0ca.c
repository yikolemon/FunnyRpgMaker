/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b0ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076b0ca(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong unaff_RSI;
  ulonglong auStack_38 [2];
  undefined8 uStack_28;
  
  *(char *)(ulonglong)_DAT_14ccb08b1039d74c =
       *(char *)(ulonglong)_DAT_14ccb08b1039d74c + (char)_DAT_14ccb08b1039d74c;
  uStack_28 = 0;
  auStack_38[0] = 0x14076b0e6;
  uVar2 = FUN_14075a0a4(unaff_RSI & 0xffffffff);
  uVar1 = *(uint *)(unaff_RSI + 0x138);
  if (uVar1 == *(uint *)(unaff_RSI + 0x13c)) {
    if (uVar1 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = (int)uVar1 / 2 + uVar1;
    }
    iVar8 = uVar1 + 1;
    if ((int)(uVar1 + 1) < iVar4) {
      iVar8 = iVar4;
    }
    auStack_38[0] = (ulonglong)(uint)(iVar8 * 4);
    uVar3 = FUN_1407520ca();
    uVar6 = (ulonglong)((int)auStack_38 + 4);
    uVar5 = (ulonglong)uVar3;
    uVar1 = *(uint *)(unaff_RSI + 0x140);
    if (uVar1 != 0) {
      *(ulonglong *)(uVar6 - 8) = (ulonglong)(uint)(*(int *)(unaff_RSI + 0x138) << 2);
      *(ulonglong *)(uVar6 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar6 - 0x18) = uVar5;
      *(undefined8 *)(uVar6 - 0x20) = 0x14076b149;
      FUN_1408b31a0();
      uVar7 = (ulonglong)((int)(uVar6 - 0x18) + 0xc);
      *(undefined8 *)(uVar7 - 8) = *(undefined8 *)(unaff_RSI + 0x140);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar7 - 0x10) = &UNK_14076b157;
      FUN_14075219b();
    }
    *(uint *)(unaff_RSI + 0x140) = uVar3;
    *(int *)(unaff_RSI + 0x13c) = iVar8;
    uVar1 = *(uint *)(unaff_RSI + 0x138);
  }
  else {
    uVar5 = (ulonglong)*(uint *)(unaff_RSI + 0x140);
  }
  *(undefined4 *)(uVar5 + (ulonglong)uVar1 * 4) = uVar2;
  *(int *)(unaff_RSI + 0x138) = *(int *)(unaff_RSI + 0x138) + 1;
  return;
}

