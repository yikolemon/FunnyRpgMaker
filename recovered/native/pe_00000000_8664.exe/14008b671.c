/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008b671 */

void FUN_14008b671(longlong param_1,char param_2,uint param_3)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar2 = DAT_140f2a910;
  bVar8 = (param_3 & 0x14000000) != 0x4000000 & (byte)(param_3 >> 0x18);
  if ((bVar8 == 0) && (*(byte *)(param_1 + 0x113) != bVar8 || param_2 != '\0')) {
    iVar3 = *(int *)(DAT_140f2a910 + 0x15b8);
    if (iVar3 == *(int *)(DAT_140f2a910 + 0x15bc)) {
      if (iVar3 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar3 / 2 + iVar3;
      }
      iVar9 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar9 = iVar6;
      }
      lVar4 = FUN_140077ab4((longlong)iVar9 << 3);
      if (*(longlong *)(lVar2 + 0x15c0) != 0) {
        FUN_1401c5180(lVar4,*(longlong *)(lVar2 + 0x15c0),(longlong)*(int *)(lVar2 + 0x15b8) << 3);
        FUN_140077b90(*(undefined8 *)(lVar2 + 0x15c0));
      }
      *(longlong *)(lVar2 + 0x15c0) = lVar4;
      *(int *)(lVar2 + 0x15bc) = iVar9;
      iVar3 = *(int *)(lVar2 + 0x15b8);
    }
    else {
      lVar4 = *(longlong *)(DAT_140f2a910 + 0x15c0);
    }
    *(longlong *)(lVar4 + (longlong)iVar3 * 8) = param_1;
    iVar3 = *(int *)(lVar2 + 0x15b8);
    *(int *)(lVar2 + 0x15b8) = iVar3 + 1;
    *(short *)(param_1 + 0x120) = (short)iVar3;
  }
  else if ((bVar8 != 0) && ((*(byte *)(param_1 + 0x113) != bVar8 && (param_2 == '\0')))) {
    sVar5 = *(short *)(param_1 + 0x120);
    lVar4 = (longlong)*(int *)(DAT_140f2a910 + 0x15b8);
    if (sVar5 + 1 < *(int *)(DAT_140f2a910 + 0x15b8)) {
      lVar7 = (longlong)(int)sVar5 + 1;
      do {
        psVar1 = (short *)(*(longlong *)(*(longlong *)(lVar2 + 0x15c0) + lVar7 * 8) + 0x120);
        *psVar1 = *psVar1 + -1;
        lVar7 = lVar7 + 1;
        lVar4 = (longlong)*(int *)(lVar2 + 0x15b8);
      } while (lVar7 < lVar4);
      sVar5 = *(short *)(param_1 + 0x120);
    }
    uVar10 = (ulonglong)sVar5;
    FUN_1401c5180(*(longlong *)(lVar2 + 0x15c0) + uVar10 * 8,
                  *(longlong *)(lVar2 + 0x15c0) + uVar10 * 8 + 8,(~uVar10 + lVar4) * 8);
    *(int *)(lVar2 + 0x15b8) = *(int *)(lVar2 + 0x15b8) + -1;
    *(undefined2 *)(param_1 + 0x120) = 0xffff;
  }
  *(byte *)(param_1 + 0x113) = bVar8;
  return;
}

