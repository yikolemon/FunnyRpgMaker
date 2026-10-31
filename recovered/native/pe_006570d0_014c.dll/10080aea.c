/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080aea */

void __fastcall FUN_10080aea(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100752c4();
  if (iVar1 == 0) {
    FUN_10073a60((uint)(*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) << 2 |
                 *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | 2,0);
  }
  return;
}

