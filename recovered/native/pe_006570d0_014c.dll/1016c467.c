/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016c467 */

void __fastcall FUN_1016c467(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 ***pppuVar3;
  int iVar4;
  uint uVar5;
  undefined4 **local_4c [5];
  uint local_38;
  char *local_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  iVar4 = DAT_1039d9cc;
  local_20 = (undefined1 *)local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10180110;
  local_1c = ExceptionList;
  local_28 = *(int *)(param_1 + 0x20);
  local_2c = *(int *)(param_1 + 0x24);
  ExceptionList = &local_1c;
  FUN_101132aa(param_1);
  local_34 = "{:03d}: {}";
  uStack_30 = 10;
  local_24 = param_1;
  FUN_1016e421(local_4c,0xa1032f861,param_1,param_1 + 8);
  local_14 = 0;
  uVar5 = 0x810e0;
  if (local_28 == local_2c) {
    uVar5 = 0x813e8;
  }
  uVar1 = FUN_10148b8c("##DrawTreeNodes",uVar5 | iVar4 == local_24);
  local_28 = CONCAT31(local_28._1_3_,uVar1);
  cVar2 = FUN_10115d1a();
  if (cVar2 != '\0') {
    pppuVar3 = (undefined4 ***)local_4c[0];
    if (local_38 < 0x10) {
      pppuVar3 = local_4c;
    }
    FUN_1012d079(pppuVar3,0);
    thunk_FUN_1010ad44();
  }
  cVar2 = FUN_1010bf79(0);
  if (cVar2 != '\0') {
    DAT_1039d9cc = local_24;
    FUN_10179d48();
  }
  FUN_10114a0e(0,0);
  pppuVar3 = local_4c;
  if (0xf < local_38) {
    pppuVar3 = (undefined4 ***)local_4c[0];
  }
  FUN_1012d079(pppuVar3,0);
  if ((char)local_28 != '\0') {
    iVar4 = *(int *)(local_24 + 0x20);
    local_28 = *(int *)(local_24 + 0x24);
    if (iVar4 != local_28) {
      while (iVar4 != local_28) {
        local_24 = iVar4;
        FUN_1016c467();
        iVar4 = local_24 + 0x2c;
      }
      FUN_10149387();
    }
  }
  FUN_10113568();
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return;
}

