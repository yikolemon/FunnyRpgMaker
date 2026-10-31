/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401702e9 */

undefined8 FUN_1401702e9(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  uVar1 = 0;
  local_c = param_2;
  if (param_2 < 0x10000) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar1 = FUN_14017b4f7(param_1,&local_c,0);
    }
    else {
      uVar1 = FUN_14017b2b9(param_1,&local_c,0);
    }
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

