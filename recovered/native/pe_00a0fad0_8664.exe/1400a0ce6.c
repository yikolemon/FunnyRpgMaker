/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a0ce6 */

void FUN_1400a0ce6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [43];
  char local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  FUN_1400a0eae();
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if (DAT_1401cc8c4 == '\x01') {
    local_1d = (char)(int)param_1[10] - (char)(int)param_1[9];
    FUN_14008cb80(param_2 + 0x58);
    if (param_1[9] != param_1[10]) {
      local_1c = 0xffffffff;
      FUN_14009e716(param_2 + 0x58,param_1 + 9);
    }
  }
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_48);
}

