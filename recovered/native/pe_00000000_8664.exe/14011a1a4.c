/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011a1a4 */

undefined8 FUN_14011a1a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  longlong local_60 [4];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_14011a268(param_1 + 3,&local_40);
  if (local_40 == param_1[4]) {
    FUN_14010beec(local_60,param_1[1],*param_1,local_38);
    uVar1 = FUN_14010bfae(local_60);
    FUN_14011a352(param_1 + 3,local_60,&local_38);
    *(undefined8 *)(local_60[0] + 0x18) = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(local_40 + 0x18);
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_88)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_88);
}

