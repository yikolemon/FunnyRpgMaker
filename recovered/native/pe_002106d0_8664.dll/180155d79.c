/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180155d79 */

void FUN_180155d79(longlong *param_1,int param_2,int param_3)

{
  undefined1 auStack_48 [44];
  short local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_1800fd699(local_1c,(longlong)param_3 + (longlong)param_2 + param_1[4],
                (longlong)(int)param_1[3] + param_1[4]);
  if (local_1c[0] != 10) {
    FUN_18019ac5a(*(undefined8 *)(*param_1 + 0x1318));
  }
  if (DAT_180402640 != (local_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
  }
  return;
}

