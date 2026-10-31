/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000babc */

undefined8 FUN_14000babc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    FUN_14001102c(local_50,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(local_50,&DAT_140ee3b70);
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_78)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_78);
}

