/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10168edd */

void FUN_10168edd(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  byte *pbVar7;
  
  cVar2 = FUN_10147c9d(*param_1,"Settings 0x%08X (%d columns)",*param_1,(int)*(short *)(param_1 + 3)
                      );
  if (cVar2 != '\0') {
    FUN_1012d551();
    FUN_1012d551("ColumnsCount: %d (max %d)",(int)*(short *)(param_1 + 3),
                 (int)*(short *)((int)param_1 + 0xe));
    if (0 < *(short *)(param_1 + 3)) {
      pbVar7 = (byte *)((int)param_1 + 0x22);
      iVar4 = 0;
      do {
        bVar1 = *pbVar7;
        bVar3 = bVar1 & 3;
        if (*(short *)(pbVar7 + -2) == -1) {
          bVar3 = 0;
        }
        pcVar5 = "Width ";
        if ((bVar1 & 0x10) != 0) {
          pcVar5 = "Weight";
        }
        puVar6 = &DAT_10333f3b;
        if (bVar3 != 2) {
          puVar6 = &DAT_10347063;
        }
        if (bVar3 == 1) {
          puVar6 = &DAT_1033b38e;
        }
        FUN_1012d551("Column %d Order %d SortOrder %d %s Vis %d %s %7.3f UserID 0x%08X",iVar4,
                     (int)*(short *)(pbVar7 + -4),(int)*(short *)(pbVar7 + -2),puVar6,
                     (int)((char)(bVar1 << 4) >> 6),pcVar5,(double)*(float *)(pbVar7 + -0xe),
                     *(undefined4 *)(pbVar7 + -10));
        iVar4 = iVar4 + 1;
        pbVar7 = pbVar7 + 0x10;
      } while (iVar4 < *(short *)(param_1 + 3));
    }
    FUN_10149387();
    return;
  }
  return;
}

