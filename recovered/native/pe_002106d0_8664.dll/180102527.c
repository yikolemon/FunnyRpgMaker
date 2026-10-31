/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180102527 */

void FUN_180102527(longlong param_1,float *param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  float fVar2;
  undefined2 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 extraout_XMM0_Qb;
  
  lVar6 = DAT_180419160;
  local_90 = DAT_180402640 ^ (ulonglong)auStack_108;
  if (param_6 == 0) {
    param_6 = FUN_180101d94(param_5,0);
  }
  if (param_7 == (undefined8 *)0x0) {
    local_e8 = local_e8 & 0xffffffff00000000;
    FUN_1801023ca(&local_98,param_5,param_6,0);
  }
  else {
    local_98 = *param_7;
  }
  if ((float)local_98 <= *param_3 - *param_2) {
    local_d8 = &local_b8;
    local_b8 = 0;
    local_d0 = (undefined8 *)0x0;
    local_e0 = &local_98;
    local_e8 = param_6;
    FUN_180102189(param_1,param_2,param_3,param_5);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar5 = *(longlong *)(lVar4 + 0x18);
    uVar1 = *(undefined4 *)(lVar4 + 0x20);
    fVar2 = *(float *)(lVar4 + 0x24);
    local_a0 = 0;
    uVar8 = FUN_180197b74(lVar5,uVar1,DAT_1802bb8e0);
    fVar9 = (float)FUN_18019ac5a(uVar8,*(undefined2 *)(lVar5 + 0x30));
    auVar11._0_8_ = FUN_180102463();
    uVar7 = DAT_1802ac570;
    auVar11._8_8_ = extraout_XMM0_Qb;
    auVar12._4_12_ = auVar11._4_12_;
    auVar12._0_4_ = ((float)auVar11._0_8_ - fVar9 * fVar2) - *param_2;
    uVar10 = FUN_180102463(auVar12._0_8_,DAT_1802ac570);
    local_e0 = (undefined8 *)param_5;
    local_e8 = local_e8 & 0xffffffff00000000;
    local_d8 = (undefined8 *)param_6;
    local_d0 = &local_a0;
    FUN_18019b482(lVar5,&local_b8,uVar1,uVar10);
    fVar2 = (float)local_b8;
    local_b8 = 0;
    local_d0 = (undefined8 *)0x0;
    local_e0 = &local_98;
    local_e8 = local_a0;
    local_d8 = &local_b8;
    FUN_180102189(param_1,param_2,param_3,param_5);
    local_b8 = *(undefined8 *)param_2;
    uStack_b0 = *(undefined8 *)param_3;
    local_c0 = CONCAT44((float)(int)param_2[1],(float)(int)(fVar2 + (float)local_b8));
    uVar3 = *(undefined2 *)(lVar5 + 0x30);
    uVar7 = FUN_18010129b(0,uVar7);
    local_e0 = (undefined8 *)CONCAT62(local_e0._2_6_,uVar3);
    local_e8 = CONCAT44(local_e8._4_4_,uVar7);
    local_d8 = &local_b8;
    FUN_18019b4ea(lVar5,param_1,uVar1,&local_c0);
  }
  if (*(char *)(lVar6 + 0x2a40) == '\x01') {
    FUN_180101ebe(param_2,param_5,param_6);
  }
  if (DAT_180402640 == (local_90 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_90 ^ (ulonglong)auStack_108);
}

