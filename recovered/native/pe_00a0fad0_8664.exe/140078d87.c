/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140078d87 */

longlong * FUN_140078d87(longlong *param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  if (param_2 != param_3) {
    do {
      local_31 = *param_2;
      puVar1 = *(undefined1 **)(param_4 + 8);
      if (puVar1 == *(undefined1 **)(param_4 + 0x10)) {
        FUN_1400660b8(param_4,puVar1,&local_31);
      }
      else {
        *puVar1 = local_31;
        *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  *param_1 = param_4;
  if (DAT_1401c9640 == (local_30 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_30 ^ (ulonglong)auStack_58);
}

