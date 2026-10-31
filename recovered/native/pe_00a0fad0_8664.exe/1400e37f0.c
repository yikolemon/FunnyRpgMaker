/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e37f0 */

longlong * FUN_1400e37f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  short sVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_1400e3850;
  if (**(longlong **)(lVar2 + 0x38) == 0) {
LAB_1400e382c:
    sVar4 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
  }
  else {
    iVar1 = **(int **)(lVar2 + 0x50);
    if (iVar1 < 1) goto LAB_1400e382c;
    **(int **)(lVar2 + 0x50) = iVar1 + -1;
    psVar3 = (short *)**(longlong **)(lVar2 + 0x38);
    **(longlong **)(lVar2 + 0x38) = (longlong)(psVar3 + 1);
    sVar4 = *psVar3;
  }
  if (sVar4 != -1) {
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_1400e3850:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

