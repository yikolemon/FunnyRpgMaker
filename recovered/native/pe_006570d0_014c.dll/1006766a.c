/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006766a */

int * __thiscall FUN_1006766a(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined1 local_34 [4];
  int local_30;
  int *local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c22a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_2c = param_1;
  FUN_100677d6(param_1,*param_1,param_3,param_4);
  iVar2 = local_30;
  iVar3 = *local_2c;
  iVar5 = *(int *)(iVar3 + 4);
  local_24 = local_30;
  if (*(char *)(iVar5 + 0xd) == '\0') {
    iVar1 = iVar5;
    do {
      iVar5 = iVar1;
      bVar4 = *(uint *)(iVar5 + 0x10) < *(uint *)(local_30 + 0x10);
      if (*(uint *)(iVar5 + 0x10) == *(uint *)(local_30 + 0x10)) {
        bVar4 = *(uint *)(iVar5 + 0x14) < *(uint *)(local_30 + 0x14);
      }
      if (bVar4 == false) {
        iVar3 = iVar5;
      }
      iVar1 = *(int *)(iVar5 + (uint)bVar4 * 8);
    } while (*(char *)(iVar1 + 0xd) == '\0');
    local_28 = (uint)(bVar4 ^ 1);
  }
  else {
    local_28 = 0;
  }
  if (*(char *)(iVar3 + 0xd) == '\0') {
    bVar4 = *(uint *)(iVar3 + 0x10) <= *(uint *)(local_30 + 0x10);
    if (*(uint *)(local_30 + 0x10) == *(uint *)(iVar3 + 0x10)) {
      bVar4 = *(uint *)(iVar3 + 0x14) <= *(uint *)(local_30 + 0x14);
    }
    if (bVar4) {
      *param_2 = iVar3;
      *(undefined1 *)(param_2 + 1) = 0;
      bVar4 = true;
      goto LAB_1006777a;
    }
  }
  if (local_2c[1] == 0xaaaaaaa) {
    local_14 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_1005283a();
  }
  local_30 = 0;
  bVar4 = false;
LAB_1006777a:
  local_14 = 0xffffffff;
  FUN_10067890();
  if (!bVar4) {
    iVar3 = FUN_1005271c(iVar5,local_28,iVar2);
    *param_2 = iVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  ExceptionList = local_1c;
  return param_2;
}

