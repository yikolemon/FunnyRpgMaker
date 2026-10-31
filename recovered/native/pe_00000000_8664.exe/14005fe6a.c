/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005fe6a */

void FUN_14005fe6a(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar3;
  if (uVar3 < 1000) {
    lVar2 = FUN_14005d5f0(param_1 + 0x38);
    FUN_14005d67a(param_1);
    FUN_14005d714(param_1 + 0x38,lVar2);
    FUN_1400600f4(param_1 + 0x18,*(int *)(param_1 + 0x10) + 1,0);
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(*(uint *)(lVar2 + 0x20) >> 5) * 4)
    ;
    *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(lVar2 + 0x20) & 0x1f);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140189b60(0xc);
}

