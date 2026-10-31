/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134a0d */

undefined4 __fastcall FUN_10134a0d(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (((param_2 == (int *)0x0) || (iVar1 = *param_2, iVar1 <= *param_1)) &&
     ((param_3 == (int *)0x0 || (iVar1 = *param_3, *param_1 <= iVar1)))) {
    return 0;
  }
  *param_1 = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

