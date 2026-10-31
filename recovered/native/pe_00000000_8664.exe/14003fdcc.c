/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003fdcc */

undefined8 FUN_14003fdcc(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  lVar2 = (longlong)param_1 + *plVar1 * 2;
  local_28 = FUN_140015cf9(param_1,lVar2);
  local_20 = lVar2 - local_28 >> 1;
  FUN_140015cb2(param_2,&local_28,0);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

