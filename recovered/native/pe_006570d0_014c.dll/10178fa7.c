/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10178fa7 */

int __fastcall FUN_10178fa7(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x10) == 0) {
LAB_10178fca:
      if (*(uint *)(param_1 + 0xb0) <= *(uint *)(param_1 + 0xac)) {
        return iVar5;
      }
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          return iVar5;
        }
        goto LAB_10178fca;
      }
    }
    cVar1 = *param_2;
    iVar3 = FUN_10179061();
    if (iVar3 == 0) {
      return iVar5;
    }
    pcVar4 = *(char **)(param_1 + 0xac);
    if (pcVar4 < *(char **)(param_1 + 0xb0)) {
LAB_10179007:
      *(char **)(param_1 + 0xac) = pcVar4 + 1;
      cVar2 = *pcVar4;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_10170e8c();
        pcVar4 = *(char **)(param_1 + 0xac);
        goto LAB_10179007;
      }
      cVar2 = '\0';
    }
    iVar5 = iVar5 * 10 + -0x30 + (int)cVar1;
    *param_2 = cVar2;
    if ((0xccccccc < iVar5) || ((iVar5 == 0xccccccc && ('7' < cVar2)))) {
      FUN_10170e07();
      return 0;
    }
  } while( true );
}

