/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400695b8 */

undefined8 FUN_1400695b8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    FUN_14006e6d6(local_50,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_50,&DAT_140196740);
  }
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_78)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_78);
}

