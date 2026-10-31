/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140013b57 */

longlong *
FUN_140013b57(longlong *param_1,undefined8 *param_2,undefined1 (*param_3) [32],int *param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 (*local_40) [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  local_38 = FUN_14009cf30(param_3);
  local_48 = param_5;
  FUN_1400111a4(param_1,param_2,(longlong *)&local_40,param_4);
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_68);
}

