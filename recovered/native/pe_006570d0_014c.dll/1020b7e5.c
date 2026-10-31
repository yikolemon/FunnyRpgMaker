/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b7e5 */

void __fastcall
FUN_1020b7e5(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  FUN_1020c600(*(undefined4 *)(param_1 + 0x2dc8),param_2,param_3,&local_18,&local_1c);
  FUN_1020c600(param_5,param_6,param_7,&local_20,&local_24);
  iVar5 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar5 + 0x10);
  local_34 = param_5;
  iVar4 = FUN_1020cae9(param_4,param_5);
  *(int *)(iVar5 + 0x10) = iVar4 + iVar1;
  local_2c = *(int *)(param_1 + 0x2dc4) + local_18;
  param_2 = local_18 + param_2;
  local_28 = *(int *)(param_1 + 0x2dc8) + local_1c;
  param_3 = local_1c + param_3;
  if (*(char *)(param_1 + 0x2d8f) != '\0') {
    local_38 = local_24;
    FUN_1020c7be(local_28);
    *(undefined1 *)(param_1 + 0x2d8f) = 0;
    *(undefined1 *)(param_1 + 0x2d8c) = 1;
    *(int *)(param_1 + 0x2dbc) = param_2;
    *(int *)(param_1 + 0x2dc0) = param_3;
    local_24 = local_38;
  }
  local_34 = local_34 + local_24;
  local_38 = local_24 + param_7;
  iVar5 = param_4 + local_20;
  if (*(char *)(param_1 + 0x2ddc) != '\0') {
    local_30 = param_4 + local_20;
    FUN_1020c871(&local_2c,param_2,param_3,0);
    iVar5 = local_30;
  }
  *(undefined1 *)(param_1 + 0x2ddc) = 1;
  *(undefined4 *)(param_1 + 0x2de0) = 4;
  *(int *)(param_1 + 0x2de8) = local_28;
  *(int *)(param_1 + 0x2de4) = local_2c;
  *(int *)(param_1 + 0x2dec) = param_2;
  *(int *)(param_1 + 0x2df0) = param_3;
  *(int *)(param_1 + 0x2df4) = iVar5;
  *(int *)(param_1 + 0x2df8) = local_34;
  *(int *)(param_1 + 0x2dfc) = local_20 + param_6;
  *(int *)(param_1 + 0x2e00) = local_38;
  uVar2 = *(undefined4 *)(param_1 + 0x2d98);
  cVar3 = FUN_1020c5fc();
  if (cVar3 != '\0') {
    FUN_1020c0df(*(undefined4 *)(param_1 + 0x2d94),uVar2,*(undefined4 *)(param_1 + 0x2d9c),0);
  }
  *(int *)(param_1 + 0x2dc4) = param_6;
  *(int *)(param_1 + 0x2dc8) = param_7;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

