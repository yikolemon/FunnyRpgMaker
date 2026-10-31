/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e5fa */

void FUN_1018e5fa(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
    iVar4 = 0;
    do {
      FUN_1018e667(param_1,*(undefined4 *)(iVar1 + iVar4));
      iVar4 = iVar4 + 4;
    } while (iVar3 << 2 != iVar4);
  }
  iVar3 = *(int *)(param_1 + 0x290);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else if ((*(int *)(param_1 + 0x294) != 0) &&
          (pcVar2 = *(code **)(*(int *)(param_1 + 0x294) + 8), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1);
    iVar3 = *(int *)(param_1 + 0x290);
  }
  FUN_1019260b(iVar3);
  *(undefined4 *)(param_1 + 0x290) = 0;
  return;
}

