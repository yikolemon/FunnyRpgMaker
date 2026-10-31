/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009667e */

void FUN_14009667e(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar3;
  if (uVar3 < 1000) {
    lVar2 = FUN_140093f90(param_1 + 0x38);
    FUN_14009401a(param_1);
    FUN_1400940b4(param_1 + 0x38,lVar2);
    FUN_140096908(param_1 + 0x18,*(int *)(param_1 + 0x10) + 1,0);
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(*(uint *)(lVar2 + 0x20) >> 5) * 4)
    ;
    *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(lVar2 + 0x20) & 0x1f);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9f90(0xc);
}

