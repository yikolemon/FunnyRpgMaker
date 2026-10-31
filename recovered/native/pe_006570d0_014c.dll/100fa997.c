/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa997 */

int FUN_100fa997(undefined4 param_1,undefined4 param_2,int *param_3,size_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_100fa7a5(param_1,param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_100fa8fc(iVar1);
    if ((iVar2 == -1) || (iVar3 = FUN_100fa1fa(param_4 + iVar2), iVar3 == 0)) {
      FUN_100fa8ea(iVar1);
    }
    else {
      iVar4 = FUN_100fa961(iVar3,1,0,iVar2,0,iVar1);
      if (iVar4 == iVar2) {
        if (0 < (int)param_4) {
          _memset((void *)(iVar3 + iVar2),0,param_4);
        }
        FUN_100fa8ea(iVar1);
        if (param_3 != (int *)0x0) {
          *param_3 = iVar2;
          return iVar3;
        }
        return iVar3;
      }
      FUN_100fa8ea(iVar1);
      FUN_100fa2cb(iVar3);
    }
  }
  return 0;
}

