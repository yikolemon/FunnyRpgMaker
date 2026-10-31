/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032e77b */

void FUN_14032e77b(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_14062a630;
  *(undefined8 *)(DAT_14062a630 + 0x2a68) = param_1;
  *(undefined8 *)(lVar1 + 0x2a70) = param_2;
  return;
}

