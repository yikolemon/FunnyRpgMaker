/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403293f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403293f8(longlong param_1,float *param_2)

{
  undefined1 auStack_38 [32];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  fStack_10 = (float)*(undefined8 *)(param_1 + 0x168);
  local_18 = *param_2 - fStack_10;
  fStack_c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x168) >> 0x20);
  fStack_14 = param_2[1] - fStack_c;
  fStack_10 = param_2[2] - fStack_10;
  fStack_c = param_2[3] - fStack_c;
  FUN_1403101d8(&local_18,0x10,
                *(undefined4 *)
                 (*(longlong *)(param_1 + 0x150) + -4 + (longlong)*(int *)(param_1 + 0x148) * 4));
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

