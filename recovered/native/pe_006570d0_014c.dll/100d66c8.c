/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d66c8 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100d66c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 ***pppuVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  undefined4 ***local_b0;
  undefined8 local_ac;
  undefined4 ***local_a4;
  undefined1 auStack_a0 [8];
  undefined4 ***local_98;
  undefined4 ***local_94;
  undefined4 ***local_90;
  undefined4 ***pppuStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 ***local_78;
  undefined4 ***local_74;
  undefined8 local_70;
  undefined4 ***local_60;
  undefined4 ***pppuStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 ***local_44;
  undefined *local_40;
  undefined4 uStack_3c;
  char *local_38;
  undefined4 uStack_34;
  char *local_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_a0;
  local_18 = 0xffffffff;
  local_1c = &LAB_100dde80;
  local_20 = ExceptionList;
  local_a4 = (undefined4 ***)0x0;
  local_ac = CONCAT44(param_2,0x100d6712);
  ExceptionList = &local_20;
  FUN_1012d079();
  local_a4 = (undefined4 ***)0x3f800000;
  local_ac = 0x3e99999a100d6724;
  fVar5 = (float10)FUN_10156430();
  local_a4 = (undefined4 ***)(float)fVar5;
  local_ac = CONCAT44(0x100d672f,(undefined4)local_ac);
  FUN_100fb68f();
  local_a4 = &local_60;
  pppuStack_5c = (undefined4 ***)0x0;
  local_60 = (undefined4 ***)0x0;
  local_ac = CONCAT44(&param_3,0x100d6748);
  local_70 = FUN_100d8c68();
  local_a4 = &local_78;
  local_78 = (undefined4 ***)0x1033266b;
  local_74 = (undefined4 ***)0x9;
  local_ac = CONCAT44(0x100d676e,(undefined4)local_ac);
  FUN_100d8f98();
  local_18 = 0;
  local_a4 = &local_90;
  pppuStack_8c = (undefined4 ****)0x0;
  local_90 = (undefined4 ****)0x0;
  local_ac = CONCAT44(local_60 + param_4 * 4,0x100d6798);
  local_94 = local_a4;
  FUN_100d8b63();
  pppuVar2 = pppuStack_8c;
  local_44 = local_90;
  local_18 = 0xffffffff;
  local_a4 = (undefined4 ***)0x100d67b9;
  FUN_100171ce();
  local_74 = pppuVar2;
  local_78 = local_44;
  local_60 = (undefined4 ***)0x0;
  pppuStack_5c = (undefined4 ***)0x0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = 0xf00000000;
  local_18 = 1;
  local_98 = &local_60;
  if ((int)pppuVar2 < (int)(uint)((undefined4 ****)local_44 == (undefined4 ****)0x0)) {
    if ((int)pppuVar2 < 0) {
      local_38 = "{}(%lld)";
      uStack_34 = 8;
      local_ac = 0x8103490c0;
      local_a4 = (undefined4 ***)&local_70;
      local_b0 = &local_90;
      FUN_100d5a69();
      local_18 = 4;
      local_a4 = (undefined4 ***)0x100d691c;
      FUN_10004e60();
      local_50._4_4_ = uStack_7c;
      local_60 = local_90;
      pppuStack_5c = pppuStack_8c;
      uStack_58 = uStack_88;
      uStack_54 = uStack_84;
      local_80 = 0;
      uStack_7c = 0xf;
      local_90 = (undefined4 ***)((uint)local_90 & 0xffffff00);
      local_18 = 0xffffffff;
      local_a4 = (undefined4 ***)0x100d6951;
      FUN_10001fee();
    }
    else {
      local_a4 = (undefined4 ***)local_70._4_4_;
      local_ac = CONCAT44((undefined4)local_70,&local_90);
      local_b0 = (undefined4 ***)0x100d6886;
      FUN_100d2010();
      local_18 = 3;
      local_a4 = (undefined4 ***)0x100d689e;
      FUN_10004e60();
      local_50._4_4_ = uStack_7c;
      local_60 = local_90;
      pppuStack_5c = pppuStack_8c;
      uStack_58 = uStack_88;
      uStack_54 = uStack_84;
      local_80 = 0;
      uStack_7c = 0xf;
      local_90 = (undefined4 ***)((uint)local_90 & 0xffffff00);
      local_18 = 0xffffffff;
      local_a4 = (undefined4 ***)0x100d68d3;
      FUN_10001fee();
    }
  }
  else {
    local_30 = "{}(+%lld)";
    uStack_2c = 9;
    local_ac = 0x9103490b6;
    local_a4 = (undefined4 ***)&local_70;
    local_b0 = &local_90;
    FUN_100d5a69();
    local_18 = 5;
    local_a4 = (undefined4 ***)0x100d6838;
    FUN_10004e60();
    local_50._4_4_ = uStack_7c;
    local_60 = local_90;
    pppuStack_5c = pppuStack_8c;
    uStack_58 = uStack_88;
    uStack_54 = uStack_84;
    local_80 = 0;
    uStack_7c = 0xf;
    local_90 = (undefined4 ***)((uint)local_90 & 0xffffff00);
    local_18 = 0xffffffff;
    local_a4 = (undefined4 ***)0x100d686d;
    FUN_10001fee();
  }
  if (0xf < local_50._4_4_) {
    local_98 = local_60;
  }
  local_40 = &DAT_1032f6da;
  uStack_3c = 4;
  local_18 = 1;
  local_ac = 0x41032f6da;
  local_a4 = (undefined4 ***)&param_2;
  local_b0 = &local_90;
  FUN_100d8db3();
  local_18 = 2;
  if (0xf < uStack_7c) {
    local_94 = local_90;
  }
  local_a4 = (undefined4 ***)0x0;
  local_ac = ZEXT48(local_98) << 0x20;
  local_b0 = (undefined4 ***)0x0;
  cVar3 = FUN_101375ae(local_94,6,&local_78,param_1);
  local_18 = 0xffffffff;
  local_a4 = (undefined4 ***)0x100d6a06;
  FUN_10001fee();
  if (cVar3 != '\0') {
    local_24 = (undefined1 *)&local_b0;
    local_98 = &local_b0;
    local_94 = (undefined4 ***)auStack_a0;
    FUN_10053816(&local_78);
    local_18 = 6;
    FUN_10013d2e("paramPlus");
    FUN_100d90c8(param_4);
    local_18 = 0xffffffff;
    FUN_1004eed0();
    pppuVar2 = local_94;
    local_24 = (undefined1 *)local_94;
    local_94 = local_78;
    local_98 = local_74;
    pppuStack_8c = (undefined4 ****)0x0;
    local_90 = (undefined4 ****)0x0;
    local_18 = 1;
    *(undefined4 *****)((int)pppuVar2 + -4) = &local_90;
    *(char **)((int)pppuVar2 + -8) = "actorId";
    *(undefined4 *)((int)pppuVar2 + -0xc) = 0x100d6a97;
    FUN_100d627a();
    iVar1 = param_4;
    iVar4 = param_4 >> 0x1f;
    *(undefined4 ****)((int)pppuVar2 + -4) = local_98;
    *(undefined4 ****)((int)pppuVar2 + -8) = local_94;
    *(int *)((int)pppuVar2 + -0xc) = iVar4;
    *(int *)((int)pppuVar2 + -0x10) = iVar1;
    *(undefined4 *)((int)pppuVar2 + -0x14) = 0x100d6aaf;
    FUN_100d91ae();
  }
  local_18 = 0xffffffff;
  local_a4 = (undefined4 ***)0x100d6ac5;
  FUN_10001fee();
  ExceptionList = local_20;
  return;
}

