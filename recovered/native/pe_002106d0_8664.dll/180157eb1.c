/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180157eb1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180157eb1(uint param_1,float param_2,ulonglong param_3,ulonglong param_4,float param_5
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
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_a8;
  uVar2 = param_3;
  if ((param_4 != param_3 && 0.0 < param_2) && (uVar2 = param_4, param_2 < DAT_1802ac570)) {
    if (param_5 <= 0.0) {
      if ((param_1 & 0xfffffffe) == 8) {
        if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_a8)) {
          uVar2 = FUN_1801582b4(param_3,param_4,param_2);
          return uVar2;
        }
        goto LAB_1801581e9;
      }
      if (DAT_1802ac570 <= param_2) goto LAB_18015811f;
      uVar2 = param_3 + (longlong)
                        ((double)(param_2 * (float)(longlong)(param_4 - param_3)) +
                        *(double *)
                         (&DAT_1802df190 + (ulonglong)((longlong)param_4 < (longlong)param_3) * 8));
    }
    else {
      local_78 = (double)(longlong)param_3;
      dVar1 = (double)param_5;
      if ((double)(_DAT_1802ac560 & (ulonglong)local_78) < dVar1) {
        fVar4 = param_5;
        if ((longlong)param_3 < 0) {
          fVar4 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
        }
        local_78 = (double)fVar4;
      }
      local_80 = (double)(longlong)param_4;
      if ((double)(_DAT_1802ac560 & (ulonglong)local_80) < dVar1) {
        fVar4 = param_5;
        if ((longlong)param_4 < 0) {
          fVar4 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
        }
        local_80 = (double)fVar4;
      }
      if ((longlong)param_4 < (longlong)param_3) {
        FUN_180158298(&local_78,&local_80);
      }
      fVar4 = DAT_1802ac570;
      if ((longlong)param_3 < 0 && param_4 == 0) {
        local_80 = (double)(float)((uint)param_5 ^ _DAT_1802b0ce0);
      }
      if ((longlong)param_4 < (longlong)param_3) {
        param_2 = DAT_1802ac570 - param_2;
      }
      if ((longlong)(param_4 * param_3) < 0) {
        lVar3 = FUN_1801582a9(param_3,param_4);
        uVar2 = DAT_1802b0dc0;
        fVar5 = (float)((uint)(float)lVar3 ^ _DAT_1802b0ce0) /
                (float)((uint)((float)(longlong)param_4 - (float)(longlong)param_3) & _DAT_1802ac550
                       );
        fVar7 = param_6 + fVar5;
        if ((fVar5 - param_6 <= param_2) && (param_2 <= fVar7)) {
LAB_18015811f:
          uVar2 = 0;
          goto LAB_18015814e;
        }
        if (param_2 < fVar5) {
          dVar6 = (double)FUN_180287e70((double)((ulonglong)local_78 ^ DAT_1802b0dc0) / dVar1,
                                        (double)(fVar4 - param_2 / (fVar5 - param_6)));
          uVar2 = (longlong)((double)((ulonglong)dVar1 ^ uVar2) * dVar6);
          goto LAB_18015814e;
        }
        param_2 = (param_2 - fVar7) / (fVar4 - fVar7);
        dVar6 = local_80;
      }
      else {
        dVar6 = local_80;
        dVar1 = local_78;
        if ((longlong)(param_4 | param_3) < 0) {
          param_2 = DAT_1802ac570 - param_2;
          dVar6 = local_78;
          dVar1 = local_80;
        }
      }
      dVar6 = (double)FUN_180287e70(dVar6 / dVar1,(double)param_2);
      uVar2 = (longlong)(dVar6 * dVar1);
    }
  }
LAB_18015814e:
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_a8)) {
    return uVar2;
  }
LAB_1801581e9:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_a8);
}

