/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b228 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076b228(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 unaff_EBP;
  int iVar8;
  ulonglong unaff_RSI;
  ulonglong uStack_30;
  undefined8 uStack_28;
  undefined4 local_c;
  
  local_c = (undefined4)((ulonglong)unaff_RBX >> 0x20);
  *(char *)(ulonglong)_DAT_14ccb08b1039d74c =
       *(char *)(ulonglong)_DAT_14ccb08b1039d74c + (char)_DAT_14ccb08b1039d74c;
  uStack_28 = CONCAT44(unaff_EBP,local_c);
  uStack_30 = 0x14076b242;
  uVar2 = FUN_14076aff2(unaff_RSI & 0xffffffff);
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
    uStack_30 = (ulonglong)(uint)(iVar8 * 4);
    uVar3 = FUN_1407520ca();
    uVar6 = (ulonglong)((int)&uStack_30 + 4);
    uVar5 = (ulonglong)uVar3;
    uVar1 = *(uint *)(unaff_RSI + 0x140);
    if (uVar1 != 0) {
      *(ulonglong *)(uVar6 - 8) = (ulonglong)(uint)(*(int *)(unaff_RSI + 0x138) << 2);
      *(ulonglong *)(uVar6 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar6 - 0x18) = uVar5;
      *(undefined8 *)(uVar6 - 0x20) = 0x14076b2a5;
      FUN_1408b31a0();
      uVar7 = (ulonglong)((int)(uVar6 - 0x18) + 0xc);
      *(undefined8 *)(uVar7 - 8) = *(undefined8 *)(unaff_RSI + 0x140);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar7 - 0x10) = &UNK_14076b2b3;
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

