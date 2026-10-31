/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140318cd2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140318cd2(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  local_10 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(param_1 + 0x168) >> 0x20),
                      (float)*param_2 - (float)*(undefined8 *)(param_1 + 0x168));
  FUN_1403101d8(&local_10,8,
                *(undefined4 *)
                 (*(longlong *)(param_1 + 0x150) + -4 + (longlong)*(int *)(param_1 + 0x148) * 4));
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

