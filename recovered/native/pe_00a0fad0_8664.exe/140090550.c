/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140090550 */

void FUN_140090550(longlong param_1,undefined2 param_2)

{
  undefined1 auStack_38 [46];
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_1401c9640 ^ (ulonglong)auStack_38;
  local_a = param_2;
  FUN_140090988(*(undefined8 *)(param_1 + 200),&local_a,&local_8,*(uint *)(param_1 + 0xe0) >> 8 & 1)
  ;
  if (DAT_1401c9640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_8 ^ (ulonglong)auStack_38);
}

