/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024d380 */

undefined1 * FUN_18024d380(undefined1 *param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) goto LAB_18024d3e2;
  if (**(longlong **)(lVar2 + 0x40) == 0) {
LAB_18024d3c2:
    param_2 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar2,param_2);
  }
  else {
    iVar1 = **(int **)(lVar2 + 0x58);
    if (iVar1 < 1) goto LAB_18024d3c2;
    **(int **)(lVar2 + 0x58) = iVar1 + -1;
    psVar3 = (short *)**(longlong **)(lVar2 + 0x40);
    **(longlong **)(lVar2 + 0x40) = (longlong)(psVar3 + 1);
    *psVar3 = param_2;
  }
  if (param_2 != -1) {
    return param_1;
  }
LAB_18024d3e2:
  *param_1 = 1;
  return param_1;
}

