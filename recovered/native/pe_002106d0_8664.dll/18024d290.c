/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024d290 */

longlong * FUN_18024d290(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  short sVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_18024d2f0;
  if (**(longlong **)(lVar2 + 0x38) == 0) {
LAB_18024d2cc:
    sVar4 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  }
  else {
    iVar1 = **(int **)(lVar2 + 0x50);
    if (iVar1 < 1) goto LAB_18024d2cc;
    **(int **)(lVar2 + 0x50) = iVar1 + -1;
    psVar3 = (short *)**(longlong **)(lVar2 + 0x38);
    **(longlong **)(lVar2 + 0x38) = (longlong)(psVar3 + 1);
    sVar4 = *psVar3;
  }
  if (sVar4 != -1) {
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_18024d2f0:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

