/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006cef4 */

longlong * FUN_18006cef4(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  plVar3 = *(longlong **)(lVar1 + 8);
  *param_2 = (longlong)plVar3;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = lVar1;
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    do {
      *param_2 = (longlong)plVar3;
      local_38 = param_3;
      if (7 < (ulonglong)param_3[3]) {
        local_38 = (undefined8 *)*param_3;
      }
      local_30 = param_3[2];
      iVar2 = FUN_18006d14a(plVar3 + 4,&local_38);
      if (iVar2 < 0) {
        plVar3 = plVar3 + 2;
      }
      else {
        param_2[2] = (longlong)plVar3;
      }
      *(uint *)(param_2 + 1) = (uint)(iVar2 >= 0);
      plVar3 = (longlong *)*plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

