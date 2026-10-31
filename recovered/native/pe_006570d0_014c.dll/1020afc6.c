/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020afc6 */

void __fastcall FUN_1020afc6(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_101c2523(*(undefined4 *)(*(int *)(param_1 + 0x218) + 0x17c),0x3e80000);
  *param_2 = uVar1;
  *param_3 = *(int *)(*(int *)(param_1 + 0x218) + 0x180) << 0x10;
  *param_4 = *(int *)(*(int *)(param_1 + 0x218) + 0x184) << 0x10;
  return;
}

