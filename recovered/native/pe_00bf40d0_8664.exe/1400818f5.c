/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400818f5 */

double * FUN_1400818f5(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  dStack_50 = param_2[1];
  local_48 = param_2[2];
  dStack_40 = param_2[3];
  bVar4 = FUN_140081874(&local_58);
  if (bVar4) {
    dVar1 = (double)FUN_14001b886((longlong)param_2);
    dVar2 = (double)FUN_14001b880(param_2);
    FUN_14001b7c4(param_1,dVar2,dVar1,DAT_1400ede08);
  }
  else {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = dVar3;
    *param_1 = dVar1;
    param_1[1] = dVar2;
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_78);
}

