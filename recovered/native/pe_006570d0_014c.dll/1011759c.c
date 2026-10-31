/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011759c */

void FUN_1011759c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  uint local_30;
  undefined8 local_2c;
  undefined8 local_24;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  if (*(int *)(DAT_1039d74c + 0x2124) == 0) {
    uVar4 = *(uint *)(DAT_1039d74c + 0x20dc);
    if (((byte)(uVar4 >> 10) & *(int *)(DAT_1039d74c + 0x2194) == 0) == 1) {
      if (((*(int *)(DAT_1039d74c + 0x211c) != 1) && (*(int *)(DAT_1039d74c + 0x2118) != 0)) ||
         (*(int *)(DAT_1039d74c + 0x21cc) == 0)) {
        uVar5 = (uint)((*(uint *)(DAT_1039d74c + 0x20e8) & 0xfffffffe) == 2);
LAB_10117943:
        uVar4 = uVar4 | 0x4000;
        *(uint *)(DAT_1039d74c + 0x20dc) = uVar4;
        goto LAB_1011794a;
      }
      piVar6 = (int *)(DAT_1039d74c + 0x21c8);
      goto LAB_101175d3;
    }
    uVar5 = (uint)((*(uint *)(DAT_1039d74c + 0x20e8) & 0xfffffffe) == 2);
    if (*(int *)(DAT_1039d74c + 0x2194) == 0) {
      if ((uVar4 >> 10 & 1) != 0) goto LAB_10117943;
LAB_1011794a:
      if ((*(int *)(iVar1 + 0x2044) != 0) && ((uVar4 & 0x4000) == 0)) {
        FUN_101170bb();
      }
      FUN_10117123(uVar5);
      if ((*(byte *)(iVar1 + 0x27b4) & 0x10) != 0) {
        FUN_100f99e6("[nav] NavMoveSubmitted but not led to a result!\n");
      }
      goto LAB_1011789c;
    }
    piVar6 = (int *)(DAT_1039d74c + 0x2190);
    local_30 = uVar5;
  }
  else {
    piVar6 = (int *)(DAT_1039d74c + 0x2120);
    uVar4 = *(uint *)(DAT_1039d74c + 0x20dc);
LAB_101175d3:
    local_30 = (uint)((*(uint *)(DAT_1039d74c + 0x20e8) & 0xfffffffe) == 2);
  }
  piVar7 = (int *)(DAT_1039d74c + 0x20e8);
  puVar8 = (uint *)(DAT_1039d74c + 0x20dc);
  if ((((uVar4 & 0x20) != 0) && (*(int *)(DAT_1039d74c + 0x215c) != 0)) &&
     (*(int *)(DAT_1039d74c + 0x215c) != *(int *)(DAT_1039d74c + 0x2044))) {
    piVar6 = (int *)(DAT_1039d74c + 0x2158);
  }
  if (((piVar6 != (int *)(DAT_1039d74c + 0x2190)) && (*(int *)(DAT_1039d74c + 0x2194) != 0)) &&
     (*(int *)(*(int *)(DAT_1039d74c + 0x2190) + 0x3a0) == *(int *)(DAT_1039d74c + 0x2048))) {
    fVar9 = *(float *)(DAT_1039d74c + 0x21b0);
    fVar11 = (float)piVar6[8];
    if (fVar11 <= fVar9) {
      if (((fVar9 != fVar11) || (NAN(fVar9) || NAN(fVar11))) ||
         ((float)piVar6[9] < *(float *)(DAT_1039d74c + 0x21b4) ||
          (float)piVar6[9] == *(float *)(DAT_1039d74c + 0x21b4))) goto LAB_1011765a;
    }
    piVar6 = (int *)(DAT_1039d74c + 0x2190);
  }
