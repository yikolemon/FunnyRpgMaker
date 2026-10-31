/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b0410 */

undefined4
FUN_1400b0410(char *param_1,ulonglong param_2,int param_3,int *param_4,int param_5,int param_6,
             longlong *param_7)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  longlong lVar9;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar5 = 0;
    if (0 < param_3) {
      iVar5 = param_3;
    }
    if (param_2 <= (ulonglong)(longlong)(iVar5 + 1)) {
      uVar7 = 0x22;
      goto LAB_1400b0434;
    }
    if (param_4 != (int *)0x0) {
      pcVar1 = *(char **)(param_4 + 2);
      *param_1 = '0';
      pcVar6 = pcVar1;
      pcVar8 = param_1;
      while( true ) {
        pcVar8 = pcVar8 + 1;
        if (param_3 < 1) break;
        cVar3 = *pcVar6;
        if (cVar3 == '\0') {
          cVar3 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar8 = cVar3;
        param_3 = param_3 + -1;
      }
      *pcVar8 = '\0';
      if ((-1 < param_3) && (bVar4 = FUN_1400b0520(pcVar1,pcVar6,*param_4,param_5,param_6), bVar4))
      {
        while( true ) {
          pcVar8 = pcVar8 + -1;
          if (*pcVar8 != '9') break;
          *pcVar8 = '0';
        }
        *pcVar8 = *pcVar8 + '\x01';
      }
      if (*param_1 == '1') {
        param_4[1] = param_4[1] + 1;
      }
      else {
        lVar2 = -1;
        do {
          lVar9 = lVar2;
          lVar2 = lVar9 + 1;
        } while (param_1[lVar9 + 2] != '\0');
        FUN_1400b3550((undefined8 *)param_1,(undefined8 *)(param_1 + 1),lVar9 + 2);
      }
      return 0;
    }
  }
  uVar7 = 0x16;
LAB_1400b0434:
  *(undefined4 *)((longlong)param_7 + 0x2c) = uVar7;
  *(undefined1 *)(param_7 + 6) = 1;
  FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_7);
  return uVar7;
}

