/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076d0da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076d0da(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  ulonglong uStack_28;
  
  fVar11 = (float)((ulonglong)unaff_RBX >> 0x20);
  uVar10 = (ulonglong)_DAT_150b0a836;
  uVar5 = (ulonglong)*(uint *)(uVar10 + 0x14cc);
  uVar2 = *(uint *)(uVar5 + 0x224);
  if (uVar2 == *(uint *)(uVar5 + 0x228)) {
    if (uVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = (int)uVar2 / 2 + uVar2;
    }
    iVar8 = uVar2 + 1;
    if ((int)(uVar2 + 1) < iVar4) {
      iVar8 = iVar4;
    }
    uStack_28 = (ulonglong)(uint)(iVar8 * 4);
    uVar3 = FUN_1407520ca();
    uVar6 = (ulonglong)((int)&uStack_28 + 4);
    uVar9 = (ulonglong)uVar3;
    uVar2 = *(uint *)(uVar5 + 0x22c);
    if (uVar2 != 0) {
      *(ulonglong *)(uVar6 - 8) = (ulonglong)(uint)(*(int *)(uVar5 + 0x224) << 2);
      *(ulonglong *)(uVar6 - 0x10) = (ulonglong)uVar2;
      *(ulonglong *)(uVar6 - 0x18) = uVar9;
      *(undefined8 *)(uVar6 - 0x20) = 0x14076d151;
      FUN_1408b31a0();
      uVar7 = (ulonglong)((int)(uVar6 - 0x18) + 0xc);
      *(undefined8 *)(uVar7 - 8) = *(undefined8 *)(uVar5 + 0x22c);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar7 - 0x10) = &UNK_14076d15f;
      FUN_14075219b();
    }
    *(uint *)(uVar5 + 0x22c) = uVar3;
    *(int *)(uVar5 + 0x228) = iVar8;
    uVar2 = *(uint *)(uVar5 + 0x224);
    fVar11 = *(float *)(uVar6 + 0x14);
  }
  else {
    uVar9 = (ulonglong)*(uint *)(uVar5 + 0x22c);
  }
  *(undefined4 *)(uVar9 + (ulonglong)uVar2 * 4) = *(undefined4 *)(uVar5 + 0x218);
  *(int *)(uVar5 + 0x224) = *(int *)(uVar5 + 0x224) + 1;
  if ((fVar11 == 0.0) && (!NAN(fVar11))) {
    fVar11 = *(float *)(uVar5 + 0x21c);
  }
  *(float *)(uVar5 + 0x218) = fVar11;
  pbVar1 = (byte *)(uVar10 + 0x1e48);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

