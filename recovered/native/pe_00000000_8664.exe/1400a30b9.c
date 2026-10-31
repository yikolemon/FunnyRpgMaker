/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a30b9 */

void FUN_1400a30b9(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  
  cVar3 = FUN_1400c50f1(*param_1,"Columns Id: 0x%08X, Count: %d, Flags: 0x%04X",*param_1,param_1[4],
                        param_1[1]);
  if (cVar3 != '\0') {
    FUN_1400ac536("Width: %.1f (MinX: %.1f, MaxX: %.1f)",
                  (double)((float)param_1[6] - (float)param_1[5]),(double)(float)param_1[5],
                  (double)(float)param_1[6]);
    iVar1 = param_1[0x18];
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1a);
      lVar4 = 0;
      do {
        fVar5 = (float)FUN_1401163e9(param_1,*(undefined4 *)(lVar2 + lVar4));
        FUN_1400ac536("Column %02d: OffsetNorm %.3f (= %.1f px)",
                      (int)((ulonglong)((lVar2 + lVar4) - *(longlong *)(param_1 + 0x1a)) >> 2) *
                      -0x49249249,(double)*(float *)(lVar2 + lVar4),(double)fVar5);
        lVar4 = lVar4 + 0x1c;
      } while ((longlong)iVar1 * 0x1c != lVar4);
    }
    FUN_1400c66d9();
    return;
  }
  return;
}

