/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ea5d2 */

void FUN_100ea5d2(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,int param_6,
                 uint param_7)

{
  int iVar1;
  int iVar2;
  
  for (; param_3 != param_5; param_3 = param_3 + 1) {
    iVar1 = *(int *)(*(int *)(param_2 + 4) + (*(int *)(param_2 + 8) - 1U & param_3) * 4);
    iVar2 = *(int *)(*(int *)(param_6 + 4) + (*(int *)(param_6 + 8) - 1U & param_7) * 4);
    FUN_1025b2d0(iVar2,iVar1,0x2018);
    FUN_100ea59c(iVar1 + 0x2018);
    FUN_1025b2d0(iVar2 + 0x2040,iVar1 + 0x2040,0x1000);
    param_7 = param_7 + 1;
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return;
}

