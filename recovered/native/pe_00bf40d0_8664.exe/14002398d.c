/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002398d */

double FUN_14002398d(double *param_1)

{
  double dVar1;
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  local_68 = *param_1;
  dStack_60 = param_1[1];
  local_58 = param_1[2];
  FUN_1400251a9((undefined1 (*) [16])&local_48,&local_68,(double *)&DAT_1400e69a0);
  FUN_140023927(local_48);
  FUN_140023927(local_40);
  FUN_140023927(local_38);
  dVar1 = FUN_140096d50();
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_88)) {
    return dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_88);
}

