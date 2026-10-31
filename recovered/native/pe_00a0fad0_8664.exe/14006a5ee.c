/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006a5ee */

undefined8 FUN_14006a5ee(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_14006ad7a(local_48,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_48,&DAT_140196680);
  }
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_68)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_68);
}

