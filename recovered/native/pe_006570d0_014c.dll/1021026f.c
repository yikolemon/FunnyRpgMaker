/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021026f */

void __thiscall FUN_1021026f(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] != 0) {
    return;
  }
  puVar2 = (undefined4 *)(param_3 + 4);
  param_2 = param_2 + 1;
  do {
    iVar1 = FUN_102102c2(*puVar2,*param_1,0);
    if (iVar1 != 0) {
      param_1[1] = iVar1;
      return;
    }
    puVar2 = puVar2 + 2;
    param_2 = param_2 + -1;
  } while (1 < param_2);
  return;
}

