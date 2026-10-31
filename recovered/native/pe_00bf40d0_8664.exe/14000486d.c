/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000486d */

LPSTR FUN_14000486d(LPSTR param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  uVar1 = FUN_140089260();
  FUN_1400048d6(param_1,uVar1,&local_38);
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_58);
}

