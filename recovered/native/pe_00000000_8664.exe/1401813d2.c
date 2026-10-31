/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401813d2 */

void FUN_1401813d2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)0x0;
  iVar1 = FUN_140181642(*param_2);
  if (iVar1 == 0) {
    *local_20 = *param_1;
    local_20[2] = param_2[1];
    param_2[1] = local_20;
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

