/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5f74 */

int * __thiscall FUN_100b5f74(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)param_2[1];
    *puVar1 = param_3;
    param_3[1] = (int)puVar1;
    iVar3 = 0;
    do {
      piVar2 = (int *)*param_2;
      FUN_100186f1(param_2 + 2);
      FUN_102283a0(param_2,0x24);
      iVar3 = iVar3 + -1;
      param_2 = piVar2;
    } while (piVar2 != param_3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar3;
  }
  return param_3;
}

