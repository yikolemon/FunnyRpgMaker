/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d513e */

float10 FUN_101d513e(int param_1)

{
  char cVar1;
  float10 fVar2;
  double dVar3;
  
  cVar1 = FUN_101ca0fc(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_101ca10d(param_1);
    if (cVar1 == '\0') {
      dVar3 = DAT_103084d8;
      if (*(char *)(param_1 + 0x24) == '\0') {
        dVar3 = DAT_10308420;
      }
    }
    else {
      dVar3 = DAT_103084a8;
      if (*(char *)(param_1 + 0x24) == '\0') {
        dVar3 = DAT_103084b8;
      }
    }
    fVar2 = (float10)dVar3;
  }
  else {
    fVar2 = (float10)FUN_10197574();
  }
  return fVar2;
}

