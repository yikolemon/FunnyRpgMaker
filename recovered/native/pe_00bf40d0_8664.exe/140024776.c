/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140024776 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140024776(double param_1,double param_2,double param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  double local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  if (((_DAT_1400e73b8 < param_3) || (param_2 < DAT_1400e73c0)) || (param_3 < DAT_1400e73c0)) {
    if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStack_78)) {
      FUN_140025150(param_3);
      return;
    }
  }
  else {
    dVar2 = FUN_1400250fb(param_1);
    dVar2 = (dVar2 / _DAT_1400e73c8) * DAT_1400e73d0;
    dVar3 = FUN_1400250ba(param_3);
    iVar1 = FUN_140024339(dVar2,param_2,dVar3);
    if (iVar1 == 0) {
      FUN_140023fff(local_58,dVar3,dVar2);
      FUN_140024f03(local_58);
    }
    if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStack_78);
}

