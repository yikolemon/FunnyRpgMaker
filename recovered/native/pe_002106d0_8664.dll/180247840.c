/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180247840 */

void FUN_180247840(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(int *)(param_1 + 0x10) == -0x1f928c9d) && (*(int *)(param_1 + 0x28) == 4)) {
    if ((*(int *)(param_1 + 0x30) + 0xe66cfae0U < 3) || (*(int *)(param_1 + 0x30) == 0x1994000)) {
      lVar1 = *(longlong *)(param_1 + 0x40);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar2 = *(longlong **)(param_1 + 0x38);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = *(longlong *)(param_1 + 0x48);
        if (*(int *)(lVar1 + 4) != 0) {
          FUN_1802476c0(plVar2,lVar3 + *(int *)(lVar1 + 4));
          return;
        }
        if (((*(byte *)(*(int *)((longlong)*(int *)(lVar1 + 0xc) + 4 + lVar3) + lVar3) & 8) != 0) &&
           (*plVar2 != 0)) {
          (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
      }
    }
  }
  return;
}

