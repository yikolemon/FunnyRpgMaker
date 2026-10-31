/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a14d0 */

void __thiscall FUN_100a14d0(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (*(int *)param_1[8] != 0) {
    iVar1 = *(int *)param_1[0xc];
    if (0 < iVar1) {
      *(int *)param_1[0xc] = iVar1 + -1;
      puVar2 = *(undefined2 **)param_1[8];
      *(undefined2 **)param_1[8] = puVar2 + 1;
      *puVar2 = param_2;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x100a14fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

