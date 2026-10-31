/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022b73b */

undefined8 FUN_18022b73b(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  int local_40 [2];
  undefined8 local_38;
  int local_30 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar1 = FUN_18022b7d6(param_1,"CHARSET_REGISTRY",local_40);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_18022b7d6(param_1,"CHARSET_ENCODING",local_30);
    if ((((int)uVar1 == 0) && (uVar1 = 6, local_40[0] == 1)) && (local_30[0] == 1)) {
      *param_2 = local_28;
      *param_3 = local_38;
      uVar1 = 0;
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
}

