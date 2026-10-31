/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008d710 */

void FUN_14008d710(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  PVOID pvVar3;
  bool bVar4;
  
  pvVar3 = FUN_14009d690();
  if (param_1 == *(longlong *)((longlong)pvVar3 + 0x58)) {
    pvVar3 = FUN_14009d690();
    lVar2 = *(longlong *)((longlong)pvVar3 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar4 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar4) {
        pvVar3 = FUN_14009d690();
        *(longlong *)((longlong)pvVar3 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140096cf8();
}

