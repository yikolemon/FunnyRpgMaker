/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d0de1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d0de1(uint param_1,float param_2,ulonglong param_3,ulonglong param_4,float param_5
                       ,float param_6)

{
  double dVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  uVar2 = param_3;
  if ((param_4 != param_3 && 0.0 < param_2) && (uVar2 = param_4, param_2 < DAT_1401c86c8)) {
    if (param_5 <= 0.0) {
      if ((param_1 & 0xfffffffe) == 8) {
        if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_a8)) {
          uVar2 = FUN_1400d11e4(param_3,param_4,param_2);
          return uVar2;
        }
        goto LAB_1400d1119;
      }
      if (DAT_1401c86c8 <= param_2) goto LAB_1400d104f;
      uVar2 = param_3 + (longlong)
                        ((double)(param_2 * (float)(longlong)(param_4 - param_3)) +
                        *(double *)
                         (&DAT_140211f00 + (ulonglong)((longlong)param_4 < (longlong)param_3) * 8));
    }
    else {
      local_78 = (double)(longlong)param_3;
      dVar1 = (double)param_5;
      if ((double)(_DAT_1401ced50 & (ulonglong)local_78) < dVar1) {
        fVar4 = param_5;
        if ((longlong)param_3 < 0) {
          fVar4 = (float)(_DAT_1401c8590 ^ (uint)param_5);
        }
        local_78 = (double)fVar4;
      }
      local_80 = (double)(longlong)param_4;
      if ((double)(_DAT_1401ced50 & (ulonglong)local_80) < dVar1) {
        fVar4 = param_5;
        if ((longlong)param_4 < 0) {
          fVar4 = (float)(_DAT_1401c8590 ^ (uint)param_5);
        }
        local_80 = (double)fVar4;
      }
      if ((longlong)param_4 < (longlong)param_3) {
        FUN_1400d11c8(&local_78,&local_80);
      }
      fVar4 = DAT_1401c86c8;
      if ((longlong)param_3 < 0 && param_4 == 0) {
        local_80 = (double)(float)((uint)param_5 ^ _DAT_1401c8590);
      }
      if ((longlong)param_4 < (longlong)param_3) {
        param_2 = DAT_1401c86c8 - param_2;
      }
      if ((longlong)(param_4 * param_3) < 0) {
        lVar3 = FUN_1400d11d9(param_3,param_4);
        uVar2 = DAT_1401c8630;
        fVar5 = (float)((uint)(float)lVar3 ^ _DAT_1401c8590) /
                (float)((uint)((float)(longlong)param_4 - (float)(longlong)param_3) & _DAT_1401ced40
                       );
        fVar7 = param_6 + fVar5;
        if ((fVar5 - param_6 <= param_2) && (param_2 <= fVar7)) {
LAB_1400d104f:
          uVar2 = 0;
          goto LAB_1400d107e;
        }
        if (param_2 < fVar5) {
          dVar6 = (double)FUN_1401a5d60((double)((ulonglong)local_78 ^ DAT_1401c8630) / dVar1,
                                        (double)(fVar4 - param_2 / (fVar5 - param_6)));
          uVar2 = (longlong)((double)((ulonglong)dVar1 ^ uVar2) * dVar6);
          goto LAB_1400d107e;
        }
        param_2 = (param_2 - fVar7) / (fVar4 - fVar7);
        dVar6 = local_80;
      }
      else {
        dVar6 = local_80;
        dVar1 = local_78;
        if ((longlong)(param_4 | param_3) < 0) {
          param_2 = DAT_1401c86c8 - param_2;
          dVar6 = local_78;
          dVar1 = local_80;
        }
      }
      dVar6 = (double)FUN_1401a5d60(dVar6 / dVar1,(double)param_2);
      uVar2 = (longlong)(dVar6 * dVar1);
    }
  }
LAB_1400d107e:
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_a8)) {
    return uVar2;
  }
LAB_1400d1119:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_a8);
}

