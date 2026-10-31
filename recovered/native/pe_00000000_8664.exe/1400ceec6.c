/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ceec6 */

int FUN_1400ceec6(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar8;
  char *pcVar9;
  char *pcVar7;
  
  iVar3 = FUN_1400cee8d();
  iVar6 = iVar3;
  if (*(char *)(param_2 + 0x17) == '\0') {
    iVar6 = param_3;
    if (0.0 < *(float *)(param_1 + 0xd)) {
      lVar1 = *param_1;
      pcVar8 = (char *)((longlong)param_3 + param_1[4]);
      pcVar4 = (char *)FUN_140077c0f(pcVar8);
      pcVar9 = (char *)((longlong)(int)param_1[3] + param_1[4]);
      if (pcVar4 < pcVar9) {
        do {
          pcVar5 = (char *)FUN_1400e64e3(*(undefined8 *)(lVar1 + 0x1310),
                                         *(undefined4 *)(lVar1 + 0x1320),pcVar4,pcVar9,
                                         (int)param_1[0xd],2);
          if ((pcVar5 == pcVar8) && (pcVar7 = pcVar8, *(char *)((longlong)param_1 + 0x76) != '\0'))
          break;
          if (pcVar8 < pcVar5) {
            return (int)pcVar5 - (int)param_1[4];
          }
          pcVar4 = pcVar5 + (*pcVar5 == '\n');
          pcVar7 = pcVar5;
        } while (pcVar4 < pcVar9);
        iVar6 = (int)pcVar7 - (int)param_1[4];
      }
    }
    while ((iVar6 < iVar3 && (cVar2 = FUN_1400c05fb(param_1,iVar6), cVar2 != '\n'))) {
      iVar6 = FUN_1400ce967(param_1,iVar6);
    }
  }
  return iVar6;
}

