/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013d290 */

void FUN_14013d290(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*param_2 == 0) && (*(int *)(param_1 + 0x38) == 0)) {
    uVar1 = 0x84;
  }
  else {
    iVar3 = *param_2 + *(int *)(param_1 + 0x1e8);
    *(int *)(param_1 + 0x1e8) = iVar3;
    uVar1 = 0x84;
    if ((-1 < iVar3) &&
       (((longlong)*(int *)(param_1 + 0x250) < 1 ||
        (iVar3 <= *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 600) + -8 +
                            (longlong)*(int *)(param_1 + 0x250) * 0x18) + 8))))) {
      *(undefined4 *)(param_1 + 500) = 0;
      if (*param_2 < 0) {
        uVar2 = *(int *)(param_1 + 0x334) + 1;
        *(uint *)(param_1 + 0x334) = uVar2;
        uVar1 = 0x8b;
        if (*(uint *)(param_1 + 0x338) < uVar2) goto LAB_14013d307;
      }
      return;
    }
  }
LAB_14013d307:
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}

