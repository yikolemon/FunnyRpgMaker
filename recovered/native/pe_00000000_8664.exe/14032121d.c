/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032121d */

undefined8 FUN_14032121d(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(DAT_14062a630 + 0x120 + (longlong)param_1) == '\x01') {
    uVar1 = FUN_140329f87(param_1 + 0x290,0);
    return uVar1;
  }
  return 0;
}

