/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013d4d5 */

byte FUN_18013d4d5(undefined8 param_1,float *param_2,float *param_3,undefined4 param_4,float param_5
                  ,float param_6,longlong param_7,longlong param_8,uint param_9)

{
  float fVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_e8 [32];
  float *local_c8;
  float *local_c0;
  longlong local_b8;
  uint local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  ulonglong local_90;
  
  lVar2 = DAT_180419160;
  local_90 = DAT_180402640 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar2 + 0x1608) + 0x10e) == '\0') {
    FUN_180117f98();
    FUN_18011a496();
    uVar6 = FUN_18011a39a();
    FUN_18011a13a(2,uVar6);
    fVar1 = (float)(~-(uint)(param_6 <= param_5) & (uint)param_5 |
                   DAT_1802de560 & -(uint)(param_6 <= param_5));
    local_98 = *param_3;
    local_94 = fVar1;
    if (param_5 < param_6) {
      local_98 = (float)FUN_1800eebe2(param_6);
    }
    local_c0 = &local_98;
    local_b0 = (-(uint)(fVar1 == local_98) & 1) << 0x15 | param_9;
    local_b8 = param_7;
    local_c8 = &local_94;
    bVar3 = FUN_18013c8ae("##min",8,param_2,param_4);
    FUN_18011a356();
    FUN_180119893(0,*(undefined4 *)(lVar2 + 0xe0c));
    local_9c = *param_2;
    local_a0 = DAT_1802de564;
    if (param_5 < param_6) {
      local_9c = (float)FUN_180102463(param_5);
      local_a0 = param_6;
    }
    local_c8 = &local_9c;
    local_c0 = &local_a0;
    local_b0 = (-(uint)(local_9c == local_a0) & 1) << 0x15 | param_9;
    if (param_8 != 0) {
      param_7 = param_8;
    }
    local_b8 = param_7;
    bVar4 = FUN_18013c8ae("##max",8,param_3,param_4);
    bVar3 = bVar3 | bVar4;
    FUN_18011a356();
    FUN_180119893(0,*(undefined4 *)(lVar2 + 0xe0c));
    uVar5 = FUN_180101d94(param_1,0);
    FUN_180132c30(param_1,uVar5,0);
    FUN_18011949a();
    FUN_18011834f();
  }
  else {
    bVar3 = 0;
  }
  if (DAT_180402640 != (local_90 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_90 ^ (ulonglong)auStack_e8);
  }
  return bVar3;
}

