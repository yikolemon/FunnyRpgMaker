/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140096868 */

void FUN_140096868(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = FUN_1400782ee(param_1,&DAT_140ecc128,&local_18,0);
  if (lVar1 != 0) {
    if (local_18 != 0) {
      FUN_1400968e1(lVar1);
    }
    FUN_140077b90(lVar1);
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

