/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140080b1a */

void FUN_140080b1a(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_10 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(param_1 + 0x168) >> 0x20),
                      (float)*param_2 - (float)*(undefined8 *)(param_1 + 0x168));
  FUN_140077fc4(&local_10,8,
                *(undefined4 *)
                 (*(longlong *)(param_1 + 0x150) + -4 + (longlong)*(int *)(param_1 + 0x148) * 4));
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

