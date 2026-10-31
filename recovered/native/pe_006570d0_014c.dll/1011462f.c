/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011462f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011462f(void)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float local_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  iVar4 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar5 = *(int *)(DAT_1039d74c + 0x1fb0) * 0x3c + *(int *)(DAT_1039d74c + 0x1fb8);
  if (*(char *)(iVar4 + 0x185) == '\x01') {
    FUN_10111542();
  }
  local_24 = *(undefined4 *)(iVar5 + -0x38);
  uStack_20 = *(undefined4 *)(iVar5 + -0x34);
  fVar10 = (float)*(undefined8 *)(iVar4 + 0x15c);
  fVar12 = (float)((ulonglong)*(undefined8 *)(iVar4 + 0x15c) >> 0x20);
  fVar11 = (float)*(undefined8 *)(iVar3 + 0x1e94);
  fVar13 = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x1e94) >> 0x20);
  uVar8 = -(uint)(fVar11 <= fVar10);
  uVar9 = -(uint)(fVar13 <= fVar12);
  uVar2 = CONCAT44(~uVar9 & (uint)fVar13,~uVar8 & (uint)fVar11) |
          CONCAT44((uint)fVar12 & uVar9,(uint)fVar10 & uVar8);
  fVar10 = (float)*(undefined8 *)(iVar5 + -0x38);
  fVar12 = (float)((ulonglong)*(undefined8 *)(iVar5 + -0x38) >> 0x20);
  fVar11 = (float)uVar2;
  fVar13 = (float)(uVar2 >> 0x20);
  uVar8 = -(uint)(fVar10 <= fVar11);
  uVar9 = -(uint)(fVar12 <= fVar13);
  fStack_1c = (float)(~uVar8 & (uint)fVar10 | (uint)fVar11 & uVar8);
  fStack_18 = (float)(~uVar9 & (uint)fVar12 | (uint)fVar13 & uVar9);
  fVar10 = *(float *)(iVar5 + -0x38);
  fVar12 = *(float *)(iVar5 + -0x34);
  *(undefined4 *)(iVar4 + 0x148) = uStack_20;
  *(undefined4 *)(iVar4 + 0x144) = local_24;
  *(undefined8 *)(iVar4 + 0x14c) = *(undefined8 *)(iVar5 + -0x28);
  fVar11 = (float)*(undefined8 *)(iVar5 + -0x30);
  fVar13 = (float)((ulonglong)*(undefined8 *)(iVar5 + -0x30) >> 0x20);
  uVar8 = -(uint)(fStack_1c <= fVar11);
  uVar9 = -(uint)(fStack_18 <= fVar13);
  *(ulonglong *)(iVar4 + 0x15c) =
       CONCAT44(~uVar9 & (uint)fStack_18,~uVar8 & (uint)fStack_1c) |
       CONCAT44((uint)fVar13 & uVar9,(uint)fVar11 & uVar8);
  *(undefined4 *)(iVar4 + 0x188) = *(undefined4 *)(iVar5 + -0x20);
  *(undefined4 *)(iVar4 + 400) = *(undefined4 *)(iVar5 + -0x1c);
  *(undefined8 *)(iVar4 + 0x16c) = *(undefined8 *)(iVar5 + -0x18);
  *(undefined4 *)(iVar4 + 0x17c) = *(undefined4 *)(iVar5 + -0x10);
  *(undefined1 *)(iVar4 + 0x184) = *(undefined1 *)(iVar5 + -5);
  if (*(char *)(iVar3 + 0x2748) == '\x01') {
    *(undefined4 *)(iVar3 + 0x276c) = 0xff7fffff;
  }
  if (*(char *)(iVar5 + -4) == '\0') {
    *(int *)(iVar3 + 0x1fb0) = *(int *)(iVar3 + 0x1fb0) + -1;
    goto LAB_10114899;
  }
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_4c = fStack_1c;
  fStack_48 = fStack_18;
  local_3c = fVar10;
  fStack_38 = fVar12;
  fVar7 = (float10)FUN_100fdbca(*(undefined4 *)(iVar4 + 0x180),*(undefined4 *)(iVar5 + -0x10));
  *(float *)(iVar4 + 0x17c) = (float)fVar7;
  local_2c = CONCAT44(fStack_48 - fStack_38,local_4c - local_3c);
  FUN_1010c810(&local_2c,0xbf800000);
  FUN_1010c9d8(&local_24,0,0,1);
  iVar4 = *(int *)(iVar3 + 0x1528);
  if (*(int *)(iVar5 + -0xc) == iVar4) {
    uVar8 = 0x20;
    if (*(char *)(iVar5 + -7) == '\0') {
      bVar1 = *(byte *)(iVar3 + 0x155d);
joined_r0x10114812:
      uVar8 = 0x20;
      if (bVar1 != 0) {
        iVar4 = *(int *)(iVar3 + 0x1554);
        uVar8 = 0x60;
LAB_1011481f:
        *(int *)(iVar3 + 0x1e80) = iVar4;
      }
    }
  }
  else {
    bVar6 = *(int *)(iVar3 + 0x152c) != iVar4;
    if (*(char *)(iVar5 + -7) == '\0') {
      bVar1 = *(byte *)(iVar3 + 0x155d);
      if (iVar4 == 0 || bVar6) goto joined_r0x10114812;
      *(int *)(iVar3 + 0x1e80) = iVar4;
      uVar8 = (uint)bVar1 << 6 | 0x20;
    }
    else {
      uVar8 = 0x20;
      if (iVar4 != 0 && !bVar6) goto LAB_1011481f;
    }
  }
  *(undefined4 *)(iVar3 + 0x1e8c) = local_24;
  *(undefined4 *)(iVar3 + 0x1e90) = uStack_20;
  *(float *)(iVar3 + 0x1e94) = fStack_1c;
  *(float *)(iVar3 + 0x1e98) = fStack_18;
  if ((*(char *)(iVar5 + -6) == '\0') && (*(int *)(iVar3 + 0x1510) != 0)) {
    *(byte *)(iVar3 + 0x1e88) = *(byte *)(iVar3 + 0x1e88) | 0x80;
  }
  if ((*(char *)(iVar3 + 0x1539) == '\x01') && (*(char *)(iVar5 + -8) == '\0')) {
    *(byte *)(iVar3 + 0x1e88) = *(byte *)(iVar3 + 0x1e88) | 4;
  }
  *(uint *)(iVar3 + 0x1e88) = *(uint *)(iVar3 + 0x1e88) | uVar8;
  *(int *)(iVar3 + 0x1fb0) = *(int *)(iVar3 + 0x1fb0) + -1;
  if (*(char *)(iVar3 + 0x1f6c) == '\x01') {
    FUN_1018b762(&local_24,&fStack_1c,_DAT_102b8dc0,_UNK_102b8dc4,_UNK_102b8dc8,_UNK_102b8dcc);
  }
LAB_10114899:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

