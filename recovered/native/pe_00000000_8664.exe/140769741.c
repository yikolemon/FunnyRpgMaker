/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769741 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769741(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte unaff_BL;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uStack_20;
  
  uVar8 = (ulonglong)_DAT_150b06e9a;
  uVar2 = *(uint *)(uVar8 + 0x1e40);
  if ((unaff_BL != 0) && ((uVar2 & 0x40) == 0)) {
    *(float *)(uVar8 + 0x25e4) = *(float *)(uVar8 + 0xccc);
    *(float *)(uVar8 + 0xccc) = *(float *)(uVar8 + 0xccc) * *(float *)(uVar8 + 0xcd0);
  }
  if ((~unaff_BL & (uVar2 & 0x40) == 0) == 0) {
    uVar2 = uVar2 | 0x40;
    *(uint *)(uVar8 + 0x1e40) = uVar2;
  }
  uVar4 = *(uint *)(uVar8 + 0x1fa4);
  if (uVar4 == *(uint *)(uVar8 + 0x1fa8)) {
    if (uVar4 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = (int)uVar4 / 2 + uVar4;
    }
    iVar1 = uVar4 + 1;
    if ((int)(uVar4 + 1) < iVar3) {
      iVar1 = iVar3;
    }
    uStack_20 = (ulonglong)(uint)(iVar1 * 4);
    uVar4 = FUN_1407520ca();
    uVar5 = (ulonglong)((int)&uStack_20 + 4);
    uVar7 = (ulonglong)uVar4;
    uVar2 = *(uint *)(uVar8 + 0x1fac);
    if (uVar2 != 0) {
      *(ulonglong *)(uVar5 - 8) = (ulonglong)(uint)(*(int *)(uVar8 + 0x1fa4) << 2);
      *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar2;
      *(ulonglong *)(uVar5 - 0x18) = uVar7;
      *(undefined8 *)(uVar5 - 0x20) = 0x1407697f4;
      FUN_1408b31a0();
      uVar6 = (ulonglong)((int)(uVar5 - 0x18) + 0xc);
      *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(uVar8 + 0x1fac);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar6 - 0x10) = &UNK_140769802;
      FUN_14075219b();
    }
    *(uint *)(uVar8 + 0x1fac) = uVar4;
    *(int *)(uVar8 + 0x1fa8) = iVar1;
    uVar2 = *(uint *)(uVar8 + 0x1e40);
    uVar4 = *(uint *)(uVar8 + 0x1fa4);
  }
  else {
    uVar7 = (ulonglong)*(uint *)(uVar8 + 0x1fac);
  }
  *(uint *)(uVar7 + (ulonglong)uVar4 * 4) = uVar2;
  *(int *)(uVar8 + 0x1fa4) = *(int *)(uVar8 + 0x1fa4) + 1;
  *(short *)(uVar8 + 0x25e8) = *(short *)(uVar8 + 0x25e8) + 1;
  return;
}

