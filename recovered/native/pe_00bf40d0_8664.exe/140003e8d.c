/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140003e8d */

void FUN_140003e8d(undefined4 param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined **local_40;
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  local_40 = FUN_14000298b();
  local_48[0] = param_1;
  FUN_140003ef4(local_38,(undefined8 *)local_48);
                    /* WARNING: Subroutine does not return */
  FUN_14008c800(local_38,&DAT_1401215e8);
}

