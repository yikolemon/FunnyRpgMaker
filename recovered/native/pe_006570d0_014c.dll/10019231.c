/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10019231 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_10019231(int param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined1 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined1 auStack_10c0 [4];
  uint local_10bc;
  undefined4 local_10b0;
  undefined4 local_105c;
  undefined4 local_1054;
  undefined4 local_104c;
  byte local_1032;
  undefined1 local_1030;
  undefined1 local_1028 [4096];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = &stack0xfffffffc;
  uStack_14 = 0x10019244;
  local_24 = auStack_10c0;
  local_18 = 0xffffffff;
  local_1c = &LAB_10059220;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  puVar2 = &stack0xfffffffc;
  puVar3 = auStack_10c0;
  if (param_3 != (int *)0x0) {
    *(undefined1 *)(param_3 + 1) = 1;
    FUN_1001992e(0,local_1028);
    puVar2 = local_28;
    puVar3 = local_24;
  }
  local_24 = puVar3;
  local_28 = puVar2;
  iVar1 = *param_4;
  if (iVar1 == 0) {
    local_10bc = 0;
  }
  else {
    FUN_1001937a(param_1,param_2,param_4 + 1,iVar1,*(undefined4 *)(iVar1 + 0x1c),
                 *(undefined4 *)(iVar1 + 0x14),param_5,local_1028);
    local_18 = 0;
    local_10b0 = local_104c;
    local_1030 = param_6;
    local_105c = 0;
    local_1032 = 0;
    uVar5 = FUN_1001a4a4(local_1054);
    bVar4 = (byte)uVar5 | local_1032;
    local_10bc = CONCAT31((int3)((uint)uVar5 >> 8),bVar4);
    if ((param_3 != (int *)0x0) && ((bVar4 & 1) != 0)) {
      FUN_1001966e(param_3);
      *param_3 = param_1;
      param_3[5] = param_1;
      *(bool *)(param_3 + 7) = param_1 != param_3[6];
    }
    local_18 = 0xffffffff;
    FUN_10019768();
  }
  ExceptionList = local_20;
  return local_10bc & 0xffffff01;
}

