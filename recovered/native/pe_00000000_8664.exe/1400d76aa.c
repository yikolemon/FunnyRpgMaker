/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d76aa */

void FUN_1400d76aa(void)

{
  int iVar1;
  longlong lVar2;
  HKL pHVar3;
  LPSTR lpLCData;
  
  lVar2 = FUN_1400d7598();
  pHVar3 = GetKeyboardLayout(0);
  lpLCData = (LPSTR)(lVar2 + 0x2c);
  iVar1 = GetLocaleInfoA((uint)((ulonglong)pHVar3 >> 0x10) & 0xffff,0x20001004,lpLCData,4);
  if (iVar1 == 0) {
    lpLCData[0] = '\0';
    lpLCData[1] = '\0';
    lpLCData[2] = '\0';
    lpLCData[3] = '\0';
  }
  return;
}

