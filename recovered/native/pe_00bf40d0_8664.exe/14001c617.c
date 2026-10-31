/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c617 */

longlong FUN_14001c617(longlong param_1,uint param_2,uint param_3,uint param_4,longlong param_5,
                      int *param_6)

{
  longlong lVar1;
  undefined1 auStackY_78 [32];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar1 = FUN_14001f231(param_1,param_2,param_3,param_4,param_5,&local_3c);
  if (((param_4 - param_3 != 0 && (int)param_3 <= (int)param_4) && (local_3c == 0)) && (lVar1 != 0))
  {
    FUN_1400b3c00((undefined1 (*) [32])((int)(param_3 * param_2) + lVar1),0,
                  (longlong)(int)((param_4 - param_3) * param_2));
  }
  *param_6 = local_3c;
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_78)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
}

