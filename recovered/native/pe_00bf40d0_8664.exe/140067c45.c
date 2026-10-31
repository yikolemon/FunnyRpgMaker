/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067c45 */

void FUN_140067c45(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((ulonglong)param_1[3] < 0x11) && (uVar1 = FUN_1400691ab(param_1,0x11), (char)uVar1 == '\0'))
  {
    return;
  }
  param_1[4] = 0x11;
  return;
}

