/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092089 */

undefined8 FUN_140092089(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(DAT_140f2a910 + 0xb6e + (longlong)param_1) == '\x01') {
    uVar1 = FUN_140091dcf(param_1 + 0x290,0);
    return uVar1;
  }
  return 0;
}

