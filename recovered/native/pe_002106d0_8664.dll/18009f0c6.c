/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009f0c6 */

void FUN_18009f0c6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [43];
  char local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_18009f162();
  (**(code **)(*param_1 + 0x50))(param_1,param_2);
  if (DAT_180417ca0 == '\x01') {
    local_1d = (char)(int)param_1[10] - (char)(int)param_1[9];
    FUN_18007f392(param_2 + 0x58);
    if (param_1[9] != param_1[10]) {
      local_1c = 0xffffffff;
      FUN_18008cdc4(param_2 + 0x58,param_1 + 9);
    }
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

