/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100879de */

int * __thiscall FUN_100879de(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != param_1[1]) {
    do {
      cVar1 = FUN_1001bb3a(param_3);
      if (cVar1 != '\0') {
        uVar2 = 0;
        goto LAB_10087a1f;
      }
      iVar3 = iVar3 + 0x28;
    } while (iVar3 != param_1[1]);
  }
  FUN_10087a2e(param_3,param_4);
  iVar3 = param_1[1] + -0x28;
  uVar2 = 1;
LAB_10087a1f:
  *param_2 = iVar3;
  *(undefined1 *)(param_2 + 1) = uVar2;
  return param_2;
}

