/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400abfd5 */

void FUN_1400abfd5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res10;
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1400ac02c(param_1,local_10);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

