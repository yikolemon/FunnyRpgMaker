/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10281798 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10281798(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_c;
  
  iVar4 = 0;
  dVar7 = param_1;
  while( true ) {
    uVar2 = (uint)(ushort)((ulonglong)dVar7 >> 0x34);
    dVar8 = (double)((ulonglong)dVar7 & (ulonglong)_DAT_10325f60 | (ulonglong)DAT_10325fc0);
    dVar9 = (double)((ulonglong)dVar7 & _UNK_10325f68 | (ulonglong)_UNK_10325fc8);
    uVar1 = SUB82(_DAT_10325f70 + dVar8,0) & 0x7f0;
    dVar12 = (double)(_UNK_10325f88 & (ulonglong)dVar9);
    dVar10 = (double)(_DAT_10325f80 & (ulonglong)dVar8) * *(double *)(&DAT_10329400 + uVar1) -
             DAT_10325fc0;
    dVar7 = (dVar8 - (double)(_DAT_10325f80 & (ulonglong)dVar8)) *
            *(double *)(&DAT_10329400 + uVar1);
    dVar9 = (dVar9 - dVar12) * *(double *)(&UNK_10329408 + uVar1);
    dVar8 = dVar7 + dVar10;
    dVar12 = dVar9 + (dVar12 * *(double *)(&UNK_10329408 + uVar1) - _UNK_10325fc8);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((_DAT_10326010 * dVar8 + _DAT_10326020) * dVar8 + _DAT_10326030) *
                       dVar8 * dVar8 * dVar8 * dVar8 * dVar8 +
                       ((_UNK_10326018 * dVar12 + _UNK_10326028) * dVar12 + _UNK_10326038) *
                       dVar12 * dVar12 +
                       *(double *)(&UNK_10329818 + uVar1) + dVar11 * _UNK_10325f98 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_10325fa8 + iVar5)) +
                      *(double *)(&DAT_10329810 + uVar1) + dVar10 + dVar11 * _DAT_10325f90 +
                      (double)((ulonglong)dVar7 & *(ulonglong *)(&DAT_10325fa0 + iVar5)));
    }
    local_c = (double)-(ulonglong)(_DAT_10325fd0 == param_1);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        if (DAT_10325fc0 ==
            (double)((ulonglong)param_1 & (ulonglong)_DAT_10325f60 | (ulonglong)DAT_10325fc0)) {
          return (float10)_DAT_10325ff8;
        }
        uVar6 = 1000;
        local_c = _DAT_10325f60;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_10281992;
    }
    dVar7 = param_1 * DAT_10325fe0;
    iVar4 = -0x34;
  }
  uVar6 = 2;
  local_c = DAT_10325ff0;
LAB_10281992:
  FUN_1027dde0(&param_1,&param_1,&local_c,uVar6);
  return (float10)local_c;
}

