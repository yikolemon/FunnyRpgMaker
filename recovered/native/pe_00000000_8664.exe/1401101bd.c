/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401101bd */

void FUN_1401101bd(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  bVar1 = *(byte *)(param_1 + 0x23c);
  if (bVar1 == 1) {
    FUN_140112ffe(param_1);
    iVar11 = *(int *)(param_1 + 0x1e4);
    sVar5 = (short)*(undefined4 *)(param_1 + 0x200);
    sVar6 = 0;
    if (1 < sVar5) {
      sVar6 = sVar5;
    }
    iVar9 = (int)sVar6;
    if (iVar11 < iVar9) {
      if (iVar11 == 0) {
        iVar11 = 8;
      }
      else {
        iVar11 = iVar11 / 2 + iVar11;
      }
      if (iVar11 <= iVar9) {
        iVar11 = iVar9;
      }
      uVar3 = FUN_140077ab4((longlong)iVar11 * 0xc);
      if (*(longlong *)(param_1 + 0x1e8) != 0) {
        FUN_1401c5180(uVar3,*(longlong *)(param_1 + 0x1e8),(longlong)*(int *)(param_1 + 0x1e0) * 0xc
                     );
        FUN_140077b90(*(undefined8 *)(param_1 + 0x1e8));
      }
      *(undefined8 *)(param_1 + 0x1e8) = uVar3;
      *(int *)(param_1 + 0x1e4) = iVar11;
    }
    *(int *)(param_1 + 0x1e0) = iVar9;
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    *(undefined1 *)(param_1 + 0x23c) = 0;
  }
  sVar6 = *(short *)(param_1 + 0x200);
  if (sVar6 == 0) {
    lVar4 = 0;
  }
  else {
    if (sVar6 == 1) {
      lVar4 = param_1 + 0x1d0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x1e8);
    }
    if ((bVar1 & lVar4 != 0) == 1) {
      iVar11 = *(int *)(param_1 + 0x6c);
      if (0 < iVar11) {
        lVar7 = 0x71;
        lVar8 = 0;
        do {
          lVar2 = *(longlong *)(param_1 + 0x18);
          lVar10 = (longlong)*(short *)(lVar2 + -0x13 + lVar7);
          if (lVar10 != -1) {
            *(undefined4 *)(lVar4 + lVar10 * 0xc) = *(undefined4 *)(lVar2 + -0x3d + lVar7);
            *(short *)(lVar4 + 4 + lVar10 * 0xc) = (short)lVar8;
            *(undefined2 *)(lVar4 + 6 + lVar10 * 0xc) = *(undefined2 *)(lVar2 + -0x13 + lVar7);
            *(byte *)(lVar4 + 8 + lVar10 * 0xc) = *(byte *)(lVar2 + lVar7) & 3;
            iVar11 = *(int *)(param_1 + 0x6c);
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x74;
        } while (lVar8 < iVar11);
        sVar6 = *(short *)(param_1 + 0x200);
      }
    }
  }
  *(longlong *)(param_1 + 0x1f0) = lVar4;
  *(int *)(param_1 + 0x1f8) = (int)sVar6;
  return;
}

