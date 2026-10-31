/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10153fc5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10153fc5(uint param_1,float param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 float param_7,float param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float10 fVar7;
  float fVar8;
  longlong lVar9;
  float fVar10;
  uint local_f8;
  uint local_f0;
  uint local_e8;
  uint local_e0;
  int local_d8;
  double local_28;
  double local_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_e8 = param_3;
  if (((param_5 != param_3 || param_6 != param_4) && 0.0 < param_2) &&
     (local_e8 = param_5, param_2 < DAT_1028b430)) {
    if (0.0 < param_7) {
      local_20 = (double)CONCAT44(param_4,param_3);
      dVar1 = (double)param_7;
      if ((double)(_DAT_1028b420 & (ulonglong)local_20) < dVar1) {
        fVar8 = param_7;
        if ((int)param_4 < 0) {
          fVar8 = (float)(_DAT_1028f620 ^ (uint)param_7);
        }
        local_20 = (double)fVar8;
      }
      local_28 = (double)CONCAT44(param_6,param_5);
      if ((double)(_DAT_1028b420 & (ulonglong)local_28) < dVar1) {
        fVar8 = param_7;
        if ((int)param_6 < 0) {
          fVar8 = (float)(_DAT_1028f620 ^ (uint)param_7);
        }
        local_28 = (double)fVar8;
      }
      bVar6 = SBORROW4(param_6,param_4) != SBORROW4(param_6 - param_4,(uint)(param_5 < param_3));
      bVar5 = (int)((param_6 - param_4) - (uint)(param_5 < param_3)) < 0;
      if (bVar6 != bVar5) {
        FUN_1015466a(&local_20,&local_28);
      }
      dVar3 = local_20;
      if ((int)param_4 < 0 && (param_5 == 0 && param_6 == 0)) {
        local_28 = (double)(float)((uint)param_7 ^ _DAT_1028f620);
      }
      dVar2 = local_28;
      if (bVar6 != bVar5) {
        param_2 = DAT_1028b430 - param_2;
      }
      if ((int)(param_6 * param_3 +
               param_5 * param_4 + (int)((ulonglong)param_5 * (ulonglong)param_3 >> 0x20)) < 0) {
        lVar9 = FUN_10154683(param_3,param_4,param_5,param_6);
        fVar8 = (float)((uint)(float)lVar9 ^ _DAT_1028f620) /
                (float)((uint)((float)CONCAT44(param_6,param_5) - (float)CONCAT44(param_4,param_3))
                       & _DAT_1028b410);
        fVar10 = param_8 + fVar8;
        if ((param_2 < fVar8 - param_8) || (local_e8 = 0, fVar10 < param_2)) {
          if (fVar8 <= param_2) {
            fVar7 = (float10)FUN_1026fab0(local_28 / dVar1,
                                          (double)((param_2 - fVar10) / (DAT_1028b430 - fVar10)));
            local_f0 = (uint)(longlong)ROUND(dVar1 * (double)fVar7);
            local_e8 = local_f0;
          }
          else {
            fVar7 = (float10)FUN_1026fab0((double)((ulonglong)local_20 ^ _DAT_1028f730) / dVar1,
                                          (double)(DAT_1028b430 - param_2 / (fVar8 - param_8)));
            local_f8 = (uint)(longlong)
                             ROUND((double)((ulonglong)dVar1 ^ _DAT_1028f730) * (double)fVar7);
            local_e8 = local_f8;
          }
        }
      }
      else if ((int)(param_6 | param_4) < 0) {
        fVar7 = (float10)FUN_1026fab0(local_20 / local_28,(double)(DAT_1028b430 - param_2));
        local_e0 = (uint)(longlong)ROUND(dVar2 * (double)fVar7);
        local_e8 = local_e0;
      }
      else {
        fVar7 = (float10)FUN_1026fab0(local_28 / local_20,(double)param_2);
        local_e8 = (uint)(longlong)ROUND(dVar3 * (double)fVar7);
      }
    }
    else if ((param_1 & 0xfffffffe) == 8) {
      local_e8 = FUN_101546a4(param_3,param_4,param_5,param_6,param_2);
    }
    else {
      local_e8 = 0;
      if (param_2 < DAT_1028b430) {
        iVar4 = (param_6 - param_4) - (uint)(param_5 < param_3);
        local_d8 = (int)(longlong)
                        ROUND((double)(param_2 * (float)CONCAT44(iVar4,param_5 - param_3)) +
                              *(double *)
                               (&DAT_102b96a0 +
                               (uint)((SBORROW4(param_6,param_4) !=
                                      SBORROW4(param_6 - param_4,(uint)(param_5 < param_3))) !=
                                     iVar4 < 0) * 8));
        local_e8 = param_3 + local_d8;
      }
    }
  }
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_e8;
}

