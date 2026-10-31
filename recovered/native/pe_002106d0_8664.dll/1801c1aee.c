/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c1aee */

int FUN_1801c1aee(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = DAT_180420708[1];
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *DAT_180420708;
    lVar4 = 0;
    do {
      switch(*(undefined4 *)(lVar1 + lVar4)) {
      case 0:
        iVar3 = *param_1 - *param_2;
        break;
      case 1:
      case 4:
        iVar3 = strcmp(*(char **)(param_1 + 2),*(char **)(param_2 + 2));
        break;
      default:
        goto switchD_1801c1b37_caseD_2;
      case 3:
        iVar3 = param_1[4] - param_2[4];
      }
      if (0 < iVar3) {
        bVar5 = *(char *)(lVar1 + 8 + lVar4) == '\x01';
LAB_1801c1b81:
        return (uint)bVar5 * 2 + -1;
      }
      if (iVar3 < 0) {
        bVar5 = *(char *)(lVar1 + 8 + lVar4) != '\x01';
        goto LAB_1801c1b81;
      }
switchD_1801c1b37_caseD_2:
      lVar4 = lVar4 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar4);
  }
  return *param_1 - *param_2;
}

