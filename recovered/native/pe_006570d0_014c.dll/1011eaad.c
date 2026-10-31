/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011eaad */

void __fastcall FUN_1011eaad(undefined4 param_1)

{
  char cVar1;
  float10 fVar2;
  
  FUN_1012d1be(&DAT_1034960f);
  cVar1 = FUN_10115d1a();
  if (cVar1 != '\0') {
    fVar2 = (float10)FUN_10111f20();
    FUN_101119c9((float)fVar2 * DAT_102b8ebc);
    FUN_1012d079(param_1,0);
    FUN_10111a82();
    thunk_FUN_1010ad44();
    return;
  }
  return;
}

