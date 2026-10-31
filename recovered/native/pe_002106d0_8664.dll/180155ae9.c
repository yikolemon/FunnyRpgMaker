/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180155ae9 */

void FUN_180155ae9(float *param_1,longlong param_2,float param_3,int param_4)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [36];
  int local_64;
  float local_60;
  uint local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  fVar3 = (float)FUN_180155f5d(param_2);
  if (param_4 == 0 || param_3 != fVar3) {
    param_1[1] = 0.0;
    FUN_180155cce(&local_60,param_2,0);
    if ((int)param_3 < (int)local_4c) {
      fVar6 = local_4c;
      fVar7 = 0.0;
      fVar8 = 0.0;
    }
    else {
      local_64 = (int)fVar3 + -1;
      fVar7 = 0.0;
      fVar4 = local_4c;
      fVar8 = 0.0;
      do {
        fVar6 = local_4c;
        if ((((*(char *)(param_2 + 0x76) == '\x01') &&
             (**(float **)(param_2 + 8) == fVar4 && 0 < (int)**(float **)(param_2 + 8))) &&
            (cVar2 = FUN_1801476cb(param_2,(int)fVar4 + -1), cVar2 != '\n')) ||
           ((fVar4 == fVar3 && 0 < (int)fVar3 &&
            (cVar2 = FUN_1801476cb(param_2,local_64), cVar2 != '\n')))) break;
        param_1[1] = local_58 + param_1[1];
        fVar8 = fVar7;
        if (fVar4 == fVar3) {
          fVar6 = 0.0;
          fVar7 = fVar3;
          break;
        }
        FUN_180155cce(&local_60,param_2,fVar4);
        fVar1 = (float)((int)local_4c + (int)fVar4);
        fVar6 = local_4c;
        fVar7 = fVar4;
        fVar4 = fVar1;
      } while ((int)fVar1 <= (int)param_3);
    }
    param_1[3] = fVar7;
    param_1[4] = fVar6;
    param_1[2] = local_50 - local_54;
    param_1[5] = fVar8;
    *param_1 = local_60;
    if ((int)fVar7 < (int)param_3) {
      iVar5 = 0;
      fVar3 = fVar7;
      do {
        fVar8 = (float)FUN_180155d79(param_2,fVar7,iVar5);
        *param_1 = fVar8 + *param_1;
        fVar3 = (float)FUN_180155a37(param_2,fVar3);
        iVar5 = (int)fVar3 - (int)fVar7;
      } while ((int)fVar3 < (int)param_3);
    }
  }
  else {
    FUN_180155cce(&local_60,param_2,0);
    param_1[3] = 0.0;
    param_1[4] = param_3;
    param_1[2] = local_50 - local_54;
    *(ulonglong *)param_1 = (ulonglong)local_5c;
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

