/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140098470 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140098470(double param_1,double param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort in_FPUStatusWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 in_stack_ffffffffffffff74;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  
  uVar1 = (ulonglong)param_1 & DAT_14010e480;
  uVar3 = (ulonglong)param_2 & DAT_14010e480;
  if ((longlong)DAT_14010e440 < (longlong)uVar3) {
    return param_2;
  }
  if ((longlong)DAT_14010e440 < (longlong)uVar1) {
    return param_1;
  }
  if (uVar1 != DAT_14010e440) {
    uVar6 = _DAT_14010e490;
    if (uVar3 == 0) goto LAB_1400986ac;
    if (uVar1 == uVar3) {
      return (double)((ulonglong)DAT_14010e460 | (ulonglong)param_1 & _DAT_14010e430);
    }
    dVar9 = (double)((ulonglong)param_1 & DAT_14010e480);
    dVar10 = (double)((ulonglong)param_2 & DAT_14010e480);
    if (dVar9 <= dVar10) {
      return param_1;
    }
    uVar1 = ((ulonglong)param_1 & DAT_14010e440) >> 0x34 |
            ((ulonglong)param_1 & DAT_14010e440) << 0xc;
    uVar3 = ((ulonglong)param_2 & DAT_14010e440) >> 0x34 |
            ((ulonglong)param_2 & DAT_14010e440) << 0xc;
    if (((uVar1 == 0) || (uVar3 == 0)) || (lVar2 = uVar1 - uVar3, 0x33 < lVar2)) {
LAB_140098630:
      fVar4 = (float10)param_1;
      do {
        fVar4 = fVar4 - (float10)(unkint10)(fVar4 / (float10)param_2) * (float10)param_2;
      } while ((in_FPUStatusWord >> 8 & 4) == 4);
      return (double)fVar4;
    }
    if (lVar2 != 0x7ff) {
      dVar7 = (double)(longlong)(dVar9 / dVar10);
      if (DAT_140143820 == 0) {
        if (0x3fe < (longlong)
                    ((((ulonglong)dVar7 & DAT_14010e440) >> 0x34 |
                     ((ulonglong)dVar7 & DAT_14010e440) << 0xc) + (uVar3 - 0x7fe)))
        goto LAB_140098630;
        dVar11 = dVar7 * dVar10;
        dVar5 = (double)((ulonglong)dVar10 & _DAT_14010e450);
        dVar8 = (double)((ulonglong)dVar7 & _DAT_14010e450);
        dVar9 = (double)((ulonglong)param_1 & DAT_14010e480) - dVar11;
        dVar9 = ((((double)((ulonglong)param_1 & DAT_14010e480) - dVar9) - dVar11) -
                ((dVar7 - dVar8) * (dVar10 - dVar5) +
                (dVar5 * dVar8 - dVar11) + dVar5 * (dVar7 - dVar8) + dVar8 * (dVar10 - dVar5))) +
                dVar9;
      }
      else {
        dVar9 = (double)((ulonglong)dVar7 | _DAT_14010e430) * dVar10 + dVar9;
      }
      if (dVar9 < DAT_14010e460) {
        dVar9 = dVar9 + dVar10;
      }
      return (double)((ulonglong)param_1 & _DAT_14010e430 | (ulonglong)dVar9 & DAT_14010e480);
    }
  }
  uVar6 = (ulonglong)param_1 | (ulonglong)DAT_14010e470;
LAB_1400986ac:
  dVar9 = (double)FUN_1400a9f20(&DAT_14010e420,0x16,uVar6,1,8,
                                CONCAT44(in_stack_ffffffffffffff74,0x21),in_stack_ffffffffffffff78,
                                in_stack_ffffffffffffff80,2);
  return dVar9;
}