LAB_1011765a:
  if (*(int *)(DAT_1039d74c + 0x2050) == 0) {
    fVar9 = (float)*(undefined8 *)(*piVar6 + 0x154);
    fVar11 = (float)((ulonglong)*(undefined8 *)(*piVar6 + 0x154) >> 0x20);
    fStack_1c = (float)piVar6[5] + fVar9;
    fStack_18 = (float)piVar6[6] + fVar11;
    local_24 = CONCAT44((float)piVar6[4] + fVar11,(float)piVar6[3] + fVar9);
    FUN_1011278b(&local_2c,*piVar6,&local_24,*(undefined4 *)(DAT_1039d74c + 0x20e0));
    if ((*(byte *)(iVar1 + 0x20dc) & 0x40) != 0) {
      uVar10 = 0;
      if (*piVar7 == 2) {
        uVar10 = *(undefined4 *)(*piVar6 + 0xd0);
      }
      FUN_10115932(*piVar6,uVar10);
    }
  }
  iVar2 = *piVar6;
  if (*(int *)(iVar1 + 0x2048) != iVar2) {
    if ((*(byte *)(iVar1 + 0x27b4) & 4) != 0) {
      FUN_100f99e6("[focus] NavMoveRequest: SetNavWindow(\"%s\")\n",*(undefined4 *)(iVar2 + 4));
      iVar2 = *piVar6;
    }
    *(int *)(iVar1 + 0x2048) = iVar2;
    *(undefined4 *)(iVar1 + 0x2094) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2090) = 0xffffffff;
  }
  iVar2 = *(int *)(iVar1 + 0x1528);
  uVar4 = *(uint *)(iVar1 + 0x20dc);
  if ((iVar2 != piVar6[1]) && (iVar2 = piVar6[1], -1 < (short)uVar4)) {
    FUN_101028d8();
    iVar2 = piVar6[1];
    uVar4 = *puVar8;
  }
  if (((uVar4 & 0x800) != 0 || iVar2 != *(int *)(iVar1 + 0x2044)) && ((uVar4 & 0x2000) == 0)) {
    *(undefined4 *)(iVar1 + 0x2200) = *(undefined4 *)(iVar1 + 0x204c);
    *(int *)(iVar1 + 0x2204) = piVar6[1];
    *(int *)(iVar1 + 0x2208) = piVar6[2];
    *(undefined4 *)(iVar1 + 0x220c) = *(undefined4 *)(iVar1 + 0x20e4);
    *(byte *)(iVar1 + 0x2210) = (byte)(uVar4 >> 10) & 1;
    *(byte *)(iVar1 + 0x2211) = (byte)((uint)piVar6[7] >> 0x15) & 1;
  }
  iVar2 = *(int *)(iVar1 + 0x2048);
  iVar3 = *(int *)(iVar1 + 0x2050);
  if ((*(byte *)(iVar1 + 0x27b4) & 0x10) != 0) {
    FUN_100f99e6("[nav] NavMoveRequest: result NavID 0x%08X in Layer %d Window \"%s\"\n",piVar6[1],
                 iVar3,*(undefined4 *)(iVar2 + 4));
    iVar2 = *(int *)(iVar1 + 0x2048);
    iVar3 = *(int *)(iVar1 + 0x2050);
  }
  local_24 = *(undefined8 *)(*(int *)(iVar2 + 0x3b8) + 0x3ec + iVar3 * 8);
  FUN_1011714e(piVar6[1],iVar3,piVar6[2],piVar6 + 3);
  uVar4 = piVar6[0xd];
  if ((piVar6[0xc] & uVar4) != 0xffffffff) {
    *(int *)(iVar1 + 0x2090) = piVar6[0xc];
    *(uint *)(iVar1 + 0x2094) = uVar4;
  }
  uVar4 = *puVar8;
  if ((uVar4 >> 10 & 1) == 0) {
    local_2c = CONCAT44(((float)((ulonglong)*(undefined8 *)(piVar6 + 5) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(piVar6 + 3) >> 0x20)) *
                        DAT_102b89c0._4_4_,
                        ((float)*(undefined8 *)(piVar6 + 5) + (float)*(undefined8 *)(piVar6 + 3)) *
                        (float)DAT_102b89c0);
    *(undefined4 *)((int)&local_24 + local_30 * 4) = *(undefined4 *)((int)&local_2c + local_30 * 4);
    *(undefined8 *)
     (*(int *)(*(int *)(iVar1 + 0x2048) + 0x3b8) + 0x3ec + *(int *)(iVar1 + 0x2050) * 8) = local_24;
    uVar4 = *(uint *)(iVar1 + 0x20dc);
    if ((uVar4 >> 10 & 1) != 0) goto LAB_10117858;
  }
  else {
LAB_10117858:
    if ((*(byte *)((int)piVar6 + 0x1e) & 0x10) == 0) {
      uVar4 = uVar4 & 0xffffefff;
      *puVar8 = uVar4;
    }
  }
  if ((uVar4 >> 0xc & 1) != 0) {
    *(int *)(iVar1 + 0x2084) = piVar6[1];
    uVar5 = uVar4 >> 4 & 0x20;
    *(uint *)(iVar1 + 0x2088) = uVar5;
    if ((uVar4 >> 10 & 1) != 0) {
      *(uint *)(iVar1 + 0x2088) = uVar5 | 0xd;
    }
  }
  if ((*(byte *)(iVar1 + 0x20dd) & 0x40) == 0) {
    FUN_101170bb();
  }
LAB_1011789c:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

