/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151c4b */

int __fastcall FUN_10151c4b(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar6 = 0;
  if (*(char *)(param_2 + 0x17) == '\0') {
    if (0.0 < (float)param_1[0x13]) {
      iVar6 = *param_1;
      pcVar9 = (char *)(param_1[5] + param_3);
      pcVar4 = (char *)FUN_100fa34e(pcVar9,param_1[5]);
      iVar1 = param_1[5];
      iVar2 = param_1[4];
      pcVar7 = pcVar4;
      do {
        pcVar5 = (char *)FUN_101932d6(*(undefined4 *)(iVar6 + 0x1220),
                                      *(undefined4 *)(iVar6 + 0x1228),pcVar7,iVar1 + iVar2,
                                      param_1[0x13],2);
        pcVar8 = pcVar4;
        if (((pcVar7 == pcVar9) ||
            (((pcVar5 == pcVar9 && (*(char *)(param_1[8] + param_3) != '\n')) &&
             (*(char *)((int)param_1 + 0x5a) == '\0')))) || (pcVar8 = pcVar7, pcVar9 <= pcVar5)) {
          return (int)pcVar8 - param_1[5];
        }
        pcVar7 = pcVar5 + (*pcVar5 == '\n');
      } while (pcVar4 <= pcVar7);
    }
    do {
      iVar6 = param_3;
      if (iVar6 < 1) {
        return iVar6;
      }
      param_3 = FUN_101518a7();
      cVar3 = FUN_10142d40();
    } while (cVar3 != '\n');
  }
  return iVar6;
}

