/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011628e */

void FUN_14011628e(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined *puVar6;
  byte *pbVar7;
  
  cVar2 = FUN_1400c50f1(*param_1,"Settings 0x%08X (%d columns)",*param_1,
                        (int)*(short *)(param_1 + 3));
  if (cVar2 != '\0') {
    FUN_1400ac536("SaveFlags: 0x%08X",param_1[1]);
    FUN_1400ac536("ColumnsCount: %d (max %d)",(int)*(short *)(param_1 + 3),
                  (int)*(short *)((longlong)param_1 + 0xe));
    if (0 < *(short *)(param_1 + 3)) {
      pbVar7 = (byte *)((longlong)param_1 + 0x22);
      uVar5 = 0;
      do {
        bVar1 = *pbVar7;
        bVar3 = bVar1 & 3;
        if (*(short *)(pbVar7 + -2) == -1) {
          bVar3 = 0;
        }
        pcVar4 = "Width ";
        if ((bVar1 & 0x10) != 0) {
          pcVar4 = "Weight";
        }
        puVar6 = &DAT_140ec5adc;
        if (bVar3 != 2) {
          puVar6 = &DAT_140ed6fe0;
        }
        if (bVar3 == 1) {
          puVar6 = &DAT_140ecbfdc;
        }
        FUN_1400ac536("Column %d Order %d SortOrder %d %s Vis %d %s %7.3f UserID 0x%08X",
                      uVar5 & 0xffffffff,(int)*(short *)(pbVar7 + -4),(int)*(short *)(pbVar7 + -2),
                      puVar6,(int)((char)(bVar1 << 4) >> 6),pcVar4,(double)*(float *)(pbVar7 + -0xe)
                      ,*(undefined4 *)(pbVar7 + -10));
        uVar5 = uVar5 + 1;
        pbVar7 = pbVar7 + 0x10;
      } while ((longlong)uVar5 < (longlong)*(short *)(param_1 + 3));
    }
    FUN_1400c66d9();
    return;
  }
  return;
}

