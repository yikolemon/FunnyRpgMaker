/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000add9 */

undefined8 *
FUN_14000add9(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined1 auStackY_68 [32];
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_38 = *param_3;
  lStack_30 = param_3[1];
  FUN_14000af4f(param_1,param_2,&local_38,&local_28,0);
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStackY_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStackY_68);
}

