/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d5aa6 */

float10 FUN_101d5aa6(int param_1)

{
  char cVar1;
  double dVar2;
  
  cVar1 = FUN_101ca10d(param_1);
  dVar2 = DAT_10308428;
  if (cVar1 == '\0') {
    dVar2 = DAT_103084d8;
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    dVar2 = DAT_10308420;
  }
  return (float10)dVar2;
}

