/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101021d4 */

int __thiscall FUN_101021d4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 - param_2;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  iVar1 = FUN_100fa6c3(param_2,iVar1,*(undefined4 *)(param_1[0x50] + -4 + param_1[0x4e] * 4));
  if (*(int *)(*param_1 + 0x150c) == iVar1) {
    FUN_10112e5a(iVar1,0xb,param_2,param_3);
  }
  return iVar1;
}

