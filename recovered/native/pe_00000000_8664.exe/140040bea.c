/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140040bea */

undefined8 FUN_140040bea(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_30 = param_1[2];
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  local_38 = param_1;
  FUN_140041489(local_28);
  FUN_140015cb2(param_2,local_28,0);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

