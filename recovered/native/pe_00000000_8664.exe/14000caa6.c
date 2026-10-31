/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000caa6 */

undefined8 FUN_14000caa6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_14000d232(local_48,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(local_48,&DAT_140ee3ab0);
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_68)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_68);
}

