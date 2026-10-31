/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101134c2 */

int FUN_101134c2(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  iVar1 = FUN_100fa6c3(param_1,iVar1,param_3);
  if (*(int *)(DAT_1039d74c + 0x150c) == iVar1) {
    FUN_10112e5a(iVar1,0xb,param_1,param_2);
  }
  return iVar1;
}

