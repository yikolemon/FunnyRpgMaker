/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10104092 */

void FUN_10104092(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_20;
  int *local_1c;
  
  iVar3 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x1fbc);
  if (iVar1 != 0) {
    iVar8 = 0;
    if (iVar1 < 1 || param_1 == 0) {
LAB_1010412f:
      if (iVar8 < iVar1) {
        if ((*(byte *)(iVar3 + 0x27b4) & 8) != 0) {
          if (param_1 == 0) {
            pcVar5 = "<NULL>";
          }
          else {
            pcVar5 = *(char **)(param_1 + 4);
          }
          FUN_100f99e6("[popup] ClosePopupsOverWindow(\"%s\")\n",pcVar5);
        }
        FUN_1011630c(iVar8,param_2);
      }
    }
    else {
      iVar2 = *(int *)(DAT_1039d74c + 0x1fc4);
      local_1c = (int *)(iVar2 + 4);
      iVar8 = 0;
      local_20 = iVar1;
      do {
        piVar6 = local_1c;
        iVar7 = local_20;
        if (*(int *)(iVar2 + 4 + iVar8 * 0x28) != 0) {
          while ((*piVar6 == 0 || (cVar4 = FUN_101029f7(param_1,*piVar6), cVar4 == '\0'))) {
            iVar7 = iVar7 + -1;
            piVar6 = piVar6 + 10;
            if (iVar7 == 0) goto LAB_1010412f;
          }
        }
        iVar8 = iVar8 + 1;
        local_20 = local_20 + -1;
        local_1c = local_1c + 10;
      } while (iVar8 != iVar1);
    }
  }
  return;
}

