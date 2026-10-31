/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017ae27 */

undefined8 FUN_14017ae27(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  int local_40 [2];
  undefined8 local_38;
  int local_30 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14017aec2(param_1,"CHARSET_REGISTRY",local_40);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_14017aec2(param_1,"CHARSET_ENCODING",local_30);
    if ((((int)uVar1 == 0) && (uVar1 = 6, local_40[0] == 1)) && (local_30[0] == 1)) {
      *param_2 = local_28;
      *param_3 = local_38;
      uVar1 = 0;
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_68)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_68);
}

