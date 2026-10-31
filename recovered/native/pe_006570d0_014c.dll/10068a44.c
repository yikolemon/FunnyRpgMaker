/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10068a44 */

int * __thiscall FUN_10068a44(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2360;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100677d6(param_1,*param_1,param_3,param_4);
  iVar5 = *param_1;
  iVar6 = *(int *)(iVar5 + 4);
  local_24 = 0;
  local_28 = local_2c;
  if (*(char *)(iVar6 + 0xd) == '\0') {
    iVar1 = *(int *)(local_2c + 0x10);
    iVar3 = iVar6;
    do {
      iVar6 = iVar3;
      iVar2 = *(int *)(iVar6 + 0x10);
      if (iVar1 <= iVar2) {
        iVar5 = iVar6;
      }
      iVar3 = *(int *)(iVar6 + (uint)(iVar2 < iVar1) * 8);
    } while (*(char *)(iVar3 + 0xd) == '\0');
    local_24 = (uint)(iVar1 <= iVar2);
  }
  if ((*(char *)(iVar5 + 0xd) == '\0') && (*(int *)(iVar5 + 0x10) <= *(int *)(local_2c + 0x10))) {
    *param_2 = iVar5;
    *(undefined1 *)(param_2 + 1) = 0;
    bVar4 = true;
  }
  else {
    if (param_1[1] == 0xaaaaaaa) {
      local_14 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_1005283a();
    }
    local_2c = 0;
    bVar4 = false;
  }
  local_14 = 0xffffffff;
  FUN_10067890();
  if (!bVar4) {
    iVar5 = FUN_1005271c(iVar6,local_24,local_28);
    *param_2 = iVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  ExceptionList = local_1c;
  return param_2;
}

