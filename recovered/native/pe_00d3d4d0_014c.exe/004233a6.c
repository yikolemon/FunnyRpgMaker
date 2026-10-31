/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004233a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * __cdecl FUN_004233a6(double *param_1,double param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = 0.0;
  if (1 < (int)param_3 % 4) {
    dVar7 = DAT_004d7da0;
  }
  dVar6 = 0.0;
  if ((param_3 & 1) != 0) {
    dVar6 = DAT_004d7da0;
  }
  if ((int)param_3 < 4) {
    dVar5 = (DAT_004d7e18 * dVar6 + param_2 + DAT_004d7e08 * dVar7) / DAT_004d7e28;
    uVar4 = FUN_00423383(dVar5);
    if ((char)uVar4 == '\0') goto LAB_0042350d;
    *param_1 = dVar5;
    param_1[1] = dVar7;
    dVar5 = dVar6;
  }
  else if (param_3 < 8) {
    dVar5 = (DAT_004d7e18 * dVar7 + param_2 + DAT_004d7e00 * dVar6) / DAT_004d7e20;
    uVar4 = FUN_00423383(dVar5);
    if ((char)uVar4 == '\0') {
LAB_0042350d:
      uVar3 = _UNK_004cd85c;
      uVar2 = _UNK_004cd858;
      uVar1 = _UNK_004cd854;
      *(undefined4 *)param_1 = _DAT_004cd850;
      *(undefined4 *)((int)param_1 + 4) = uVar1;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((int)param_1 + 0xc) = uVar3;
      *(undefined4 *)((int)param_1 + 0x14) = 0xbff00000;
      *(undefined4 *)(param_1 + 2) = 0;
      return param_1;
    }
    *param_1 = dVar6;
    param_1[1] = dVar5;
    dVar5 = dVar7;
  }
  else {
    dVar5 = (DAT_004d7e08 * dVar6 + param_2 + DAT_004d7e00 * dVar7) / DAT_004d7e10;
    uVar4 = FUN_00423383(dVar5);
    if ((char)uVar4 == '\0') goto LAB_0042350d;
    *param_1 = dVar7;
    param_1[1] = dVar6;
  }
  param_1[2] = dVar5;
  return param_1;
}

