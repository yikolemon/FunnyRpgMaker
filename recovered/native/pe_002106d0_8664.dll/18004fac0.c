/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004fac0 */

undefined8 FUN_18004fac0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_180055594(local_50,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_50,&DAT_180391640);
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_78)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_78);
}

