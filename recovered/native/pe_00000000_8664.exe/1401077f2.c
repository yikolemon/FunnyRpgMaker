/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401077f2 */

int FUN_1401077f2(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = DAT_140f31e58[1];
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *DAT_140f31e58;
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
        goto switchD_14010783b_caseD_2;
      case 3:
        iVar3 = param_1[4] - param_2[4];
      }
      if (0 < iVar3) {
        bVar5 = *(char *)(lVar1 + 8 + lVar4) == '\x01';
LAB_140107885:
        return (uint)bVar5 * 2 + -1;
      }
      if (iVar3 < 0) {
        bVar5 = *(char *)(lVar1 + 8 + lVar4) != '\x01';
        goto LAB_140107885;
      }
switchD_14010783b_caseD_2:
      lVar4 = lVar4 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar4);
  }
  return *param_1 - *param_2;
}

