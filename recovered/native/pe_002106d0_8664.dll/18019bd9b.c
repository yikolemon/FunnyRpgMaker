/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019bd9b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18019bd9b(undefined8 param_1,undefined8 param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_a8;
  fVar1 = (float)((ulonglong)DAT_180327410 >> 0x20) * param_3;
  fVar2 = (float)param_2;
  fVar3 = (float)((ulonglong)param_2 >> 0x20);
  local_68 = CONCAT44(fVar1 + fVar3,(float)DAT_180327410 * param_3 + fVar2);
  local_70 = CONCAT44(param_3 * _UNK_180327424 + fVar3,param_3 * _DAT_180327420 + fVar2);
  local_80 = 0;
  local_88 = 0;
  FUN_180192d20();
  local_88 = param_4;
  FUN_18019bc7e(param_1,CONCAT44(DAT_180327430 * param_3 + fVar3,param_3 * DAT_1802dbb2c + fVar2),
                CONCAT44(DAT_1802bb8d8 * param_3,fVar1),3);
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_a8);
}

