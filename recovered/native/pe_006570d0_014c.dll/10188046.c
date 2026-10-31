/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10188046 */

void __fastcall FUN_10188046(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  iVar1 = param_1[2] + iVar2 * 0x40;
  iVar4 = *(int *)(param_1[2] + -0x18 + iVar2 * 0x40);
  if ((iVar4 != 0) &&
     ((*(int *)(iVar1 + -0x28) != param_1[0x18] || *(int *)(iVar1 + -0x24) != param_1[0x19] ||
      (*(int *)(iVar1 + -0x30) != param_1[0x16])))) {
    FUN_10187d74();
    return;
  }
  if (*(int *)(iVar1 + -0x14) == 0) {
    if ((((1 < iVar2) && (iVar4 == 0)) &&
        (iVar4 = FUN_102595e0(param_1 + 0x12,iVar1 + -0x80,0x24), iVar4 == 0)) &&
       ((*(int *)(iVar1 + -0x58) + *(int *)(iVar1 + -0x5c) == *(int *)(iVar1 + -0x1c) &&
        (*(int *)(iVar1 + -0x54) == 0)))) {
      *param_1 = iVar2 + -1;
      return;
    }
    iVar2 = param_1[0x17];
    iVar4 = param_1[0x18];
    iVar3 = param_1[0x19];
    *(int *)(iVar1 + -0x30) = param_1[0x16];
    *(int *)(iVar1 + -0x2c) = iVar2;
    *(int *)(iVar1 + -0x28) = iVar4;
    *(int *)(iVar1 + -0x24) = iVar3;
  }
  return;
}

