/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d50ba */

float10 FUN_101d50ba(int param_1)

{
  char cVar1;
  double dVar2;
  
  cVar1 = FUN_101ca10d(param_1);
  if (cVar1 == '\0') {
    dVar2 = DAT_10303ab0;
    if (*(char *)(param_1 + 0x24) == '\0') {
      dVar2 = DAT_103037f0;
    }
  }
  else {
    dVar2 = DAT_10308428;
    if (*(char *)(param_1 + 0x24) == '\0') {
      dVar2 = DAT_10308420;
    }
  }
  return (float10)dVar2;
}

