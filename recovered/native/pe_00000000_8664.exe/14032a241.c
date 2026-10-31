/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032a241 */

undefined8 FUN_14032a241(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(DAT_14062a630 + 0xb6e + (longlong)param_1) == '\x01') {
    uVar1 = FUN_140329f87(param_1 + 0x290,0);
    return uVar1;
  }
  return 0;
}

