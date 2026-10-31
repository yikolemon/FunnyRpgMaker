/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400920d0 */

undefined8 FUN_1400920d0(int param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(DAT_140f2a910 + 0xb5a + (longlong)param_1 * 2) == 2) {
    uVar1 = FUN_140091dcf(param_1 + 0x290,0);
    return uVar1;
  }
  return 0;
}

