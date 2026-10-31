/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005f56 */

undefined8 FUN_140005f56(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39 [22];
  undefined1 local_23 [11];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_2 < 0) {
    lVar1 = FUN_140005fd1(local_23,-param_2);
    *(undefined1 *)(lVar1 + -1) = 0x2d;
    lVar1 = lVar1 + -1;
  }
  else {
    lVar1 = FUN_140005fd1(local_23);
  }
  FUN_14000602e(param_1,lVar1,local_23,local_39);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_68);
}

