/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d25e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801d25e2(undefined8 param_1,double param_2,double param_3)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (((_DAT_18032a268 < param_3) || (param_2 < DAT_18032a270)) || (param_3 < DAT_18032a270)) {
    if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
      FUN_1801d2fbc(param_3);
      return;
    }
  }
  else {
    dVar2 = (double)FUN_1801d2f67();
    dVar2 = (dVar2 / _DAT_18032a278) * DAT_18032a280;
    uVar3 = FUN_1801d2f26(param_3);
    iVar1 = FUN_1801d21a5(dVar2,param_2,uVar3);
    if (iVar1 == 0) {
      FUN_1801d1e6b(local_58,uVar3,dVar2);
      FUN_1801d2d6f(local_58);
    }
    if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

