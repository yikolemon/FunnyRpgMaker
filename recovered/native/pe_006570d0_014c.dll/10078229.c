/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10078229 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078229(int param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined1 local_84 [16];
  uint local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_a4;
  uVar5 = *(uint *)(param_1 + 4);
  uVar1 = *(undefined1 *)(param_1 + 4);
  auVar2[0xc] = (char)(uVar5 >> 0x18);
  auVar2._0_12_ = ZEXT712(0);
  auVar4[1] = 0;
  auVar4[0] = (byte)(uVar5 >> 0x10);
  auVar4._2_3_ = auVar2._10_3_;
  auVar4._5_8_ = 0;
  auVar3[5] = 0;
  auVar3[4] = (byte)(uVar5 >> 8);
  auVar3._6_7_ = SUB137(auVar4 << 0x40,6);
  auVar3._0_4_ = uVar5 & 0xff;
  *param_2 = auVar3._0_8_;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1026ff3c(uVar1);
  iVar7 = 0xc;
  do {
    FUN_10078591(param_2,iVar7 + (int)param_2);
    iVar7 = iVar7 + 0x400;
  } while (iVar7 != 0x800c);
  local_24 = (undefined1  [16])0x0;
  local_34 = (undefined1  [16])0x0;
  local_44 = (undefined1  [16])0x0;
  local_74 = 0;
  do {
    FUN_10078c00(param_2,*(byte *)(param_1 + 7) + local_74,*(byte *)(param_1 + 6) - local_74,
                 &local_74,local_44);
    local_74 = local_74 + 1;
  } while (local_74 < 0x30);
  local_84 = (undefined1  [16])0x0;
  local_94 = (undefined1  [16])0x0;
  local_a4 = (undefined1  [16])0x0;
  uStack_70 = _UNK_10294514;
  local_74 = _DAT_10294510;
  uStack_6c = _UNK_10294518;
  uStack_68 = _UNK_1029451c;
  uStack_60 = _UNK_10294524;
  local_64 = _DAT_10294520;
  uStack_5c = _UNK_10294528;
  uStack_58 = _UNK_1029452c;
  uStack_50 = _UNK_10294534;
  local_54 = _DAT_10294530;
  uStack_4c = _UNK_10294538;
  uStack_48 = _UNK_1029453c;
  FUN_1026ff3c(*(byte *)(param_1 + 6) ^ *(byte *)(param_1 + 5));
  iVar7 = 0;
  do {
    uVar5 = FUN_1026ff4e();
    uVar1 = *(undefined1 *)((int)&local_74 + iVar7);
    iVar6 = uVar5 + (uVar5 / 3 & 0xfffffff0) * -3;
    *(undefined1 *)((int)&local_74 + iVar7) = *(undefined1 *)((int)&local_74 + iVar6);
    *(undefined1 *)((int)&local_74 + iVar6) = uVar1;
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x30);
  iVar7 = 0;
  do {
    local_a4[iVar7] = local_44[*(byte *)((int)&local_74 + iVar7)];
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x30);
  thunk_FUN_1000b6c9(local_a4,local_94,param_3);
  thunk_FUN_1000b6c9(local_94,local_84,param_4);
  if (DAT_10388d00 == (local_14 ^ (uint)local_a4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

