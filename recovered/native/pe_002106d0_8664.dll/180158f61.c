/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180158f61 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180158f61(undefined8 param_1,double param_2,double param_3,double param_4,float param_5,
             float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  uint uVar8;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_180402640 ^ (ulonglong)auStack_d8;
  fVar7 = 0.0;
  uVar8 = 0;
  local_b0 = param_3;
  local_a8 = param_4;
  if ((param_3 != param_4) || (NAN(param_3) || NAN(param_4))) {
    dVar5 = param_4;
    dVar6 = param_3;
    if (param_3 < param_4) {
      dVar5 = param_3;
      dVar6 = param_4;
    }
    dVar5 = (double)FUN_1801597d3(param_2,dVar5,dVar6);
    if (param_5 <= 0.0) {
      uVar8 = 0;
      fVar7 = (float)((dVar5 - param_3) / (param_4 - param_3));
    }
    else {
      dVar6 = param_3;
      if (param_4 < param_3) {
        FUN_180158298(&local_b0,&local_a8);
        dVar6 = local_b0;
      }
      uVar4 = DAT_1802b0dc0;
      dVar3 = (double)param_5;
      dVar1 = dVar6;
      if ((double)(_DAT_1802ac560 & (ulonglong)dVar6) < dVar3) {
        fVar7 = param_5;
        if (dVar6 < 0.0) {
          fVar7 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
        }
        dVar1 = (double)fVar7;
      }
      dVar2 = local_a8;
      if ((double)(_DAT_1802ac560 & (ulonglong)local_a8) < dVar3) {
        fVar7 = param_5;
        if (local_a8 < 0.0) {
          fVar7 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
        }
        dVar2 = (double)fVar7;
      }
      if (((dVar6 != 0.0) || (NAN(dVar6))) || (0.0 <= local_a8)) {
        if (((dVar6 < 0.0) && (local_a8 == 0.0)) && (!NAN(local_a8))) {
          dVar2 = (double)(float)((uint)param_5 ^ _DAT_1802b0ce0);
        }
      }
      else {
        dVar1 = (double)(float)((uint)param_5 ^ _DAT_1802b0ce0);
      }
      uVar8 = 0;
      fVar7 = 0.0;
      if (dVar1 < dVar5) {
        if (dVar2 <= dVar5) {
          uVar8 = 0;
          fVar7 = DAT_1802ac570;
        }
        else if (0.0 <= dVar6 * local_a8) {
          if ((dVar6 < 0.0) || (local_a8 < 0.0)) {
            dVar5 = (double)FUN_1802875a0(dVar5 / dVar2);
            dVar6 = (double)FUN_1802875a0(dVar1 / dVar2);
            uVar8 = 0;
            fVar7 = DAT_1802ac570 - (float)(dVar5 / dVar6);
          }
          else {
            dVar5 = (double)FUN_1802875a0(dVar5 / dVar1);
            dVar6 = (double)FUN_1802875a0(dVar2 / dVar1);
            uVar8 = 0;
            fVar7 = (float)(dVar5 / dVar6);
          }
        }
        else {
          uVar8 = _UNK_1802b0ce4 ^ (uint)((ulonglong)dVar6 >> 0x20);
          fVar7 = (float)(_DAT_1802b0ce0 ^ (uint)(float)dVar6) / ((float)local_a8 - (float)dVar6);
          if ((param_2 != 0.0) || (NAN(param_2))) {
            if (0.0 <= param_2) {
              dVar5 = (double)FUN_1802875a0(dVar5 / dVar3);
              dVar6 = (double)FUN_1802875a0(dVar2 / dVar3);
              uVar8 = 0;
              fVar7 = (DAT_1802ac570 - (param_6 + fVar7)) * (float)(dVar5 / dVar6) + param_6 + fVar7
              ;
            }
            else {
              dVar5 = (double)FUN_1802875a0((double)((ulonglong)dVar5 ^ DAT_1802b0dc0) / dVar3);
              dVar6 = (double)FUN_1802875a0((double)((ulonglong)dVar1 ^ uVar4) / dVar3);
              fVar7 = (fVar7 - param_6) * (DAT_1802ac570 - (float)(dVar5 / dVar6));
            }
          }
        }
      }
      if (param_4 < param_3) {
        fVar7 = DAT_1802ac570 - fVar7;
        uVar8 = 0;
      }
    }
  }
  if (DAT_180402640 != (local_a0 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_a0 ^ (ulonglong)auStack_d8);
  }
  return CONCAT44(uVar8,fVar7);
}

