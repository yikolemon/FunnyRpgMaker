/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ad26b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ad26b(undefined8 param_1,undefined8 param_2,float param_3,undefined4 param_4)

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
  
  local_60 = ram0x000140613b10 ^ (ulonglong)auStack_a8;
  fVar1 = (float)((ulonglong)DAT_1405388e0 >> 0x20) * param_3;
  fVar2 = (float)param_2;
  fVar3 = (float)((ulonglong)param_2 >> 0x20);
  local_68 = CONCAT44(fVar1 + fVar3,(float)DAT_1405388e0 * param_3 + fVar2);
  local_70 = CONCAT44(param_3 * _UNK_1405388f4 + fVar3,param_3 * _DAT_1405388f0 + fVar2);
  local_80 = 0;
  local_88 = 0;
  FUN_1403a41f0();
  local_88 = param_4;
  FUN_1403ad14e(param_1,CONCAT44(DAT_140538900 * param_3 + fVar3,param_3 * DAT_1404ecffc + fVar2),
                CONCAT44(DAT_1404ccda8 * param_3,fVar1),3);
  if (ram0x000140613b10 == (local_60 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_60 ^ (ulonglong)auStack_a8);
}

