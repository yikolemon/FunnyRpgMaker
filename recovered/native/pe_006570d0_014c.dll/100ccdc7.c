/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ccdc7 */

undefined4 FUN_100ccdc7(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 ***pppuVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 **local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  float local_44;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ce4a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_101131fa(param_1);
  FUN_1012d079(param_1,0);
  local_24 = DAT_1039ccb4;
  local_28 = FUN_10113594("recording");
  local_5c = (undefined4 ***)0x0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_4c = 0xf00000000;
  local_14 = 0;
  if (local_24 == local_28) {
    FUN_100180a6(&DAT_1032f0e7,0xf);
  }
  else {
    FUN_100cc58c(&local_40);
    local_14 = 1;
    FUN_10004e60();
    local_4c = CONCAT44(uStack_2c,local_30);
    local_5c = (undefined4 ***)local_40;
    uStack_58 = local_40._4_4_;
    uStack_54 = uStack_38;
    uStack_50 = uStack_34;
    local_30 = 0;
    uStack_2c = 0xf;
    local_40 = local_40 & 0xffffffffffffff00;
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  local_14 = 0;
  FUN_10156430(0x3ecccccd,0x3f800000);
  fVar4 = (float10)FUN_101572bf(0x43200000);
  local_44 = (float)fVar4;
  local_40 = (ulonglong)(uint)local_44;
  pppuVar2 = (undefined4 ***)local_5c;
  if (local_4c._4_4_ < 0x10) {
    pppuVar2 = &local_5c;
  }
  cVar1 = FUN_1012e1b7(pppuVar2,&local_40);
  if (cVar1 != '\0') {
    DAT_1039ccb4 = FUN_10113594("recording");
  }
  FUN_10114a0e(0,0xbf800000);
  local_40 = 0;
  cVar1 = FUN_1012e1b7(&DAT_1032f0cf,&local_40);
  if (cVar1 != '\0') {
    *param_2 = 0;
    DAT_1039ccb4 = 0;
  }
  if (local_24 == local_28) {
    uVar3 = FUN_100ccfea();
    local_24 = CONCAT31((int3)((uint)uVar3 >> 8),local_40._4_1_);
    if (local_40._4_1_ == '\x01') {
      *param_2 = (undefined4 ***)local_40;
      FUN_100cc87a(param_2);
      FUN_100cca66(param_2);
      DAT_1039ccb4 = 0;
    }
  }
  else {
    local_24 = 0;
  }
  FUN_10113568();
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return local_24;
}

