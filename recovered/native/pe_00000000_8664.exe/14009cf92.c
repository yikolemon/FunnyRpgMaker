/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009cf92 */

void FUN_14009cf92(undefined8 param_1)

{
  char cVar1;
  float fVar2;
  
  FUN_1400ac13f(&DAT_140ed8f96);
  cVar1 = FUN_140093d6d();
  if (cVar1 != '\0') {
    fVar2 = (float)FUN_14008ff20();
    FUN_14008f9f7(fVar2 * DAT_14021169c);
    FUN_1400abfca(param_1,0);
    FUN_14008fabc();
    thunk_FUN_140088c18();
    return;
  }
  return;
}

