/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046273e */

void __fastcall FUN_0046273e(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_0041eaa0(*(uint *)(*(int *)(param_1 + 0x218) + 0x17c),0x3e80000);
  *param_2 = iVar1;
  *param_3 = *(int *)(*(int *)(param_1 + 0x218) + 0x180) << 0x10;
  *param_4 = *(int *)(*(int *)(param_1 + 0x218) + 0x184) << 0x10;
  return;
}

