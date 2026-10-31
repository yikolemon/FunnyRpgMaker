/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180131f77 */

void FUN_180131f77(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      FUN_180108907(uVar3,param_1 + 0x48,1);
      FUN_1801129fa(uVar3,param_1 + 0x50,1);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}

