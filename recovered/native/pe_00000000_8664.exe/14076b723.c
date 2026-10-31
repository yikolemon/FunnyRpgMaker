/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b723 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_14076b723(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong unaff_R14;
  
  piVar9 = (int *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar8 = (ulonglong)_DAT_150b08e80;
  uVar11 = piVar9[7] & 0xf000;
  uVar3 = piVar9[7] & 0xffff0fff;
  if ((uVar3 == 0) && (uVar3 = uVar11, uVar11 - 1 < (uVar11 ^ uVar11 - 1))) {
    uVar7 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    uVar3 = uVar7 + 0x28b;
    if ((uVar7 & 0x1c) != 0xc) {
      uVar3 = uVar11;
    }
  }
  uVar3 = _DAT_150b08e80 + uVar3 * 2 + 0x18e0;
  psVar5 = (short *)(ulonglong)uVar3;
  while (*psVar5 != -1) {
    uVar7 = *psVar5 * 0x10;
    psVar5 = (short *)(ulonglong)(*(uint *)(uVar8 + 0x1e20) + uVar7);
    if (uVar11 == *(ushort *)((ulonglong)*(uint *)(uVar8 + 0x1e20) + 2 + (ulonglong)uVar7)) {
      return psVar5;
    }
  }
  iVar1 = *(int *)(uVar8 + 0x1e18);
  iVar4 = *(int *)(uVar8 + 0x1e1c);
  piVar9[1] = uVar3;
  if (iVar1 == iVar4) {
    if (iVar1 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar1 / 2 + iVar1;
    }
    iVar2 = iVar1 + 1;
    if (iVar1 + 1 < iVar4) {
      iVar2 = iVar4;
    }
    *piVar9 = iVar2;
    *(ulonglong *)(piVar9 + -2) = (ulonglong)(uint)(iVar2 << 4);
    piVar9[-4] = 0x4076b7d8;
    piVar9[-3] = 1;
    uVar7 = FUN_1407520ca();
    piVar9 = (int *)(ulonglong)((int)(piVar9 + -2) + 4);
    uVar10 = (ulonglong)uVar7;
    uVar3 = *(uint *)(uVar8 + 0x1e20);
    if (uVar3 != 0) {
      *(ulonglong *)(piVar9 + -2) = (ulonglong)(uint)(*(int *)(uVar8 + 0x1e18) << 4);
      *(ulonglong *)(piVar9 + -4) = (ulonglong)uVar3;
      *(ulonglong *)(piVar9 + -6) = uVar10;
      *(undefined8 *)(piVar9 + -8) = 0x14076b7f8;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(piVar9 + -6) + 0xc) - 8) = *(undefined8 *)(uVar8 + 0x1e20);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(piVar9 + -6) + 0xc) - 0x10) = &UNK_14076b806;
      FUN_14075219b();
    }
    *(uint *)(uVar8 + 0x1e20) = uVar7;
    *(int *)(uVar8 + 0x1e1c) = *piVar9;
    iVar4 = *(int *)(uVar8 + 0x1e18);
  }
  else {
    uVar10 = (ulonglong)*(uint *)(uVar8 + 0x1e20);
    iVar4 = iVar1;
  }
  uVar6 = (ulonglong)(uint)(iVar4 << 4);
  *(undefined8 *)(uVar10 + uVar6) = _DAT_150a245c9;
  *(undefined8 *)(unaff_R14 + 8 + uVar6) = 0;
  *(undefined4 *)(uVar10 + 0xc + uVar6) = 0;
  *(int *)(uVar8 + 0x1e18) = *(int *)(uVar8 + 0x1e18) + 1;
  uVar3 = *(uint *)(uVar8 + 0x1e20);
  uVar7 = (short)iVar1 * 0x10;
  *(short *)((ulonglong)uVar3 + 2 + (ulonglong)uVar7) = (short)uVar11;
  uVar11 = *(uint *)((longlong)piVar9 + 4);
  *(short *)((ulonglong)uVar3 + (ulonglong)uVar7) = *(short *)(ulonglong)uVar11;
  *(short *)(ulonglong)uVar11 = (short)iVar1;
  return (short *)(ulonglong)(uVar3 + uVar7);
}

