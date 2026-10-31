/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180031ef6 */

undefined8
FUN_180031ef6(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,undefined8 param_5,
             uint *param_6,int param_7,undefined8 param_8)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined4 *local_d8;
  longlong local_d0;
  int *local_c8;
  undefined4 **local_c0;
  uint *local_b8;
  undefined4 **local_b0;
  uint *local_a8;
  undefined4 *local_a0;
  uint *local_98;
  undefined1 *local_90;
  undefined4 **local_88;
  longlong local_80;
  int *local_78;
  int local_5c;
  undefined8 local_58;
  int local_50;
  uint local_4c [3];
  
  puVar2 = param_6;
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  iVar3 = *(int *)(param_3 + 8);
  iVar5 = iVar3 + param_4;
  lVar4 = (longlong)(int)((param_4 + 1) - (uint)(param_7 == 0));
  local_d0 = param_3;
  local_5c = iVar5;
  local_58 = param_2;
  local_50 = param_4;
  if (-1 < (longlong)iVar3) {
    lVar4 = iVar3 + lVar4;
    local_4c[0] = param_6[3] - iVar5;
    uVar6 = *param_6;
    if ((uVar6 >> 0xd & 1) != 0) {
      lVar4 = lVar4 + 1;
      if ((uVar6 & 7) == 2 || 0 < (int)local_4c[0]) {
        if (0 < (int)local_4c[0]) {
          lVar4 = lVar4 + (ulonglong)local_4c[0];
        }
      }
      else {
        local_4c[0] = 0;
      }
    }
    FUN_18002e2fe(&local_a0,param_8,uVar6 >> 0xe & 1);
    iVar3 = FUN_18002778a(&local_a0,iVar5);
    local_d8 = &param_7;
    local_c8 = &local_50;
    local_b8 = puVar2;
    local_b0 = (undefined4 **)&param_5;
    local_a8 = local_4c;
    local_c0 = &local_a0;
    FUN_180032503(param_1,local_58,puVar2,lVar4 + iVar3,lVar4 + iVar3,&local_d8);
    FUN_180001ef2(&local_80);
    FUN_180001ef2(&local_a0);
    return param_1;
  }
  if (0 < iVar5) {
    local_4c[0] = param_6[3] - param_4 & (int)(*param_6 << 0x12) >> 0x1f;
    uVar6 = local_4c[0];
    if ((int)local_4c[0] < 1) {
      uVar6 = 0;
    }
    FUN_18002e2fe(&local_a0,param_8,*param_6 >> 0xe & 1);
    iVar3 = FUN_18002778a(&local_a0,iVar5);
    lVar4 = (longlong)iVar3 + (ulonglong)uVar6 + lVar4 + 1;
    local_d8 = &param_7;
    local_c8 = &local_50;
    local_c0 = (undefined4 **)&local_5c;
    local_b8 = (uint *)&param_5;
    local_a8 = local_4c;
    local_b0 = &local_a0;
    FUN_180032892(param_1,local_58,puVar2,lVar4,lVar4,&local_d8);
    FUN_180001ef2(&local_80);
    FUN_180001ef2(&local_a0);
    return param_1;
  }
  uVar6 = -iVar5;
  local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,uVar6);
  if (param_4 == 0) {
    uVar1 = param_6[3];
    if ((int)uVar1 < (int)uVar6 && -1 < (int)uVar1) {
      local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,uVar1);
      uVar6 = uVar1;
    }
    if (uVar6 == 0) {
      local_4c[0] = CONCAT31(local_4c[0]._1_3_,(char)((*param_6 & 0x2000) >> 0xd));
      iVar3 = 2 - (uint)((*param_6 & 0x2000) == 0);
      uVar6 = 0;
      goto LAB_18003214e;
    }
  }
  local_4c[0] = CONCAT31(local_4c[0]._1_3_,1);
  iVar3 = 2;
LAB_18003214e:
  lVar4 = (ulonglong)(uVar6 + iVar3) + lVar4;
  local_a0 = &param_7;
  local_98 = local_4c;
  local_90 = (undefined1 *)&param_5;
  local_88 = &local_d8;
  local_78 = &local_50;
  local_80 = param_3;
  FUN_18002aded(param_1,param_2,param_6,lVar4,lVar4,&local_a0);
  return param_1;
}

