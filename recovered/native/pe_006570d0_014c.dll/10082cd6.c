/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10082cd6 */

int __fastcall FUN_10082cd6(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10082d16();
  if (iVar1 == -1) {
    param_1 = (int *)*param_1;
    FUN_10073a60((uint)(*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) << 2 |
                 *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | 1,0);
  }
  return iVar1;
}

