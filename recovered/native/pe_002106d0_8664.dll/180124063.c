/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180124063 */

void FUN_180124063(undefined8 param_1)

{
  char cVar1;
  float fVar2;
  
  FUN_18013320f(&DAT_18037972e);
  cVar1 = FUN_18011aab1();
  if (cVar1 != '\0') {
    fVar2 = (float)FUN_180116c08();
    FUN_1801166df(fVar2 * DAT_1802de92c);
    FUN_18013309a(param_1,0);
    FUN_1801167a4();
    thunk_FUN_18010f900();
    return;
  }
  return;
}

