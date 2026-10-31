/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165b04 */

void FUN_10165b04(int param_1,undefined1 param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  byte bVar5;
  uint uVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *(int *)(DAT_1039d74c + 0x2308);
  param_3 = (*(byte *)(iVar2 + 7) & 4) >> 2 & param_3;
  if (param_3 == 1) {
    if (*(int *)(iVar2 + 0x40) < 1) {
      sVar3 = 1;
    }
    else {
      sVar3 = 0;
      iVar6 = 0x5e;
      iVar8 = 0;
      do {
        sVar3 = FUN_10165be7((int)sVar3,(int)*(short *)(*(int *)(iVar2 + 0x10) + iVar6));
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0x74;
      } while (iVar8 < *(int *)(iVar2 + 0x40));
      sVar3 = sVar3 + 1;
    }
  }
  else {
    sVar3 = 0;
  }
  iVar8 = *(int *)(iVar2 + 0x10);
  param_1 = param_1 * 0x74;
  iVar6 = iVar8 + param_1;
  uVar4 = CONCAT11(param_2,*(undefined1 *)(iVar8 + 0x71 + param_1)) & 0xffff03fc;
  bVar5 = (byte)(uVar4 >> 8);
  *(byte *)(iVar8 + 0x71 + param_1) = (byte)uVar4 | bVar5;
  if (bVar5 == 0) {
    sVar3 = -1;
  }
  else if ((param_3 & *(short *)(iVar6 + 0x5e) != -1) != 0) goto LAB_10165b9c;
  *(short *)(iVar6 + 0x5e) = sVar3;
LAB_10165b9c:
  if (0 < *(int *)(iVar2 + 0x40)) {
    iVar7 = 0;
    iVar8 = 0;
    do {
      iVar1 = *(int *)(iVar2 + 0x10) + iVar7;
      if (iVar1 != iVar6 && param_3 == 0) {
        *(undefined2 *)(*(int *)(iVar2 + 0x10) + 0x5e + iVar7) = 0xffff;
      }
      FUN_10165a77(iVar2,iVar1);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x74;
    } while (iVar8 < *(int *)(iVar2 + 0x40));
  }
  *(undefined1 *)(iVar2 + 0x1f5) = 1;
  *(undefined1 *)(iVar2 + 0x1f0) = 1;
  return;
}

