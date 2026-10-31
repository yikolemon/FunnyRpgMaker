/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011a268 */

longlong * FUN_14011a268(longlong param_1,longlong *param_2,double *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_38 = ~-(ulonglong)(*param_3 == 0.0) & (ulonglong)*param_3;
  uVar1 = FUN_140070a42();
  FUN_14011a2fe(param_1,&local_38,param_3,uVar1);
  if (local_30 == 0) {
    local_30 = *(longlong *)(param_1 + 8);
  }
  *param_2 = local_30;
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

