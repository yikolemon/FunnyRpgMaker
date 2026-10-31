/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e6d7e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e6d7e(longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4,float param_5
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
  if (param_4 < 4) {
    fVar3 = DAT_140210024 * fVar1 * param_5;
    switch(param_4) {
    case 0:
      fVar3 = (float)((uint)fVar3 ^ _DAT_1401c8590);
    case 1:
      fVar8 = fVar3 * _DAT_140211ecc;
      fVar6 = DAT_140211584 * fVar3;
      fVar7 = fVar3 * 0.0;
      fVar4 = fVar3 * _DAT_140e8c790;
      fVar5 = fVar3 * _UNK_140e8c794;
      fVar3 = fVar4;
      break;
    case 2:
      fVar3 = (float)((uint)fVar3 ^ _DAT_1401c8590);
    case 3:
      fVar6 = (float)DAT_140e8c7a0 * fVar3;
      fVar7 = (float)((ulonglong)DAT_140e8c7a0 >> 0x20) * fVar3;
      fVar4 = fVar3 * _DAT_140e8c7b0;
      fVar5 = fVar3 * _UNK_140e8c7c4;
      fVar3 = fVar3 * _DAT_140e8c7c0;
      fVar8 = fVar5;
    }
  }
  else {
    fVar5 = 0.0;
    fVar4 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar3 = 0.0;
    fVar8 = 0.0;
  }
  fVar1 = fVar1 * DAT_1401c86a0;
  fVar2 = fVar1 + (float)param_2;
  fVar1 = param_5 * fVar1 + (float)((ulonglong)param_2 >> 0x20);
  local_10 = CONCAT44(fVar5 + fVar1,fVar3 + fVar2);
  local_18 = CONCAT44(fVar8 + fVar1,fVar4 + fVar2);
  local_20 = CONCAT44(fVar1 + fVar7,fVar2 + fVar6);
  local_28 = param_3;
  FUN_1400de908(fVar2 + fVar6,&local_20,&local_18);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_48);
}

