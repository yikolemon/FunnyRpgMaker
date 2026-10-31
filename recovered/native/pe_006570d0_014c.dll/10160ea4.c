/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10160ea4 */

void FUN_10160ea4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  float10 fVar8;
  
  iVar4 = *(int *)(DAT_1039d74c + 0x2308);
  iVar5 = *(int *)(iVar4 + 0x10);
  param_1 = param_1 * 0x74;
  uVar1 = *(undefined4 *)(iVar4 + 0x8c);
  fVar8 = (float10)FUN_100fdbca(uVar1,*(undefined4 *)(iVar5 + 0x18 + param_1));
  fVar8 = (float10)FUN_10112cc4(param_2,uVar1,(float)fVar8);
  fVar3 = (float)fVar8;
  fVar2 = *(float *)(iVar5 + 4 + param_1);
  if ((fVar2 == fVar3) && (!NAN(fVar2) && !NAN(fVar3))) {
    return;
  }
  puVar7 = (uint *)(iVar5 + param_1);
  fVar2 = (float)puVar7[4];
  if ((fVar2 == fVar3) && (!NAN(fVar2) && !NAN(fVar3))) {
    return;
  }
  if ((short)puVar7[0x17] == -1) {
    if ((*puVar7 & 0x10) != 0) {
LAB_10160fe7:
      puVar7[4] = (uint)fVar3;
      goto LAB_10160fec;
    }
LAB_10160f53:
    if (*(short *)((int)puVar7 + 0x5a) == -1) {
      return;
    }
    if (*(int *)(iVar4 + 0x10) == 0) {
      return;
    }
    puVar6 = (uint *)(*(int *)(iVar4 + 0x10) + *(short *)((int)puVar7 + 0x5a) * 0x74);
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x10);
    puVar6 = (uint *)((short)puVar7[0x17] * 0x74 + iVar5);
    if ((*puVar7 & 0x10) == 0) {
      if (iVar5 == 0) goto LAB_10160f53;
    }
    else if (((iVar5 == 0) || (*(short *)(iVar4 + 0x1d6) == -1)) ||
            (*(short *)((int)puVar7 + 0x56) <=
             *(short *)(iVar5 + 0x56 + *(short *)(iVar4 + 0x1d6) * 0x74))) goto LAB_10160fe7;
  }
  fVar8 = (float10)FUN_100fdbca((float)puVar6[4] - (fVar3 - fVar2),uVar1);
  puVar7[4] = (uint)(((float)puVar7[4] + (float)puVar6[4]) - (float)fVar8);
  puVar6[4] = (uint)(float)fVar8;
  if (((*puVar6 | *puVar7) & 8) != 0) {
    FUN_10165806(iVar4);
  }
LAB_10160fec:
  *(undefined1 *)(iVar4 + 0x1f5) = 1;
  return;
}

