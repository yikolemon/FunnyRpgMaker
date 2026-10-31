/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010c0c7 */

undefined4 FUN_1010c0c7(int param_1,int param_2,undefined4 *param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_34 [3];
  undefined1 uStack_31;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_34;
  local_30 = *(int *)(DAT_1039d74c + 0x14cc);
  uVar7 = param_4 & 0xfffffffb;
  if ((param_4 & 0x10) == 0) {
    uVar7 = param_4;
  }
  uVar6 = uVar7 & 0xfffffff7;
  if ((uVar7 & 0x20) == 0) {
    uVar6 = uVar7;
  }
  uVar7 = 0x1080001;
  if ((uVar6 & 0xc) == 0) {
    uVar7 = 0x1080103;
  }
  uVar7 = uVar7 | *(uint *)(local_30 + 0xc) & 4 | (uint)((uVar6 & 0x70) != 0) << 6 | param_5;
  if ((char)uVar6 < '\0') {
    FUN_100fcd80(3,DAT_1039d74c + 0xe70);
    FUN_100fd0a3(7,*(undefined4 *)(iVar3 + 0xd14));
    FUN_100fd0a3(8,*(undefined4 *)(iVar3 + 0xd18));
    FUN_100fd3bc(2,iVar3 + 0xd0c);
    uVar6 = uVar6 | 3;
    uVar7 = uVar7 | 4;
  }
  FUN_1010c3e4(&local_1c);
  if ((uVar6 & 0x20) != 0) {
    local_18 = 0;
  }
  uVar2 = 0;
  if ((uVar6 & 0x10) == 0) {
    uVar2 = local_1c;
  }
  FUN_1010c427(&local_24,*param_3,param_3[1],uVar2,local_18);
  if (((*(byte *)(iVar3 + 0x1ed0) & 2) != 0) && ((*(byte *)(iVar3 + 0x1ed8) & 1) != 0)) {
    if (0.0 < *(float *)(iVar3 + 0x1ef4)) {
      uVar6 = uVar6 & 0xfffffffb;
      local_24 = *(float *)(iVar3 + 0x1ef4);
    }
    if (0.0 < *(float *)(iVar3 + 0x1ef8)) {
      uVar6 = uVar6 & 0xfffffff7;
      local_20 = *(float *)(iVar3 + 0x1ef8);
    }
  }
  FUN_10107cf6(&local_24,0);
  uVar5 = uVar6;
  if ((*(uint *)(iVar3 + 0x1ed0) >> 9 & 1) != 0) {
    uVar5 = *(uint *)(iVar3 + 0x1f10) | uVar6;
  }
  *(uint *)(iVar3 + 0x1f10) = uVar5;
  *(uint *)(iVar3 + 0x1ed0) = *(uint *)(iVar3 + 0x1ed0) | 0x200;
  if (param_1 == 0) {
    FUN_100fa588(&local_28,0,"%s/%08X",*(undefined4 *)(local_30 + 4),param_2);
  }
  else {
    FUN_100fa588(&local_28,0,"%s/%s_%08X",*(undefined4 *)(local_30 + 4),param_1,param_2);
  }
  local_2c = *(undefined4 *)(iVar3 + 0xd00);
  if ((uVar6 & 1) == 0) {
    *(undefined4 *)(iVar3 + 0xd00) = 0;
  }
  uStack_31 = FUN_10107d2b(local_28,0,uVar7);
  *(undefined4 *)(iVar3 + 0xd00) = local_2c;
  if ((char)uVar6 < '\0') {
    FUN_100fd4c4(3);
    FUN_100fce8e(1);
  }
  iVar1 = *(int *)(iVar3 + 0x14cc);
  *(int *)(iVar1 + 0xbc) = param_2;
  if (*(short *)(iVar1 + 0x108) == 1) {
    *(undefined8 *)(local_30 + 0x144) = *(undefined8 *)(iVar1 + 0x50);
  }
  iVar4 = FUN_100fa6c3("##Child",0,param_2);
  if (*(int *)(iVar3 + 0x1528) == iVar4) {
    FUN_101028d8();
  }
  if ((((uVar6 >> 8 & 1) == 0) && (*(int *)(iVar3 + 0x2058) == param_2)) &&
     ((*(short *)(iVar1 + 0x1a0) != 0 || (*(char *)(iVar1 + 0x1a6) == '\x01')))) {
    FUN_101034e2(iVar1,0);
    FUN_1010c53d(iVar1,0);
    FUN_101026ba(iVar4,iVar1);
    *(undefined4 *)(iVar3 + 0x1548) = *(undefined4 *)(iVar3 + 0x208c);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT31((int3)((local_14 ^ (uint)auStack_34) >> 8),uStack_31);
}

