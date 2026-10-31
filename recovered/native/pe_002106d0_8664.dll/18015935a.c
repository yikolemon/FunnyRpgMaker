/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015935a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_18015935a(uint param_1,float param_2,double param_3,double param_4,float param_5,
                    float param_6)

{
  double dVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_180402640 ^ (ulonglong)auStack_b8;
  dVar5 = param_3;
  if (0.0 < param_2) {
    if (((param_3 != param_4) || (NAN(param_3) || NAN(param_4))) &&
       (dVar5 = param_4, param_2 < DAT_1802ac570)) {
      if (param_5 <= 0.0) {
        if ((param_1 & 0xfffffffe) == 8) {
          if (DAT_180402640 == (local_80 ^ (ulonglong)auStack_b8)) {
            dVar5 = (double)FUN_1801597f2(param_3,param_4,param_2);
            return dVar5;
          }
          goto LAB_18015970f;
        }
        dVar5 = 0.0;
        if (param_2 < DAT_1802ac570) {
          dVar5 = (param_4 - param_3) * (double)param_2 +
                  *(double *)(&DAT_1802df190 + (ulonglong)(param_4 < param_3) * 8) + param_3;
        }
      }
      else {
        dVar1 = (double)param_5;
        local_88 = param_3;
        if ((double)(_DAT_1802ac560 & (ulonglong)param_3) < dVar1) {
          fVar3 = param_5;
          if (param_3 < 0.0) {
            fVar3 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
          }
          local_88 = (double)fVar3;
        }
        local_90 = param_4;
        if ((double)(_DAT_1802ac560 & (ulonglong)param_4) < dVar1) {
          fVar3 = param_5;
          if (param_4 < 0.0) {
            fVar3 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
          }
          local_90 = (double)fVar3;
        }
        if (param_4 < param_3) {
          FUN_180158298(&local_88,&local_90);
        }
        fVar3 = DAT_1802ac570;
        if (((param_3 < 0.0) && (param_4 == 0.0)) && (!NAN(param_4))) {
          local_90 = (double)(float)((uint)param_5 ^ _DAT_1802b0ce0);
        }
        if (param_4 < param_3) {
          param_2 = DAT_1802ac570 - param_2;
        }
        if (0.0 <= param_3 * param_4) {
          if ((param_3 < 0.0) || (param_4 < 0.0)) {
            uVar6 = SUB84(local_90,0);
            uVar7 = (undefined4)((ulonglong)local_90 >> 0x20);
            param_2 = DAT_1802ac570 - param_2;
            dVar5 = local_88;
          }
          else {
            uVar6 = SUB84(local_88,0);
            uVar7 = (undefined4)((ulonglong)local_88 >> 0x20);
            dVar5 = local_90;
          }
          dVar5 = (double)FUN_180287e70(dVar5 / (double)CONCAT44(uVar7,uVar6),(double)param_2);
          dVar5 = dVar5 * (double)CONCAT44(uVar7,uVar6);
        }
        else {
          dVar5 = (double)FUN_1801597ed(param_3,param_4);
          uVar2 = DAT_1802b0dc0;
          fVar4 = (float)((uint)(float)dVar5 ^ _DAT_1802b0ce0) /
                  (float)((uint)((float)param_4 - (float)param_3) & _DAT_1802ac550);
          fVar8 = param_6 + fVar4;
          if ((param_2 < fVar4 - param_6) || (dVar5 = 0.0, fVar8 < param_2)) {
            if (fVar4 <= param_2) {
              dVar5 = (double)FUN_180287e70(local_90 / dVar1,
                                            (double)((param_2 - fVar8) / (fVar3 - fVar8)));
              dVar5 = dVar5 * dVar1;
            }
            else {
              dVar5 = (double)FUN_180287e70((double)((ulonglong)local_88 ^ DAT_1802b0dc0) / dVar1,
                                            (double)(fVar3 - param_2 / (fVar4 - param_6)));
              dVar5 = (double)((ulonglong)dVar1 ^ uVar2) * dVar5;
            }
          }
        }
      }
    }
  }
  if (DAT_180402640 == (local_80 ^ (ulonglong)auStack_b8)) {
    return dVar5;
  }
LAB_18015970f:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_80 ^ (ulonglong)auStack_b8);
}

