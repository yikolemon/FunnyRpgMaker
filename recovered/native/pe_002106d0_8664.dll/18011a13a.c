/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011a13a */

void FUN_18011a13a(int param_1,float param_2)

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
  
  lVar3 = DAT_180419160;
  lVar2 = *(longlong *)(DAT_180419160 + 0x1608);
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
    lVar5 = FUN_1800fe7f8((longlong)iVar7 << 2);
    if (*(longlong *)(lVar2 + 0x250) != 0) {
      FUN_1802a82f0(lVar5,*(longlong *)(lVar2 + 0x250),(longlong)*(int *)(lVar2 + 0x248) << 2);
      FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x250));
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
  uVar10 = DAT_1802ac570;
  param_2 = param_2 - (float)(param_1 + -1) * *(float *)(lVar3 + 0xe0c);
  fVar11 = param_2;
  if (1 < param_1) {
    fVar12 = (float)param_1;
    fVar8 = param_2;
    do {
      param_1 = param_1 + -1;
      fVar11 = (float)(int)(((float)param_1 * param_2) / fVar12);
      uVar9 = FUN_180102463(fVar8 - fVar11,uVar10);
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
        lVar5 = FUN_1800fe7f8((longlong)iVar7 << 2);
        if (*(longlong *)(lVar2 + 0x250) != 0) {
          FUN_1802a82f0(lVar5,*(longlong *)(lVar2 + 0x250),(longlong)*(int *)(lVar2 + 0x248) << 2);
          FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x250));
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
  uVar10 = FUN_180102463(fVar11,DAT_1802ac570);
  *(undefined4 *)(lVar2 + 0x23c) = uVar10;
  pbVar1 = (byte *)(lVar3 + 0x1fa8);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

