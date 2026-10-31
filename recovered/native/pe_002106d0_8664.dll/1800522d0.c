/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800522d0 */

undefined8 FUN_1800522d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_180052a5c(local_48,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_48,&DAT_1803915c0);
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_68)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_68);
}

