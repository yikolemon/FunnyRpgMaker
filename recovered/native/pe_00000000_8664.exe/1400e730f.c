/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e730f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e730f(undefined8 param_1,undefined8 param_2,float param_3,undefined4 param_4)

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
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  fVar1 = (float)((ulonglong)DAT_140e8c7e0 >> 0x20) * param_3;
  fVar2 = (float)param_2;
  fVar3 = (float)((ulonglong)param_2 >> 0x20);
  local_68 = CONCAT44(fVar1 + fVar3,(float)DAT_140e8c7e0 * param_3 + fVar2);
  local_70 = CONCAT44(param_3 * _UNK_140e8c7f4 + fVar3,param_3 * _DAT_140e8c7f0 + fVar2);
  local_80 = 0;
  local_88 = 0;
  FUN_1400de294();
  local_88 = param_4;
  FUN_1400e71f2(param_1,CONCAT44(DAT_140e8c800 * param_3 + fVar3,param_3 * DAT_1401c86a0 + fVar2),
                CONCAT44(DAT_140210024 * param_3,fVar1),3);
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_a8);
}

