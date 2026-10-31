/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012448b */

void FUN_1012448b(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  uint uVar7;
  
  cVar3 = FUN_10147c9d(*param_1,"Columns Id: 0x%08X, Count: %d, Flags: 0x%04X",*param_1,param_1[4],
                       param_1[1]);
  if (cVar3 != '\0') {
    dVar6 = (double)(float)param_1[6];
    FUN_1012d551("Width: %.1f (MinX: %.1f, MaxX: %.1f)",
                 (double)((float)param_1[6] - (float)param_1[5]),(double)(float)param_1[5],dVar6);
    iVar1 = param_1[0x17];
    if (iVar1 != 0) {
      iVar2 = param_1[0x19];
      iVar4 = 0;
      do {
        uVar7 = (uint)((ulonglong)dVar6 >> 0x20);
        fVar5 = (float10)FUN_10169019(param_1,*(undefined4 *)(iVar2 + iVar4));
        FUN_1012d551("Column %02d: OffsetNorm %.3f (= %.1f px)",
                     ((iVar2 + iVar4) - param_1[0x19] >> 2) * -0x49249249,
                     (double)*(float *)(iVar2 + iVar4),(double)fVar5,uVar7);
        dVar6 = (double)((ulonglong)uVar7 << 0x20);
        iVar4 = iVar4 + 0x1c;
      } while (iVar1 * 0x1c != iVar4);
    }
    FUN_10149387();
    return;
  }
  return;
}

