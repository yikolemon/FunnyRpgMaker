/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180100a32 */

byte FUN_180100a32(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  
  lVar4 = *(longlong *)(param_1 + 10);
  fVar1 = (float)param_1[4];
  bVar5 = FUN_180100b05();
  iVar2 = param_1[1];
  iVar3 = *param_1;
  if (((*(longlong *)(lVar4 + 0x24f8) != 0) &&
      (*(char *)(*(longlong *)(lVar4 + 0x24f8) + 0x245) == '\0')) &&
     ((*(byte *)(lVar4 + 0x2acc) & 0x20) != 0)) {
    FUN_1800fdfea("Clipper: Step(): inside frozen table row.\n");
  }
  bVar5 = bVar5 & iVar3 < iVar2;
  if (((fVar1 <= 0.0) && (0.0 < (float)param_1[4])) && ((*(byte *)(lVar4 + 0x2acc) & 0x20) != 0)) {
    FUN_1800fdfea("Clipper: Step(): computed ItemsHeight: %.2f.\n",(double)(float)param_1[4]);
  }
  if (bVar5 == 0) {
    if ((*(uint *)(lVar4 + 0x2acc) & 0x20) != 0) {
      FUN_1800fdfea("Clipper: Step(): End.\n");
    }
    FUN_180100412(param_1);
  }
  else if ((*(uint *)(lVar4 + 0x2acc) & 0x20) != 0) {
    FUN_1800fdfea("Clipper: Step(): display %d to %d.\n",*param_1,param_1[1]);
  }
  return bVar5;
}

