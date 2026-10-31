/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101531fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101531fa(uint param_1,float param_2,uint param_3,uint param_4,float param_5,float param_6)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_58;
  double local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float local_14;
  float local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_58;
  uVar1 = param_3;
  if ((param_4 != param_3 && 0.0 < param_2) && (uVar1 = param_4, param_2 < DAT_1028b430)) {
    if (param_5 <= 0.0) {
      if ((param_1 & 0xfffffffe) == 8) {
        local_50 = (double)CONCAT44(local_50._4_4_,param_2);
        local_58 = (double)CONCAT44(param_4,param_3);
        uVar1 = FUN_100faccc();
      }
      else {
        uVar1 = 0;
        if (param_2 < DAT_1028b430) {
          uVar1 = (int)(param_2 * (float)(int)(param_4 - param_3) +
                       *(float *)(&DAT_102b9698 + (uint)((int)param_4 < (int)param_3) * 4)) +
                  param_3;
        }
      }
    }
    else {
      local_34 = (float)(int)param_3;
      local_10 = local_34;
      if (((float)(_DAT_1028b410 & (uint)local_34) < param_5) &&
         (local_10 = param_5, (int)param_3 < 0)) {
        local_10 = (float)(_DAT_1028f620 ^ (uint)param_5);
      }
      local_24 = (float)(int)param_4;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      local_14 = local_24;
      if (((float)(_DAT_1028b410 & (uint)local_24) < param_5) &&
         (local_14 = param_5, (int)param_4 < 0)) {
        local_14 = (float)(_DAT_1028f620 ^ (uint)param_5);
      }
      if ((int)param_4 < (int)param_3) {
        local_58 = (double)CONCAT44(&local_14,&local_10);
        FUN_100faec4();
      }
      if ((int)param_3 < 0 && param_4 == 0) {
        local_14 = (float)(_DAT_1028f620 ^ (uint)param_5);
      }
      if ((int)param_4 < (int)param_3) {
        param_2 = DAT_1028b430 - param_2;
      }
      if ((int)(param_4 * param_3) < 0) {
        local_58 = (double)CONCAT44(param_4,param_3);
        local_48 = param_2;
        iVar2 = FUN_100fa683();
        fVar4 = (float)((uint)(float)iVar2 ^ _DAT_1028f620) /
                (float)((uint)(local_24 - local_34) & _DAT_1028b410);
        fVar5 = param_6 + fVar4;
        if ((fVar4 - param_6 <= local_48) && (uVar1 = 0, local_48 <= fVar5)) goto LAB_10153521;
        if (fVar4 <= local_48) {
          local_50 = (double)((local_48 - fVar5) / (DAT_1028b430 - fVar5));
          local_58 = (double)(local_14 / param_5);
          fVar3 = (float10)FUN_1026fab0();
          local_40 = (float)fVar3;
          param_5 = param_5 * local_40;
        }
        else {
          local_50 = (double)(DAT_1028b430 - local_48 / (fVar4 - param_6));
          local_58 = (double)((float)((uint)local_10 ^ _DAT_1028f620) / param_5);
          fVar3 = (float10)FUN_1026fab0();
          local_44 = (float)fVar3;
          param_5 = (float)((uint)local_44 ^ _DAT_1028f620) * param_5;
        }
      }
      else if ((int)(param_4 | param_3) < 0) {
        local_34 = local_14;
        local_50 = (double)(DAT_1028b430 - param_2);
        local_58 = (double)(local_10 / local_14);
        fVar3 = (float10)FUN_1026fab0();
        local_38 = (float)fVar3;
        param_5 = local_34 * local_38;
      }
      else {
        local_34 = local_10;
        local_50 = (double)param_2;
        local_58 = (double)(local_14 / local_10);
        fVar3 = (float10)FUN_1026fab0();
        local_3c = (float)fVar3;
        param_5 = local_34 * local_3c;
      }
      uVar1 = (int)param_5;
    }
  }
LAB_10153521:
  if (DAT_10388d00 != (local_c ^ (uint)&local_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar1;
}

