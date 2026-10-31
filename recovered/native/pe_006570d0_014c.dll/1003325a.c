/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003325a */

int * __thiscall FUN_1003325a(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[1] != 0) {
    piVar1 = (int *)*param_1;
    iVar2 = piVar1[1];
    uVar3 = iVar2 + 1;
    if ((uint)piVar1[2] < uVar3) {
      (*(code *)piVar1[3])(piVar1,uVar3);
      iVar2 = piVar1[1];
      uVar3 = iVar2 + 1;
    }
    piVar1[1] = uVar3;
    *(undefined1 *)(*piVar1 + iVar2) = param_2;
    param_1[1] = param_1[1] + -1;
  }
  return param_1;
}

