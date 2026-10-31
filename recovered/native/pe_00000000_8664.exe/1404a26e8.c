/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a26e8 */

longlong FUN_1404a26e8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = lVar2;
  if (s___AV__time_get__WV__istreambuf_i_140627320._64_4_ != -1) {
    lVar1 = FUN_1404a2f0c();
  }
  if ((lVar1 != -1) && ((lVar1 != 0 || (lVar1 = FUN_1404a2994(), lVar1 != 0)))) {
    lVar2 = param_2 * 0x3c8 + lVar1;
  }
  return lVar2;
}

