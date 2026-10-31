/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d6470 */

longlong * FUN_1400d6470(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_1400d64cb;
  if (**(longlong **)(lVar2 + 0x38) == 0) {
LAB_1400d64ac:
    uVar4 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
  }
  else {
    iVar1 = **(int **)(lVar2 + 0x50);
    if (iVar1 < 1) goto LAB_1400d64ac;
    **(int **)(lVar2 + 0x50) = iVar1 + -1;
    pbVar3 = (byte *)**(longlong **)(lVar2 + 0x38);
    **(longlong **)(lVar2 + 0x38) = (longlong)(pbVar3 + 1);
    uVar4 = (uint)*pbVar3;
  }
  if (uVar4 != 0xffffffff) {
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_1400d64cb:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

