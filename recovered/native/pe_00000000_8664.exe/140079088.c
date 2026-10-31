/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140079088 */

void FUN_140079088(undefined8 *param_1,char param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  if (param_3[1] < 0) {
    uVar2 = FUN_140077ab4(0);
    if (*(longlong *)(param_3 + 2) != 0) {
      FUN_1401c5180(uVar2,*(longlong *)(param_3 + 2),(longlong)*param_3 << 4);
      FUN_140077b90(*(undefined8 *)(param_3 + 2));
    }
    *(undefined8 *)(param_3 + 2) = uVar2;
    param_3[1] = 0;
  }
  *param_3 = 0;
  pcVar5 = (char *)*param_1;
  pcVar4 = (char *)param_1[1];
  if (pcVar5 < pcVar4) {
    iVar7 = 0;
    pcVar8 = pcVar5;
    do {
      if (*pcVar8 == param_2) {
        if (iVar7 == param_3[1]) {
          if (iVar7 == 0) {
            iVar1 = 8;
          }
          else {
            iVar1 = iVar7 / 2 + iVar7;
          }
          iVar6 = iVar7 + 1;
          if (iVar7 + 1 < iVar1) {
            iVar6 = iVar1;
          }
          lVar3 = FUN_140077ab4((longlong)iVar6 << 4);
          if (*(longlong *)(param_3 + 2) != 0) {
            FUN_1401c5180(lVar3,*(longlong *)(param_3 + 2),(longlong)*param_3 << 4);
            FUN_140077b90(*(undefined8 *)(param_3 + 2));
          }
          *(longlong *)(param_3 + 2) = lVar3;
          param_3[1] = iVar6;
          iVar7 = *param_3;
        }
        else {
          lVar3 = *(longlong *)(param_3 + 2);
        }
        *(char **)(lVar3 + (longlong)iVar7 * 0x10) = pcVar5;
        *(char **)(lVar3 + 8 + (longlong)iVar7 * 0x10) = pcVar8;
        iVar7 = *param_3 + 1;
        *param_3 = iVar7;
        pcVar5 = pcVar8 + 1;
        pcVar4 = (char *)param_1[1];
      }
      pcVar8 = pcVar8 + 1;
    } while (pcVar8 < pcVar4);
    if (pcVar8 != pcVar5) {
      if (iVar7 == param_3[1]) {
        if (iVar7 == 0) {
          iVar1 = 8;
        }
        else {
          iVar1 = iVar7 / 2 + iVar7;
        }
        iVar6 = iVar7 + 1;
        if (iVar7 + 1 < iVar1) {
          iVar6 = iVar1;
        }
        lVar3 = FUN_140077ab4((longlong)iVar6 << 4);
        if (*(longlong *)(param_3 + 2) != 0) {
          FUN_1401c5180(lVar3,*(longlong *)(param_3 + 2),(longlong)*param_3 << 4);
          FUN_140077b90(*(undefined8 *)(param_3 + 2));
        }
        *(longlong *)(param_3 + 2) = lVar3;
        param_3[1] = iVar6;
        iVar7 = *param_3;
      }
      else {
        lVar3 = *(longlong *)(param_3 + 2);
      }
      *(char **)(lVar3 + (longlong)iVar7 * 0x10) = pcVar5;
      *(char **)(lVar3 + 8 + (longlong)iVar7 * 0x10) = pcVar8;
      *param_3 = *param_3 + 1;
    }
  }
  return;
}

