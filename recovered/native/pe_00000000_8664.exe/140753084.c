/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140753084 */

int FUN_140753084(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  piVar10 = (int *)((ulonglong)param_1 & 0xffffffff);
  iVar9 = *param_1;
  uVar1 = param_1[2];
  uVar7 = (ulonglong)uVar1;
  uStack_38 = (ulonglong)(uVar1 + iVar9 * 8);
  uStack_40 = uVar7;
  uVar3 = FUN_140752ed4();
  piVar8 = (int *)(ulonglong)((int)&uStack_40 + 0xc);
  iVar4 = piVar8[6];
  if ((uVar3 == uVar1 + iVar9 * 8) || (*(int *)(ulonglong)uVar3 != iVar4)) {
    uVar3 = uVar3 - uVar1;
    iVar6 = (int)uVar3 >> 3;
    if (iVar9 == piVar10[1]) {
      *piVar8 = iVar6;
      if (iVar9 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar9 / 2 + iVar9;
      }
      iVar6 = iVar9 + 1;
      if (iVar9 + 1 < iVar4) {
        iVar6 = iVar4;
      }
      *(ulonglong *)(piVar8 + -2) = (ulonglong)(uint)(iVar6 * 8);
      piVar8[-4] = 0x407530f2;
      piVar8[-3] = 1;
      uVar5 = FUN_1407520ca();
      piVar8 = (int *)(ulonglong)((int)(piVar8 + -2) + 4);
      uVar7 = (ulonglong)uVar5;
      uVar1 = piVar10[2];
      if (uVar1 != 0) {
        *(ulonglong *)(piVar8 + -2) = (ulonglong)(uint)(*piVar10 << 3);
        *(ulonglong *)(piVar8 + -4) = (ulonglong)uVar1;
        *(ulonglong *)(piVar8 + -6) = uVar7;
        piVar8[-8] = 0x4075310b;
        piVar8[-7] = 1;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(piVar8 + -6) + 0xc) - 8) = *(undefined8 *)(piVar10 + 2);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(piVar8 + -6) + 0xc) - 0x10) = &UNK_140753116;
        FUN_14075219b();
      }
      piVar10[2] = uVar5;
      piVar10[1] = iVar6;
      iVar9 = *piVar10;
      iVar4 = piVar8[6];
      iVar6 = *piVar8;
    }
    uVar2 = *(undefined4 *)((longlong)piVar8 + 0x1c);
    if (iVar9 - iVar6 != 0 && iVar6 <= iVar9) {
      *(ulonglong *)((longlong)piVar8 + -8) = (ulonglong)(uint)((iVar9 - iVar6) * 8);
      *(ulonglong *)((longlong)piVar8 + -0x10) = (ulonglong)((int)uVar7 + uVar3);
      *(ulonglong *)((longlong)piVar8 + -0x18) = (ulonglong)((int)uVar7 + uVar3 + 8);
      *(undefined8 *)((longlong)piVar8 + -0x20) = 0x140753145;
      FUN_1408b31a0();
      iVar4 = *(int *)((longlong)piVar8 + 0xc);
      uVar7 = (ulonglong)(uint)piVar10[2];
    }
    *(int *)(uVar7 + uVar3) = iVar4;
    *(undefined4 *)(uVar7 + 4 + (ulonglong)uVar3) = uVar2;
    *piVar10 = *piVar10 + 1;
    uVar3 = uVar3 + piVar10[2];
  }
  return uVar3 + 4;
}

