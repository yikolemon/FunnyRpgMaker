/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151dc5 */

int __fastcall FUN_10151dc5(int *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar8;
  char *pcVar9;
  char *pcVar7;
  
  iVar3 = FUN_10151d91();
  iVar6 = iVar3;
  if (*(char *)(param_2 + 0x17) == '\0') {
    iVar6 = param_3;
    if (0.0 < (float)param_1[0x13]) {
      iVar1 = *param_1;
      pcVar8 = (char *)(param_1[5] + param_3);
      pcVar4 = (char *)FUN_100fa34e(pcVar8,param_1[5]);
      pcVar9 = (char *)(param_1[5] + param_1[4]);
      if (pcVar4 < pcVar9) {
        do {
          pcVar5 = (char *)FUN_101932d6(*(undefined4 *)(iVar1 + 0x1220),
                                        *(undefined4 *)(iVar1 + 0x1228),pcVar4,pcVar9,param_1[0x13],
                                        2);
          if ((pcVar5 == pcVar8) && (pcVar7 = pcVar8, *(char *)((int)param_1 + 0x5a) != '\0'))
          break;
          if (pcVar8 < pcVar5) {
            return (int)pcVar5 - param_1[5];
          }
          pcVar4 = pcVar5 + (*pcVar5 == '\n');
          pcVar7 = pcVar5;
        } while (pcVar4 < pcVar9);
        iVar6 = (int)pcVar7 - param_1[5];
      }
    }
    while ((iVar6 < iVar3 && (cVar2 = FUN_10142d40(), cVar2 != '\n'))) {
      iVar6 = FUN_101518f3();
    }
  }
  return iVar6;
}

