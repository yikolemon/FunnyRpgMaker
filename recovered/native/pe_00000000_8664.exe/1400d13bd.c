/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d13bd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d13bd(uint param_1,float param_2,ulonglong param_3,ulonglong param_4,float param_5
                       )

{
  ulonglong uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar1 = param_3;
  if ((param_4 != param_3 && 0.0 < param_2) && (uVar1 = param_4, param_2 < DAT_1401c86c8)) {
    if (param_5 <= 0.0) {
      if ((param_1 & 0xfffffffe) == 8) {
        if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_88)) {
          uVar1 = FUN_1400d1681(param_3,param_4);
          return uVar1;
        }
        goto LAB_1400d15a6;
      }
      if (DAT_1401c86c8 <= param_2) {
        uVar1 = 0;
      }
      else {
        dVar5 = DAT_140211f30;
        if (param_3 <= param_4) {
          dVar5 = DAT_140211f38;
        }
        uVar1 = param_3 + (longlong)
                          (dVar5 + (double)(param_2 * (float)(longlong)(param_4 - param_3)));
      }
    }
    else {
      auVar3._8_4_ = (int)(param_3 >> 0x20);
      auVar3._0_8_ = param_3;
      auVar3._12_4_ = DAT_140211f10._4_4_;
      dVar5 = (auVar3._8_8_ - _UNK_140211f28) +
              ((double)CONCAT44((undefined4)DAT_140211f10,(int)param_3) - _DAT_140211f20);
      local_60 = (double)param_5;
      local_58 = local_60;
      if (local_60 <= dVar5) {
        local_58 = dVar5;
      }
      auVar4._8_4_ = (int)(param_4 >> 0x20);
      auVar4._0_8_ = param_4;
      auVar4._12_4_ = DAT_140211f10._4_4_;
      dVar5 = (auVar4._8_8_ - _UNK_140211f28) +
              ((double)CONCAT44((undefined4)DAT_140211f10,(int)param_4) - _DAT_140211f20);
      if (local_60 <= dVar5) {
        local_60 = dVar5;
      }
      if (param_4 < param_3) {
        FUN_1400d11c8(&local_58,&local_60);
        param_2 = DAT_1401c86c8 - param_2;
      }
      dVar5 = local_58;
      dVar2 = (double)FUN_1401a5d60(local_60 / local_58,(double)param_2);
      uVar1 = (ulonglong)(dVar2 * dVar5);
      uVar1 = (longlong)(dVar2 * dVar5 - _DAT_140211f40) & (longlong)uVar1 >> 0x3f | uVar1;
    }
  }
  if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_88)) {
    return uVar1;
  }
LAB_1400d15a6:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_88);
}

