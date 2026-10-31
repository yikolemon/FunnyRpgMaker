/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022b950 */

void FUN_1022b950(int param_1,char *param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  pwVar3 = __wsetlocale(0,(wchar_t *)0x0);
  pwVar2 = *(wchar_t **)(param_1 + 0x24);
  if (pwVar2 != pwVar3) {
    if (pwVar2 != (wchar_t *)0x0) {
      thunk_FUN_10274120(pwVar2);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (pwVar3 != (wchar_t *)0x0) {
      uVar4 = FUN_1022be50(pwVar3);
      *(undefined4 *)(param_1 + 0x24) = uVar4;
    }
  }
  pcVar5 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar5 = _setlocale(0,param_2);
  }
  pcVar7 = "*";
  if (pcVar5 != (char *)0x0) {
    pcVar7 = pcVar5;
  }
  pcVar5 = *(char **)(param_1 + 0x2c);
  if (pcVar5 != pcVar7) {
    if (pcVar5 != (char *)0x0) {
      thunk_FUN_10274120(pcVar5);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    pcVar5 = pcVar7;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar6 = FUN_1026faa0(pcVar5 + (1 - (int)(pcVar7 + 1)));
    if (iVar6 != 0) {
      FUN_1025b2d0(iVar6,pcVar7,pcVar5 + (1 - (int)(pcVar7 + 1)));
    }
    *(int *)(param_1 + 0x2c) = iVar6;
  }
  return;
}

