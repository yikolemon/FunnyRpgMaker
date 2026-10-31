/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075324c */

void FUN_14075324c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  piVar9 = (int *)((ulonglong)param_1 & 0xffffffff);
  iVar8 = *param_1;
  uVar1 = param_1[2];
  uVar6 = (ulonglong)uVar1;
  uStack_38 = (ulonglong)(uVar1 + iVar8 * 8);
  uStack_40 = uVar6;
  uVar2 = FUN_140752ed4();
  piVar7 = (int *)(ulonglong)((int)&uStack_40 + 0xc);
  iVar3 = piVar7[6];
  if ((uVar2 == uVar1 + iVar8 * 8) || (*(int *)(ulonglong)uVar2 != iVar3)) {
    uVar2 = uVar2 - uVar1;
    iVar5 = (int)uVar2 >> 3;
    if (iVar8 == piVar9[1]) {
      *piVar7 = iVar5;
      if (iVar8 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar8 / 2 + iVar8;
      }
      iVar5 = iVar8 + 1;
      if (iVar8 + 1 < iVar3) {
        iVar5 = iVar3;
      }
      *(ulonglong *)(piVar7 + -2) = (ulonglong)(uint)(iVar5 * 8);
      piVar7[-4] = 0x407532c2;
      piVar7[-3] = 1;
      uVar4 = FUN_1407520ca();
      piVar7 = (int *)(ulonglong)((int)(piVar7 + -2) + 4);
      uVar6 = (ulonglong)uVar4;
      uVar1 = piVar9[2];
      if (uVar1 != 0) {
        *(ulonglong *)(piVar7 + -2) = (ulonglong)(uint)(*piVar9 << 3);
        *(ulonglong *)(piVar7 + -4) = (ulonglong)uVar1;
        *(ulonglong *)(piVar7 + -6) = uVar6;
        piVar7[-8] = 0x407532db;
        piVar7[-7] = 1;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(piVar7 + -6) + 0xc) - 8) = *(undefined8 *)(piVar9 + 2);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(piVar7 + -6) + 0xc) - 0x10) = &UNK_1407532e6;
        FUN_14075219b();
      }
      piVar9[2] = uVar4;
      piVar9[1] = iVar5;
      iVar8 = *piVar9;
      iVar3 = piVar7[6];
      iVar5 = *piVar7;
    }
    if (iVar8 - iVar5 != 0 && iVar5 <= iVar8) {
      *(ulonglong *)((longlong)piVar7 + -8) = (ulonglong)(uint)((iVar8 - iVar5) * 8);
      *(ulonglong *)((longlong)piVar7 + -0x10) = (ulonglong)((int)uVar6 + uVar2);
      *(ulonglong *)((longlong)piVar7 + -0x18) = (ulonglong)((int)uVar6 + uVar2 + 8);
      *(undefined8 *)((longlong)piVar7 + -0x20) = 0x14075330f;
      FUN_1408b31a0();
      iVar3 = *(int *)((longlong)piVar7 + 0xc);
      piVar7 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar7 + -0x18) + 0xc);
      uVar6 = (ulonglong)(uint)piVar9[2];
    }
    *(int *)(uVar6 + uVar2) = iVar3;
    *(undefined4 *)(uVar6 + 4 + (ulonglong)uVar2) = *(undefined4 *)((longlong)piVar7 + 0x1c);
    *piVar9 = *piVar9 + 1;
  }
  else {
    ((int *)(ulonglong)uVar2)[1] = piVar7[7];
  }
  return;
}

