/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142bdd */

void __fastcall FUN_10142bdd(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_var;
  
  uVar1 = FUN_100fa683(param_3,param_5);
  uVar5 = 0;
  uVar6 = uVar5;
  if (0 < (int)uVar1) {
    do {
      uVar6 = uVar5;
      if (*(char *)(param_2 + uVar5) != *(char *)(param_4 + uVar5)) break;
      uVar5 = uVar5 + 1;
      uVar6 = uVar1;
    } while (uVar1 != uVar5);
  }
  if (param_5 != uVar6 || param_3 != uVar6) {
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      if (((int)(iVar4 + param_3) <= (int)uVar6) || ((int)(iVar4 + param_5) <= (int)uVar6)) break;
      iVar2 = iVar4 + -1;
    } while (*(char *)(param_3 + param_2 + -1 + iVar4) == *(char *)(param_4 + param_5 + -1 + iVar4))
    ;
    uVar1 = ~uVar6 + param_3 + iVar4;
    if (-1 < (int)(~uVar6 + param_5 + iVar4 & uVar1)) {
      iVar3 = (param_3 - uVar6) + iVar4;
      iVar2 = FUN_101522b9(iVar3,(param_5 - uVar6) + iVar4,iVar3,extraout_var);
      if (-1 < (int)uVar1 && iVar2 != 0) {
        iVar4 = 0;
        do {
          *(undefined1 *)(iVar2 + iVar4) = *(undefined1 *)(param_2 + uVar6 + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar3 != iVar4);
      }
    }
  }
  return;
}

