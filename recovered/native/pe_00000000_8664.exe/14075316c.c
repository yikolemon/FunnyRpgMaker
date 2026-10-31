/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075316c */

void FUN_14075316c(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
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
  uVar3 = FUN_140752ed4();
  piVar7 = (int *)(ulonglong)((int)&uStack_40 + 0xc);
  if ((uVar3 == uVar1 + iVar8 * 8) || (*(int *)(ulonglong)uVar3 != piVar7[6])) {
    uVar3 = uVar3 - uVar1;
    iVar4 = (int)uVar3 >> 3;
    if (iVar8 == piVar9[1]) {
      *piVar7 = iVar4;
      if (iVar8 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar8 / 2 + iVar8;
      }
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      *(ulonglong *)(piVar7 + -2) = (ulonglong)(uint)(iVar2 * 8);
      piVar7[-4] = 0x407531e2;
      piVar7[-3] = 1;
      uVar5 = FUN_1407520ca();
      piVar7 = (int *)(ulonglong)((int)(piVar7 + -2) + 4);
      uVar6 = (ulonglong)uVar5;
      uVar1 = piVar9[2];
      if (uVar1 != 0) {
        *(ulonglong *)(piVar7 + -2) = (ulonglong)(uint)(*piVar9 << 3);
        *(ulonglong *)(piVar7 + -4) = (ulonglong)uVar1;
        *(ulonglong *)(piVar7 + -6) = uVar6;
        piVar7[-8] = 0x407531fb;
        piVar7[-7] = 1;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(piVar7 + -6) + 0xc) - 8) = *(undefined8 *)(piVar9 + 2);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(piVar7 + -6) + 0xc) - 0x10) = &UNK_140753206;
        FUN_14075219b();
      }
      piVar9[2] = uVar5;
      piVar9[1] = iVar2;
      iVar8 = *piVar9;
      iVar4 = *piVar7;
    }
    if (iVar8 - iVar4 != 0 && iVar4 <= iVar8) {
      *(ulonglong *)((longlong)piVar7 + -8) = (ulonglong)(uint)((iVar8 - iVar4) * 8);
      *(ulonglong *)((longlong)piVar7 + -0x10) = (ulonglong)((int)uVar6 + uVar3);
      *(ulonglong *)((longlong)piVar7 + -0x18) = (ulonglong)((int)uVar6 + uVar3 + 8);
      *(undefined8 *)((longlong)piVar7 + -0x20) = 0x14075322b;
      FUN_1408b31a0();
      piVar7 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar7 + -0x18) + 0xc);
      uVar6 = (ulonglong)(uint)piVar9[2];
    }
    *(undefined4 *)(uVar6 + 4 + (ulonglong)uVar3) = *(undefined4 *)((longlong)piVar7 + 0x1c);
    *(undefined4 *)(uVar6 + uVar3) = *(undefined4 *)((longlong)piVar7 + 0x18);
    *piVar9 = *piVar9 + 1;
  }
  else {
    ((int *)(ulonglong)uVar3)[1] = piVar7[7];
  }
  return;
}

