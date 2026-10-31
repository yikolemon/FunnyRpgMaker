/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e1a90 */

void FUN_1400e1a90(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  local_28 = 0;
  iVar1 = FUN_1400da5d0(local_20,param_2,&local_28,param_1 + 0x30);
  if (iVar1 != 1) {
    local_20[0] = param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_48,local_20[0]);
}

