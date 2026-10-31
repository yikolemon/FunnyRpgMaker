/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017e378 */

int * __thiscall FUN_1017e378(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  int *local_3c;
  int local_38;
  undefined4 local_30;
  int *local_2c;
  uint local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_18 = &LAB_101804b0;
  local_1c = ExceptionList;
  local_38 = *param_1;
  iVar7 = *(int *)(local_38 + 4);
  iVar5 = local_38;
  if (*(char *)(iVar7 + 0xd) == '\0') {
    iVar1 = *param_3;
    iVar3 = iVar7;
    do {
      iVar7 = iVar3;
      iVar2 = *(int *)(iVar7 + 0x10);
      if (iVar1 <= iVar2) {
        iVar5 = iVar7;
      }
      iVar3 = *(int *)(iVar7 + (uint)(iVar2 < iVar1) * 8);
    } while (*(char *)(iVar3 + 0xd) == '\0');
    local_28 = (uint)(iVar1 <= iVar2);
  }
  else {
    local_28 = 0;
  }
  if ((*(char *)(iVar5 + 0xd) == '\0') && (*(int *)(iVar5 + 0x10) <= *param_3)) {
    uVar6 = 0;
  }
  else {
    local_14 = 0xffffffff;
    ExceptionList = &local_1c;
    local_2c = param_1;
    if (param_1[1] == 0x7ffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_1005283a();
    }
    local_3c = param_3;
    local_20 = (undefined1 *)&local_3c;
    FUN_1017e498(param_1,local_38,&DAT_102910a0,&local_3c,&local_21);
    uVar4 = local_30;
    local_30 = 0;
    local_14 = 0xffffffff;
    FUN_1017e55e();
    iVar5 = FUN_1005271c(iVar7,local_28,uVar4);
    uVar6 = 1;
  }
  *param_2 = iVar5;
  *(undefined1 *)(param_2 + 1) = uVar6;
  ExceptionList = local_1c;
  return param_2;
}

