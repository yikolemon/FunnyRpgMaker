/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b6405 */

byte FUN_1400b6405(undefined8 param_1,float *param_2,float *param_3,undefined4 param_4,float param_5
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
  
  lVar2 = DAT_140f2a910;
  local_90 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar2 + 0x1608) + 0x10e) == '\0') {
    FUN_1400912b0();
    FUN_1400937ae();
    uVar6 = FUN_1400936b2();
    FUN_140093452(2,uVar6);
    fVar1 = (float)(~-(uint)(param_6 <= param_5) & (uint)param_5 |
                   DAT_1402112e0 & -(uint)(param_6 <= param_5));
    local_98 = *param_3;
    local_94 = fVar1;
    if (param_5 < param_6) {
      local_98 = (float)FUN_14004863e(param_6);
    }
    local_c0 = &local_98;
    local_b0 = (-(uint)(fVar1 == local_98) & 1) << 0x15 | param_9;
    local_b8 = param_7;
    local_c8 = &local_94;
    bVar3 = FUN_1400b57de("##min",8,param_2,param_4);
    FUN_14009366e();
    FUN_140092bab(0,*(undefined4 *)(lVar2 + 0xe0c));
    local_9c = *param_2;
    local_a0 = DAT_1402112e4;
    if (param_5 < param_6) {
      local_9c = (float)FUN_14007b71f(param_5);
      local_a0 = param_6;
    }
    local_c8 = &local_9c;
    local_c0 = &local_a0;
    local_b0 = (-(uint)(local_9c == local_a0) & 1) << 0x15 | param_9;
    if (param_8 != 0) {
      param_7 = param_8;
    }
    local_b8 = param_7;
    bVar4 = FUN_1400b57de("##max",8,param_3,param_4);
    bVar3 = bVar3 | bVar4;
    FUN_14009366e();
    FUN_140092bab(0,*(undefined4 *)(lVar2 + 0xe0c));
    uVar5 = FUN_14007b050(param_1,0);
    FUN_1400abb60(param_1,uVar5,0);
    FUN_1400927b2();
    FUN_140091667();
  }
  else {
    bVar3 = 0;
  }
  if (DAT_140f17b40 != (local_90 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_90 ^ (ulonglong)auStack_e8);
  }
  return bVar3;
}

