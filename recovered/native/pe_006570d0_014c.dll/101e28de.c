/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e28de */

void __fastcall FUN_101e28de(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_2;
  if ((iVar1 < 1) || (*(int *)(param_1 + 0x20) < iVar1)) {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
      return;
    }
  }
  else {
    piVar3 = param_2 + -iVar1;
    iVar2 = *piVar3;
    FUN_1025b2d0(piVar3,piVar3 + 1,iVar1 * 4 + -4);
    param_2[-1] = iVar2;
  }
  return;
}

