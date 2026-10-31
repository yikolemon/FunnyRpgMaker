/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180157b38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180157b38(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4,float param_5,
             float param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 in_XMM1_Qa;
  uint uVar8;
  float fVar9;
  uint uVar10;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  
  uVar8 = (uint)((ulonglong)in_XMM1_Qa >> 0x20);
  local_80 = DAT_180402640 ^ (ulonglong)auStack_b8;
  fVar9 = 0.0;
  uVar10 = 0;
  local_90 = param_3;
  local_88 = param_4;
  if (param_4 - param_3 != 0) {
    uVar2 = param_4;
    uVar3 = param_3;
    if ((longlong)param_3 <= (longlong)param_4) {
      uVar2 = param_3;
      uVar3 = param_4;
    }
    lVar1 = FUN_1801354da(param_2,uVar2,uVar3);
    if (param_5 <= 0.0) {
      uVar10 = 0;
      fVar9 = (float)((double)(longlong)(lVar1 - param_3) / (double)(longlong)(param_4 - param_3));
    }
    else {
      uVar2 = param_3;
      if ((longlong)param_4 < (longlong)param_3) {
        FUN_180145a47(&local_90,&local_88);
        uVar2 = local_90;
      }
      uVar3 = DAT_1802b0dc0;
      dVar6 = (double)(longlong)uVar2;
      dVar5 = (double)param_5;
      if ((double)(_DAT_1802ac560 & (ulonglong)dVar6) < dVar5) {
        fVar9 = param_5;
        if ((longlong)uVar2 < 0) {
          fVar9 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
        }
        dVar6 = (double)fVar9;
      }
      dVar7 = (double)(longlong)local_88;
      if ((double)(_DAT_1802ac560 & (ulonglong)dVar7) < dVar5) {
        fVar9 = param_5;
        if ((longlong)local_88 < 0) {
          fVar9 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
        }
        dVar7 = (double)fVar9;
      }
      if ((longlong)local_88 < 0 && uVar2 == 0) {
        dVar6 = (double)(float)((uint)param_5 ^ _DAT_1802b0ce0);
      }
      else if ((longlong)uVar2 < 0 && local_88 == 0) {
        dVar7 = (double)(float)((uint)param_5 ^ _DAT_1802b0ce0);
      }
      dVar4 = (double)lVar1;
      uVar10 = 0;
      fVar9 = 0.0;
      if (dVar6 < dVar4) {
        if (dVar7 <= dVar4) {
          uVar10 = 0;
          fVar9 = DAT_1802ac570;
        }
        else if ((longlong)(local_88 * uVar2) < 0) {
          uVar10 = _UNK_1802b0ce4 ^ uVar8;
          fVar9 = (float)(_DAT_1802b0ce0 ^ (uint)(float)(longlong)uVar2) /
                  ((float)(longlong)local_88 - (float)(longlong)uVar2);
          if (param_2 != 0) {
            if (param_2 < 0) {
              dVar7 = (double)FUN_1802875a0((double)((ulonglong)dVar4 ^ DAT_1802b0dc0) / dVar5);
              dVar6 = (double)FUN_1802875a0((double)((ulonglong)dVar6 ^ uVar3) / dVar5);
              fVar9 = (fVar9 - param_6) * (DAT_1802ac570 - (float)(dVar7 / dVar6));
            }
            else {
              dVar6 = (double)FUN_1802875a0(dVar4 / dVar5);
              dVar5 = (double)FUN_1802875a0(dVar7 / dVar5);
              uVar10 = 0;
              fVar9 = (DAT_1802ac570 - (param_6 + fVar9)) * (float)(dVar6 / dVar5) + param_6 + fVar9
              ;
            }
          }
        }
        else if ((longlong)(local_88 | uVar2) < 0) {
          dVar5 = (double)FUN_1802875a0(dVar4 / dVar7);
          dVar6 = (double)FUN_1802875a0(dVar6 / dVar7);
          uVar10 = 0;
          fVar9 = DAT_1802ac570 - (float)(dVar5 / dVar6);
        }
        else {
          dVar5 = (double)FUN_1802875a0(dVar4 / dVar6);
          dVar6 = (double)FUN_1802875a0(dVar7 / dVar6);
          uVar10 = (uint)((ulonglong)(dVar5 / dVar6) >> 0x20);
          fVar9 = (float)(dVar5 / dVar6);
        }
      }
      if ((longlong)param_4 < (longlong)param_3) {
        fVar9 = DAT_1802ac570 - fVar9;
        uVar10 = 0;
      }
    }
  }
  if (DAT_180402640 != (local_80 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_80 ^ (ulonglong)auStack_b8);
  }
  return CONCAT44(uVar10,fVar9);
}

