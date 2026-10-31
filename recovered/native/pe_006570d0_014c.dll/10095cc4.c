/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10095cc4 */

undefined4 __thiscall FUN_10095cc4(char *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*param_1 != '\x01') {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  iVar4 = *piVar1;
  if (iVar4 == piVar1[1]) {
    uVar3 = 0;
  }
  else {
    do {
      cVar2 = FUN_10095d66(param_2);
      if (cVar2 != '\0') break;
      iVar4 = iVar4 + 0x28;
    } while (iVar4 != piVar1[1]);
    uVar3 = CONCAT31((int3)((uint)*(int *)(param_1 + 8) >> 8),
                     iVar4 != *(int *)(*(int *)(param_1 + 8) + 4));
  }
  return uVar3;
}

