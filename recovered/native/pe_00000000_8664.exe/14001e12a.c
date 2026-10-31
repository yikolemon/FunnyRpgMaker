/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001e12a */

void FUN_14001e12a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  lVar1 = _malloc_base(param_2 * 4);
  if (lVar1 == 0) {
    FUN_140019ab4(local_28);
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(local_28,&DAT_140ee3c20);
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_48);
}

