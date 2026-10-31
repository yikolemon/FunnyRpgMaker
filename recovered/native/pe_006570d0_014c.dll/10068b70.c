/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10068b70 */

int * __thiscall FUN_10068b70(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  int local_30 [2];
  undefined4 local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_30;
  local_18 = &LAB_100c2370;
  local_1c = ExceptionList;
  local_30[0] = *param_1;
  iVar8 = *(int *)(local_30[0] + 4);
  bVar7 = false;
  iVar5 = local_30[0];
  if (*(char *)(iVar8 + 0xd) == '\0') {
    iVar1 = *param_3;
    iVar3 = iVar8;
    do {
      iVar8 = iVar3;
      iVar2 = *(int *)(iVar8 + 0x10);
      if (iVar1 <= iVar2) {
        iVar5 = iVar8;
      }
      iVar3 = *(int *)(iVar8 + (uint)(iVar2 < iVar1) * 8);
    } while (*(char *)(iVar3 + 0xd) == '\0');
    bVar7 = iVar1 <= iVar2;
  }
  if ((*(char *)(iVar5 + 0xd) == '\0') && (*(int *)(iVar5 + 0x10) <= *param_3)) {
    uVar6 = 0;
  }
  else {
    local_14 = 0xffffffff;
    ExceptionList = &local_1c;
    local_24 = param_1;
    if (param_1[1] == 0xaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_1005283a();
    }
    local_20 = (undefined1 *)local_30;
    FUN_100677d6(param_1,local_30[0],param_3,param_4);
    uVar4 = local_28;
    local_28 = 0;
    local_14 = 0xffffffff;
    FUN_10067890();
    iVar5 = FUN_1005271c(iVar8,bVar7,uVar4);
    uVar6 = 1;
  }
  *param_2 = iVar5;
  *(undefined1 *)(param_2 + 1) = uVar6;
  ExceptionList = local_1c;
  return param_2;
}

