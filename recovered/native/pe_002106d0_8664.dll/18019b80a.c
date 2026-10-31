/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019b80a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18019b80a(longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4,float param_5
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
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
  if (param_4 < 4) {
    fVar3 = DAT_1802bb8d8 * fVar1 * param_5;
    switch(param_4) {
    case 0:
      fVar3 = (float)((uint)fVar3 ^ _DAT_1802b0ce0);
    case 1:
      fVar8 = fVar3 * _DAT_1802df15c;
      fVar6 = DAT_1802de824 * fVar3;
      fVar7 = fVar3 * 0.0;
      fVar4 = fVar3 * _DAT_1803273c0;
      fVar5 = fVar3 * _UNK_1803273c4;
      fVar3 = fVar4;
      break;
    case 2:
      fVar3 = (float)((uint)fVar3 ^ _DAT_1802b0ce0);
    case 3:
      fVar6 = (float)DAT_1803273d0 * fVar3;
      fVar7 = (float)((ulonglong)DAT_1803273d0 >> 0x20) * fVar3;
      fVar4 = fVar3 * _DAT_1803273e0;
      fVar5 = fVar3 * _UNK_1803273f4;
      fVar3 = fVar3 * _DAT_1803273f0;
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
  fVar1 = fVar1 * DAT_1802dbb2c;
  fVar2 = fVar1 + (float)param_2;
  fVar1 = param_5 * fVar1 + (float)((ulonglong)param_2 >> 0x20);
  local_10 = CONCAT44(fVar5 + fVar1,fVar3 + fVar2);
  local_18 = CONCAT44(fVar8 + fVar1,fVar4 + fVar2);
  local_20 = CONCAT44(fVar1 + fVar7,fVar2 + fVar6);
  local_28 = param_3;
  FUN_180193394(fVar2 + fVar6,&local_20,&local_18);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

