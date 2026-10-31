/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019a0b1 */

void FUN_1019a0b1(void)

{
  int iVar1;
  HKL pHVar2;
  LPSTR lpLCData;
  
  iVar1 = FUN_10199fcf();
  pHVar2 = GetKeyboardLayout(0);
  lpLCData = (LPSTR)(iVar1 + 0x24);
  iVar1 = GetLocaleInfoA((uint)pHVar2 >> 0x10,0x20001004,lpLCData,4);
  if (iVar1 == 0) {
    lpLCData[0] = '\0';
    lpLCData[1] = '\0';
    lpLCData[2] = '\0';
    lpLCData[3] = '\0';
  }
  return;
}

