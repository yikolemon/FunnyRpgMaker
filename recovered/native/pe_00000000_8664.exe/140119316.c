/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119316 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140119316(undefined8 param_1,double param_2,double param_3)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (((_DAT_140e8e258 < param_3) || (param_2 < DAT_140e8e260)) || (param_3 < DAT_140e8e260)) {
    if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
      FUN_140119cf0(param_3);
      return;
    }
  }
  else {
    dVar2 = (double)FUN_140119c9b();
    dVar2 = (dVar2 / _DAT_140e8e268) * DAT_140e8e270;
    uVar3 = FUN_140119c5a(param_3);
    iVar1 = FUN_140118ed9(dVar2,param_2,uVar3);
    if (iVar1 == 0) {
      FUN_140118b9f(local_58,uVar3,dVar2);
      FUN_140119aa3(local_58);
    }
    if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_78);
}

