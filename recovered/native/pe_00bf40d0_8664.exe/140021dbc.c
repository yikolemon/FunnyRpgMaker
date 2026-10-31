/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021dbc */

undefined8 * FUN_140021dbc(longlong param_1,undefined8 *param_2,uint param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001e961(param_1,param_3,&local_34);
  if (((param_3 != 0) && (param_2 != (undefined8 *)0x0)) && (local_34 == 0)) {
    FUN_1400b3550(puVar1,param_2,(ulonglong)param_3);
  }
  *param_4 = local_34;
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

