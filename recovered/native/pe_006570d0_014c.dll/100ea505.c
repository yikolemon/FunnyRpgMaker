/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ea505 */

void FUN_100ea505(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  int iVar1;
  int iVar2;
  
  while (param_3 != param_5) {
    param_5 = param_5 - 1;
    iVar1 = *(int *)(*(int *)(param_4 + 4) + (*(int *)(param_4 + 8) - 1U & param_5) * 4);
    param_7 = param_7 - 1;
    iVar2 = *(int *)(*(int *)(param_6 + 4) + (*(int *)(param_6 + 8) - 1U & param_7) * 4);
    FUN_1025b2d0(iVar2,iVar1,0x2018);
    FUN_100ea59c(iVar1 + 0x2018);
    FUN_1025b2d0(iVar2 + 0x2040,iVar1 + 0x2040,0x1000);
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return;
}

