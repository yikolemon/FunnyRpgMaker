/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000ebda */

undefined8 FUN_14000ebda(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  FUN_140006b8a(&local_28);
  lVar1 = FUN_14000ec5a(param_1,param_2);
  FUN_140005ba2(param_1,lVar1 + 0x20);
  thunk_FUN_14018e090(lVar1,0x50);
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

