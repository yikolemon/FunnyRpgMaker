/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404ad8f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404ad8f0(undefined8 param_1,undefined4 param_2,float param_3,int param_4,
                  undefined4 param_5,undefined8 param_6,float param_7,float param_8,int param_9)

{
  char cVar1;
  int iVar2;
  float fVar3;
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
  
  local_48 = ram0x000140613b10 ^ (ulonglong)auStack_128;
  local_f0 = 0;
  local_f8[0] = param_3;
  iVar2 = FUN_1404ad7d0(param_5,&local_f0);
  fVar3 = param_8;
  if (iVar2 != 0) {
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
    FUN_1404b1830(&local_b8,&local_f0,param_5,param_2);
  }
  cVar1 = FUN_1404a61e0();
  if ((cVar1 == '\0') || (param_4 == 0)) {
    FUN_1404b1470(param_4);
    fVar3 = local_f8[0];
  }
  else {
    local_d8 = (double)param_7;
    local_e8[1] = 0;
    local_d0 = (double)fVar3;
    local_c8 = (double)local_f8[0];
    local_e8[0] = param_4;
    local_e0 = param_1;
    iVar2 = FUN_1404a6200(local_e8);
    if (iVar2 == 0) {
      FUN_1404b1470(param_4);
    }
    fVar3 = (float)local_c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(fVar3);
}

