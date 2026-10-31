/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140128c13 */

longlong FUN_140128c13(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                      int *param_6)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  local_50 = &local_3c;
  local_58 = param_5;
  lVar1 = FUN_14012b8aa(param_1,param_2);
  if (((param_4 - param_3 != 0 && param_3 <= param_4) && (local_3c == 0)) && (lVar1 != 0)) {
    FUN_1401c5830(param_3 * param_2 + lVar1,0,(longlong)((param_4 - param_3) * param_2));
  }
  *param_6 = local_3c;
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

