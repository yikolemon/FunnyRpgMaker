/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c423 */

undefined1 (*) [32] FUN_14001c423(longlong param_1,uint param_2,int *param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  pauVar1 = (undefined1 (*) [32])FUN_14001e961(param_1,param_2,&local_34);
  if (((0 < (int)param_2) && (local_34 == 0)) && (pauVar1 != (undefined1 (*) [32])0x0)) {
    FUN_1400b3c00(pauVar1,0,(ulonglong)param_2);
  }
  *param_3 = local_34;
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return pauVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

