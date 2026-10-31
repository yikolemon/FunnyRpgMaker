/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fc2ca */

undefined4 __fastcall FUN_100fc2ca(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  
  iVar2 = param_1[10];
  fVar1 = (float)param_1[4];
  uVar5 = FUN_100fc392();
  iVar3 = param_1[1];
  iVar4 = *param_1;
  if (((*(int *)(iVar2 + 0x2308) != 0) && (*(char *)(*(int *)(iVar2 + 0x2308) + 0x1f9) == '\0')) &&
     ((*(byte *)(iVar2 + 0x27b4) & 0x20) != 0)) {
    FUN_100f99e6();
  }
  bVar6 = (byte)uVar5 & iVar4 < iVar3;
  if (((fVar1 <= 0.0) && (0.0 < (float)param_1[4])) && ((*(byte *)(iVar2 + 0x27b4) & 0x20) != 0)) {
    FUN_100f99e6("Clipper: Step(): computed ItemsHeight: %.2f.\n",(double)(float)param_1[4]);
  }
  if (bVar6 == 0) {
    if ((*(uint *)(iVar2 + 0x27b4) & 0x20) != 0) {
      FUN_100f99e6();
    }
    FUN_100fbc90();
  }
  else if ((*(uint *)(iVar2 + 0x27b4) & 0x20) != 0) {
    FUN_100f99e6("Clipper: Step(): display %d to %d.\n",*param_1,param_1[1]);
  }
  return CONCAT31((int3)(CONCAT22((short)((uint)uVar5 >> 0x10),CONCAT11(iVar4 < iVar3,(byte)uVar5))
                        >> 8),bVar6);
}

