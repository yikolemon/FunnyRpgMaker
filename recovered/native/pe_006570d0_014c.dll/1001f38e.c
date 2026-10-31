/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f38e */

void __fastcall FUN_1001f38e(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 8) = uVar2;
  if (uVar2 < 1000) {
    iVar3 = FUN_1001d146(uVar2);
    FUN_1001d1e2();
    FUN_1001d25a(iVar3);
    FUN_1001f5fc(*(int *)(param_1 + 8) + 1,0);
    puVar1 = (uint *)(*(int *)(param_1 + 0x10) + (*(uint *)(iVar3 + 0x14) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(iVar3 + 0x14) & 0x1f);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228760(0xc);
}

