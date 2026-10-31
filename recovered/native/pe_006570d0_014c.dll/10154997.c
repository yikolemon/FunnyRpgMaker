/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10154997 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10154997(uint param_1,float param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 float param_7)

{
  float10 fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  uint local_58;
  int local_50;
  double local_28;
  double local_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  auVar3._4_4_ = param_4;
  auVar3._0_4_ = param_3;
  local_58 = param_3;
  if (((param_5 != param_3 || param_6 != param_4) && 0.0 < param_2) &&
     (local_58 = param_5, param_2 < DAT_1028b430)) {
    if (0.0 < param_7) {
      auVar3._8_4_ = param_4;
      auVar3._12_4_ = DAT_102b96b0._4_4_;
      dVar5 = (auVar3._8_8_ - _UNK_102b96c8) +
              ((double)CONCAT44((undefined4)DAT_102b96b0,param_3) - _DAT_102b96c0);
      local_28 = (double)param_7;
      local_20 = local_28;
      if (local_28 <= dVar5) {
        local_20 = dVar5;
      }
      auVar4._4_4_ = param_6;
      auVar4._0_4_ = param_5;
      auVar4._8_4_ = param_6;
      auVar4._12_4_ = DAT_102b96b0._4_4_;
      dVar5 = (auVar4._8_8_ - _UNK_102b96c8) +
              ((double)CONCAT44((undefined4)DAT_102b96b0,param_5) - _DAT_102b96c0);
      if (local_28 <= dVar5) {
        local_28 = dVar5;
      }
      if (param_6 < param_4 || param_6 - param_4 < (uint)(param_5 < param_3)) {
        FUN_1015466a(&local_20,&local_28);
        param_2 = DAT_1028b430 - param_2;
      }
      dVar5 = local_20;
      fVar1 = (float10)FUN_1026fab0(local_28 / local_20,(double)param_2);
      dVar2 = DAT_102b96e0;
      if (dVar5 * (double)fVar1 < DAT_102b96e0) {
        dVar2 = 0.0;
      }
      local_58 = (uint)(longlong)ROUND(dVar5 * (double)fVar1 - dVar2);
    }
    else if ((param_1 & 0xfffffffe) == 8) {
      local_58 = FUN_10154d4d(param_3,param_4,param_5,param_6,param_2);
    }
    else {
      local_58 = 0;
      if (param_2 < DAT_1028b430) {
        dVar5 = DAT_102b96d0;
        if (param_4 <= param_6 && (uint)(param_5 < param_3) <= param_6 - param_4) {
          dVar5 = DAT_102b96d8;
        }
        local_50 = (int)(longlong)
                        ROUND(dVar5 + (double)(param_2 *
                                              (float)CONCAT44((param_6 - param_4) -
                                                              (uint)(param_5 < param_3),
                                                              param_5 - param_3)));
        local_58 = param_3 + local_50;
      }
    }
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

