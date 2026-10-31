/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180155e0a */

int FUN_180155e0a(longlong *param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  
  iVar8 = 0;
  if (*(char *)(param_2 + 0x17) == '\0') {
    if (0.0 < *(float *)(param_1 + 0xd)) {
      lVar2 = *param_1;
      pcVar1 = (char *)(param_1[4] + (longlong)param_3);
      pcVar6 = (char *)FUN_1800fe953(pcVar1);
      lVar4 = param_1[3];
      lVar3 = param_1[4];
      pcVar9 = pcVar6;
      do {
        pcVar7 = (char *)FUN_18019af6f(*(undefined8 *)(lVar2 + 0x1310),
                                       *(undefined4 *)(lVar2 + 0x1320),pcVar9,(int)lVar4 + lVar3,
                                       (int)param_1[0xd],2);
        pcVar10 = pcVar6;
        if (((pcVar9 == pcVar1) ||
            (((pcVar7 == pcVar1 && (*(char *)(param_1[6] + (longlong)param_3) != '\n')) &&
             (*(char *)((longlong)param_1 + 0x76) == '\0')))) ||
           (pcVar10 = pcVar9, pcVar1 <= pcVar7)) {
          return (int)pcVar10 - (int)param_1[4];
        }
        pcVar9 = pcVar7 + (*pcVar7 == '\n');
      } while (pcVar6 <= pcVar9);
    }
    do {
      iVar8 = param_3;
      if (iVar8 < 1) {
        return iVar8;
      }
      param_3 = FUN_1801559d3(param_1,iVar8);
      cVar5 = FUN_1801476cb(param_1,param_3);
    } while (cVar5 != '\n');
  }
  return iVar8;
}

