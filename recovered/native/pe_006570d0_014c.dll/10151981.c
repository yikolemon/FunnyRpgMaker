/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151981 */

void __fastcall FUN_10151981(float *param_1,int param_2,float param_3,int param_4)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  local_38 = (float)FUN_10151d91();
  if (param_4 == 0 || param_3 != local_38) {
    param_1[1] = 0.0;
    FUN_10151b49(0);
    if ((int)param_3 < (int)local_18) {
      fVar5 = 0.0;
      fVar6 = 0.0;
      fVar7 = local_18;
    }
    else {
      local_30 = (int)local_38 + -1;
      local_34 = 0.0;
      fVar8 = local_18;
      fVar6 = 0.0;
      do {
        fVar2 = fVar8;
        fVar7 = local_18;
        local_3c = fVar6;
        if ((((*(char *)(param_2 + 0x5a) == '\x01') &&
             (**(float **)(param_2 + 4) == fVar2 && 0 < (int)**(float **)(param_2 + 4))) &&
            (cVar1 = FUN_10142d40(), fVar5 = local_34, fVar6 = local_3c, cVar1 != '\n')) ||
           ((fVar2 == local_38 && 0 < (int)local_38 &&
            (cVar1 = FUN_10142d40(), fVar5 = local_34, fVar6 = local_3c, cVar1 != '\n')))) break;
        param_1[1] = local_24 + param_1[1];
        if (fVar2 == local_38) {
          fVar7 = 0.0;
          fVar5 = local_3c;
          fVar6 = local_38;
          break;
        }
        FUN_10151b49(fVar2);
        local_34 = local_3c;
        fVar8 = (float)((int)fVar2 + (int)local_18);
        fVar5 = local_3c;
        fVar6 = fVar2;
        fVar7 = local_18;
      } while ((int)fVar2 + (int)local_18 <= (int)param_3);
    }
    param_1[3] = fVar6;
    param_1[4] = fVar7;
    param_1[2] = local_1c - local_20;
    param_1[5] = fVar5;
    *param_1 = local_2c;
    if ((int)fVar6 < (int)param_3) {
      iVar3 = 0;
      fVar8 = local_2c;
      do {
        FUN_10151bcb(iVar3);
        fVar8 = fVar8 + *param_1;
        *param_1 = fVar8;
        iVar4 = FUN_101518f3();
        iVar3 = iVar4 - (int)fVar6;
      } while (iVar4 < (int)param_3);
    }
  }
  else {
    FUN_10151b49(0);
    param_1[3] = 0.0;
    param_1[4] = param_3;
    param_1[2] = local_1c - local_20;
    *(ulonglong *)param_1 = (ulonglong)local_28;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

