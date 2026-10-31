/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014a9f9 */

int * FUN_1014a9f9(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  piVar1 = *(int **)(DAT_1039d74c + 0x2414);
  iVar4 = piVar1[10];
  iVar5 = *(int *)(DAT_1039d74c + 0x14cc);
  if (piVar1[0xb] != *(int *)(DAT_1039d74c + 0x1e3c)) {
    FUN_100fcef5("EndMultiSelect() FocusScope mismatch!");
  }
  FUN_1014a807(iVar5);
  if (*(char *)((int)piVar1 + 0x4e) == '\x01') {
    if ((*(char *)((int)piVar1 + 0x21) != '\0') ||
       ((*(char *)((int)piVar1 + 0x51) == '\0' && ((piVar1[4] & piVar1[5]) != 0xffffffff)))) {
      if ((*(byte *)(iVar2 + 0x27b4) & 0x40) != 0) {
        FUN_100f99e6("[selection] EndMultiSelect: Reset RangeSrcItem.\n");
      }
      *(undefined4 *)(iVar4 + 0x1c) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x18) = 0xffffffff;
    }
    if (((char)piVar1[0x14] == '\0') &&
       ((*(uint *)(iVar4 + 0x20) & *(uint *)(iVar4 + 0x24)) != 0xffffffff)) {
      if ((*(byte *)(iVar2 + 0x27b4) & 0x40) != 0) {
        FUN_100f99e6("[selection] EndMultiSelect: Reset NavIdItem.\n");
      }
      *(undefined4 *)(iVar4 + 0x24) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x20) = 0xffffffff;
      *(undefined1 *)(iVar4 + 0x11) = 0xff;
    }
    if (((((piVar1[0xc] & 0xc0U) != 0) && (piVar1[0x11] != 0)) &&
        (*(int *)(DAT_1039d74c + 0x2394) == piVar1[0x11])) &&
       (*(char *)(DAT_1039d74c + 0x2398) == '\x01')) {
      FUN_10149d70(&local_24,piVar1[0xc]);
    }
  }
  if (*(char *)((int)piVar1 + 0x4d) == '\0') {
    if (piVar1[1] < 0) {
      iVar4 = FUN_100fa1fa(0);
      if (piVar1[2] != 0) {
        FUN_1025b2d0(iVar4,piVar1[2],*piVar1 * 0x18);
        FUN_100fa2cb(piVar1[2]);
      }
      piVar1[2] = iVar4;
      piVar1[1] = 0;
    }
    *piVar1 = 0;
  }
  if ((((*(float *)(iVar5 + 0x24c) <= *(float *)(iVar2 + 0xe4)) &&
       (*(float *)(iVar5 + 0x250) <= *(float *)(iVar2 + 0xe8))) &&
      ((*(float *)(iVar2 + 0xe4) < *(float *)(iVar5 + 0x254) &&
       ((*(float *)(iVar2 + 0xe8) < *(float *)(iVar5 + 600) &&
        (cVar3 = FUN_10111b70(1), cVar3 != '\0')))))) &&
     (((uVar6 = piVar1[0xc], (uVar6 >> 0xc & 1) == 0 ||
       ((((local_24 <= *(float *)(iVar2 + 0xe4) && (local_20 <= *(float *)(iVar2 + 0xe8))) &&
         (*(float *)(iVar2 + 0xe4) < local_1c)) && (*(float *)(iVar2 + 0xe8) < local_18)))) &&
      ((*(int *)(iVar2 + 0x1510) == 0 && (*(int *)(iVar2 + 0x1528) == 0)))))) {
    if ((((uVar6 & 0xc0) != 0) &&
        ((*(char *)(iVar2 + 0x2398) == '\0' && (*(char *)(iVar2 + 0x2399) == '\0')))) &&
       (*(short *)(iVar2 + 0xb22) == 1)) {
      FUN_1014adba(0xffffffff);
      FUN_101034e2(iVar5,2);
      FUN_101028e5(piVar1[0x11]);
      uVar6 = piVar1[0xc];
      if ((uVar6 >> 0xc & 1) != 0) {
        local_34 = *(undefined4 *)(iVar2 + 0xe4);
        uStack_30 = *(undefined4 *)(iVar2 + 0xe8);
        uStack_2c = local_34;
        uStack_28 = uStack_30;
        FUN_1011714e(0,0,piVar1[0xb],&local_34);
        uVar6 = piVar1[0xc];
      }
    }
    if (((((uVar6 >> 10 & 1) != 0) && (cVar3 = FUN_10113f33(0), cVar3 != '\0')) &&
        (cVar3 = FUN_10113fae(0,0xbf800000), cVar3 == '\0')) && (*(int *)(iVar2 + 0x108) == 0)) {
      FUN_1014a86a(piVar1,0);
    }
  }
  iVar4 = DAT_1039d74c;
  if ((*(byte *)((int)piVar1 + 0x32) & 1) != 0) {
    *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
    FUN_10116891(*(undefined4 *)(iVar4 + 0x14cc),4);
  }
  iVar4 = *(int *)(iVar2 + 0x2308);
  if ((iVar4 != 0) && (*(char *)(iVar4 + 0x1ee) == '\x01')) {
    FUN_101639ce(iVar4);
  }
  fVar10 = (float)*(undefined8 *)(iVar5 + 0x15c);
  fVar11 = (float)((ulonglong)*(undefined8 *)(iVar5 + 0x15c) >> 0x20);
  fVar8 = (float)*(undefined8 *)(piVar1 + 0xf);
  fVar9 = (float)((ulonglong)*(undefined8 *)(piVar1 + 0xf) >> 0x20);
  uVar6 = -(uint)(fVar10 <= fVar8);
  uVar7 = -(uint)(fVar11 <= fVar9);
  *(ulonglong *)(iVar5 + 0x15c) =
       CONCAT44(~uVar7 & (uint)fVar11,~uVar6 & (uint)fVar10) |
       CONCAT44((uint)fVar9 & uVar7,(uint)fVar8 & uVar6);
  FUN_101113ef();
  if ((*(byte *)(iVar2 + 0x27b4) & 0x40) != 0) {
    FUN_1014a928();
  }
  iVar5 = 0;
  piVar1[0xb] = 0;
  piVar1[0xc] = 0;
  iVar4 = *(int *)(iVar2 + 0x2418);
  *(int *)(iVar2 + 0x2418) = iVar4 + -1;
  if (1 < iVar4) {
    iVar5 = *(int *)(iVar2 + 0x2424) + iVar4 * 0x58 + -0xb0;
  }
  *(int *)(iVar2 + 0x2414) = iVar5;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return piVar1;
}

