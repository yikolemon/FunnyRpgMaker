/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029c420 */

void FUN_18029c420(undefined8 param_1,undefined4 param_2,float param_3,int param_4,
                  undefined4 param_5,undefined8 param_6,float param_7,float param_8,int param_9)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  float *local_100;
  float local_f8 [2];
  undefined8 local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_128;
  local_f0 = 0;
  local_f8[0] = param_3;
  iVar3 = FUN_18029c300(param_5,&local_f0);
  fVar1 = param_8;
  if (iVar3 != 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (param_9 == 2) {
      local_88 = (ulonglong)(uint)param_8;
    }
    local_78 = (ulonglong)(param_9 == 2);
    local_100 = local_f8;
    local_108 = &param_7;
    FUN_1802a0360(&local_b8,&local_f0,param_5,param_2);
  }
  cVar2 = FUN_180294d10();
  if ((cVar2 == '\0') || (param_4 == 0)) {
    FUN_18029ffa0(param_4);
  }
  else {
    local_d8 = (double)param_7;
    local_e8[1] = 0;
    local_d0 = (double)fVar1;
    local_c8 = (double)local_f8[0];
    local_e8[0] = param_4;
    local_e0 = param_1;
    iVar3 = FUN_180294d30(local_e8);
    if (iVar3 == 0) {
      FUN_18029ffa0(param_4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_128);
}

