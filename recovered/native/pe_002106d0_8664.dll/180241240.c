/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180241240 */

longlong * FUN_180241240(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_18024129b;
  if (**(longlong **)(lVar2 + 0x38) == 0) {
LAB_18024127c:
    uVar4 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  }
  else {
    iVar1 = **(int **)(lVar2 + 0x50);
    if (iVar1 < 1) goto LAB_18024127c;
    **(int **)(lVar2 + 0x50) = iVar1 + -1;
    pbVar3 = (byte *)**(longlong **)(lVar2 + 0x38);
    **(longlong **)(lVar2 + 0x38) = (longlong)(pbVar3 + 1);
    uVar4 = (uint)*pbVar3;
  }
  if (uVar4 != 0xffffffff) {
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_18024129b:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

