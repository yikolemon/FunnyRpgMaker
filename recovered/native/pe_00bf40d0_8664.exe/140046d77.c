/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140046d77 */

undefined8 FUN_140046d77(char *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  
  pauVar1 = (undefined1 (*) [16])FUN_140046f4a(param_1);
  lVar3 = 0;
  do {
    pauVar2 = FUN_14008de20(pauVar1,(undefined1 (*) [16])(&DAT_1400f48c0 + lVar3));
    if (pauVar2 != (undefined1 (*) [16])0x0) {
      return CONCAT71((int7)((ulonglong)pauVar2 >> 8),1);
    }
    lVar3 = lVar3 + 0x14;
  } while (lVar3 != 400);
  return 0;
}

