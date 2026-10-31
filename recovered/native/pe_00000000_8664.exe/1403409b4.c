/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403409b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403409b4(longlong param_1)

{
  undefined2 uVar1;
  undefined1 auStack_48 [40];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  local_20 = *(float *)(param_1 + 8);
  fStack_1c = *(float *)(param_1 + 0xc);
  fStack_18 = (float)*(undefined8 *)(param_1 + 0x10) + local_20;
  fStack_14 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) + fStack_1c;
  uVar1 = FUN_140340b7e();
  *(undefined2 *)(param_1 + 0xaa) = uVar1;
  if (ram0x000140613b10 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_10 ^ (ulonglong)auStack_48);
}

