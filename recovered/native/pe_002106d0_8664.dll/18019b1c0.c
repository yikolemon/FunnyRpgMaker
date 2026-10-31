/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019b1c0 */

void thunk_FUN_18019ac7c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined4 uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  if ((DAT_1803273b0 <= *(float *)(param_1 + 0x14)) || ((*(byte *)(param_1 + 0x4f) & 0x10) != 0)) {
    uStack_1c = 0;
    FUN_18019a97c(param_1,param_2,&uStack_1c);
  }
  else {
    FUN_18019a97c(param_1,param_2,0);
  }
  if (DAT_180402640 != (uStack_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(uStack_18 ^ (ulonglong)auStack_48);
  }
  return;
}

