/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012f4e4 */

void FUN_18012f4e4(longlong param_1)

{
  undefined2 uVar1;
  undefined1 auStack_48 [40];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_20 = *(float *)(param_1 + 8);
  fStack_1c = *(float *)(param_1 + 0xc);
  fStack_18 = (float)*(undefined8 *)(param_1 + 0x10) + local_20;
  fStack_14 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) + fStack_1c;
  uVar1 = FUN_18012f6ae();
  *(undefined2 *)(param_1 + 0xaa) = uVar1;
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
}

