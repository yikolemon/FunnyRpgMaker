/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400495d1 */

undefined8
FUN_1400495d1(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_48 = 0;
  FUN_14004963b();
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_68);
}

