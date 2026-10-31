/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d503c */

float10 FUN_101d503c(int param_1)

{
  char cVar1;
  double dVar2;
  
  cVar1 = FUN_101ca10d(param_1);
  if (cVar1 == '\0') {
    dVar2 = DAT_103084c8;
    if (*(char *)(param_1 + 0x24) == '\0') {
      dVar2 = DAT_10303ac0;
    }
  }
  else {
    dVar2 = DAT_103037f0;
    if (*(char *)(param_1 + 0x24) == '\0') {
      dVar2 = 0.0;
    }
  }
  return (float10)dVar2;
}

