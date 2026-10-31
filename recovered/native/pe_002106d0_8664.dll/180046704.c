/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180046704 */

void FUN_180046704(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  if (2 < (ulonglong)param_2[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_180005ebc("Invalid fill (too long).");
  }
  uVar1 = thunk_FUN_18004688a(*param_2,*param_2 + param_2[1] * 2,*param_1 + 0x10);
  local_1a = 0;
  FUN_180046835(uVar1,*param_1 + 0x14);
  *(char *)(*param_1 + 0xe) = (char)param_2[1];
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

