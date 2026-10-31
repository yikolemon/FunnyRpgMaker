/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001f37e */

void FUN_18001f37e(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar3;
  if (uVar3 < 1000) {
    lVar2 = FUN_18001cebc(param_1 + 0x38);
    FUN_18001cf46(param_1);
    FUN_18001cfe0(param_1 + 0x38,lVar2);
    FUN_18001f608(param_1 + 0x18,*(int *)(param_1 + 0x10) + 1,0);
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(*(uint *)(lVar2 + 0x20) >> 5) * 4)
    ;
    *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(lVar2 + 0x20) & 0x1f);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180239ab0(0xc);
}

