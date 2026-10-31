/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093452 */

void FUN_140093452(int param_1,float param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  lVar3 = DAT_140f2a910;
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608);
  iVar4 = *(int *)(lVar2 + 0x248);
  if (iVar4 == *(int *)(lVar2 + 0x24c)) {
    if (iVar4 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar4 / 2 + iVar4;
    }
    iVar7 = iVar4 + 1;
    if (iVar4 + 1 < iVar6) {
      iVar7 = iVar6;
    }
    lVar5 = FUN_140077ab4((longlong)iVar7 << 2);
    if (*(longlong *)(lVar2 + 0x250) != 0) {
      FUN_1401c5180(lVar5,*(longlong *)(lVar2 + 0x250),(longlong)*(int *)(lVar2 + 0x248) << 2);
      FUN_140077b90(*(undefined8 *)(lVar2 + 0x250));
    }
    *(longlong *)(lVar2 + 0x250) = lVar5;
    *(int *)(lVar2 + 0x24c) = iVar7;
    iVar4 = *(int *)(lVar2 + 0x248);
  }
  else {
    lVar5 = *(longlong *)(lVar2 + 0x250);
  }
  *(undefined4 *)(lVar5 + (longlong)iVar4 * 4) = *(undefined4 *)(lVar2 + 0x23c);
  *(int *)(lVar2 + 0x248) = *(int *)(lVar2 + 0x248) + 1;
  uVar10 = DAT_1401c86c8;
  param_2 = param_2 - (float)(param_1 + -1) * *(float *)(lVar3 + 0xe0c);
  fVar11 = param_2;
  if (1 < param_1) {
    fVar12 = (float)param_1;
    fVar8 = param_2;
    do {
      param_1 = param_1 + -1;
      fVar11 = (float)(int)(((float)param_1 * param_2) / fVar12);
      uVar9 = FUN_14007b71f(fVar8 - fVar11,uVar10);
      iVar4 = *(int *)(lVar2 + 0x248);
      if (iVar4 == *(int *)(lVar2 + 0x24c)) {
        if (iVar4 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar4 / 2 + iVar4;
        }
        iVar7 = iVar4 + 1;
        if (iVar4 + 1 < iVar6) {
          iVar7 = iVar6;
        }
        lVar5 = FUN_140077ab4((longlong)iVar7 << 2);
        if (*(longlong *)(lVar2 + 0x250) != 0) {
          FUN_1401c5180(lVar5,*(longlong *)(lVar2 + 0x250),(longlong)*(int *)(lVar2 + 0x248) << 2);
          FUN_140077b90(*(undefined8 *)(lVar2 + 0x250));
        }
        *(longlong *)(lVar2 + 0x250) = lVar5;
        *(int *)(lVar2 + 0x24c) = iVar7;
        iVar4 = *(int *)(lVar2 + 0x248);
      }
      else {
        lVar5 = *(longlong *)(lVar2 + 0x250);
      }
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 4) = uVar9;
      *(int *)(lVar2 + 0x248) = *(int *)(lVar2 + 0x248) + 1;
      fVar8 = fVar11;
    } while (1 < param_1);
  }
  uVar10 = FUN_14007b71f(fVar11,DAT_1401c86c8);
  *(undefined4 *)(lVar2 + 0x23c) = uVar10;
  pbVar1 = (byte *)(lVar3 + 0x1fa8);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

