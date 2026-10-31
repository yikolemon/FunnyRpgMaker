/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012ac23 */

undefined8
FUN_14012ac23(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_28;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar1 = 6;
  }
  else {
    local_48[0] = 1;
    local_28 = 0;
    local_58 = 1;
    local_40 = param_2;
    local_38 = param_3;
    uVar1 = FUN_14012a7be(param_1,local_48,param_4,param_5);
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_78)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_78);
}

