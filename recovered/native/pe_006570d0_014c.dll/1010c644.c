/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010c644 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c644(void)

{
  ushort *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  float local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar6 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_50;
  local_50 = *(undefined4 *)(DAT_1039d74c + 0x1458);
  iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
  *(undefined4 *)(DAT_1039d74c + 0x1458) = *(undefined4 *)(iVar2 + 8);
  fVar3 = *(float *)(iVar2 + 0x58);
  local_18 = *(undefined4 *)(iVar2 + 0x5c);
  uVar5 = *(undefined8 *)(iVar2 + 0x58);
  local_1c = fVar3;
  FUN_1010ad44();
  if (*(short *)(iVar2 + 0x108) != 1) {
    local_2c = *(undefined8 *)(iVar2 + 0x50);
    uStack_24 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar2 + 0x58) >> 0x20) +
                         (float)((ulonglong)local_2c >> 0x20),
                         (float)*(undefined8 *)(iVar2 + 0x58) + (float)local_2c);
    FUN_1010cb73();
    goto LAB_1010c7da;
  }
  iVar4 = *(int *)(iVar6 + 0x14cc);
  local_4c = *(undefined8 *)(iVar4 + 0x144);
  uStack_44 = CONCAT44((float)((ulonglong)uVar5 >> 0x20) + (float)((ulonglong)local_4c >> 0x20),
                       fVar3 + (float)local_4c);
  local_2c = local_4c;
  uStack_24 = uStack_44;
  FUN_1010c810(&local_1c,0xbf800000);
  uVar7 = *(uint *)(iVar2 + 0x14);
  if (*(short *)(iVar2 + 0x1a0) == 0) {
    if ((*(byte *)(iVar2 + 0x1a6) & (uVar7 >> 8 & 1) == 0) != 0) goto LAB_1010c730;
    FUN_1010c9d8(&local_2c,*(undefined4 *)(iVar2 + 0xbc),0,2);
    if ((uVar7 >> 8 & 1) != 0) goto LAB_1010c7ad;
  }
  else if ((uVar7 >> 8 & 1) == 0) {
LAB_1010c730:
    FUN_1010c9d8(&local_2c,*(undefined4 *)(iVar2 + 0xbc),0,0);
    FUN_100fe25e(&local_2c,*(undefined4 *)(iVar2 + 0xbc),0);
    if ((*(short *)(iVar2 + 0x1a0) == 0) && (iVar2 == *(int *)(iVar6 + 0x2048))) {
      local_3c = (float)local_4c + _DAT_102b8ca0;
      fStack_38 = local_4c._4_4_ + _UNK_102b8ca4;
      fStack_34 = (float)uStack_44 + _UNK_102b8ca8;
      fStack_30 = uStack_44._4_4_ + _UNK_102b8cac;
      FUN_100fe25e(&local_3c,*(undefined4 *)(iVar6 + 0x2044),2);
    }
  }
  else {
    FUN_1010c9d8(&local_2c,*(undefined4 *)(iVar2 + 0xbc),0,2);
LAB_1010c7ad:
    puVar1 = (ushort *)(iVar4 + 0x1a2);
    *puVar1 = *puVar1 | *(ushort *)(iVar2 + 0x1a2);
  }
  uVar7 = *(uint *)(iVar6 + 0x1e88);
  if (*(int *)(iVar6 + 0x14d0) == iVar2) {
    uVar7 = uVar7 | 0x80;
    *(uint *)(iVar6 + 0x1e88) = uVar7;
  }
  *(uint *)(iVar2 + 0x200) = uVar7;
LAB_1010c7da:
  *(undefined4 *)(iVar6 + 0x1458) = local_50;
  *(undefined4 *)(iVar6 + 0x276c) = 0xff7fffff;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_50)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

