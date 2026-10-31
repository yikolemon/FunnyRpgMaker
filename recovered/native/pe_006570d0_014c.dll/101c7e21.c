/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c7e21 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101c7e21(ulonglong param_1)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  
  dVar3 = (DAT_10303828 * (double)(_DAT_1028b420 & param_1)) /
          (DAT_10303820 - (double)(_DAT_1028b420 & param_1));
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  iVar1 = FUN_101c9054(param_1);
  fVar2 = (float10)FUN_1026fab0(dVar3,0xc30c30c3,0x40030c30);
  return (float10)((double)iVar1 * (double)fVar2);
}

