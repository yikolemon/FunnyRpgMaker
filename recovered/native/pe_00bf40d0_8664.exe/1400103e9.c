/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400103e9 */

longlong *
FUN_1400103e9(longlong *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined1 auStackY_58 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = *(undefined4 *)(param_4 + 2);
  FUN_140010457(param_1,param_2,param_3,(int *)&local_28,param_5);
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStackY_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStackY_58);
}

