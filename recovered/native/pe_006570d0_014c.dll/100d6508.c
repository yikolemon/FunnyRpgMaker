/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d6508 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100d6508(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 ***pppuVar4;
  float10 fVar5;
  undefined4 **local_70;
  undefined8 uStack_6c;
  undefined4 **ppuStack_64;
  undefined8 local_60 [2];
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined *local_48;
  undefined4 uStack_44;
  undefined4 **local_40;
  undefined4 local_3c;
  uint local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)local_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_100dde70;
  local_20 = ExceptionList;
  ppuStack_64 = (undefined4 **)0x0;
  uStack_6c = CONCAT44(param_2,0x100d654d);
  ExceptionList = &local_20;
  FUN_1012d079();
  ppuStack_64 = (undefined4 **)0x3f800000;
  uStack_6c = 0x3e99999a100d655f;
  fVar5 = (float10)FUN_10156430();
  ppuStack_64 = (undefined4 **)(float)fVar5;
  uStack_6c = CONCAT44(0x100d656a,(undefined4)uStack_6c);
  FUN_100fb68f();
  local_3c = 0;
  local_40 = (undefined4 ***)0x0;
  uStack_6c = CONCAT44(&param_3,0x100d6588);
  ppuStack_64 = &local_40;
  local_60[0] = FUN_100d8c68();
  local_48 = &DAT_1032f6da;
  uStack_44 = 4;
  uStack_6c = 0x41032f6da;
  ppuStack_64 = (undefined4 **)&param_2;
  local_70 = &local_40;
  FUN_100d8db3();
  local_18 = 0;
  pppuVar4 = &local_40;
  if (0xf < local_2c) {
    pppuVar4 = (undefined4 ***)local_40;
  }
  local_70 = (undefined4 **)0x0;
  uStack_6c = 0;
  ppuStack_64 = (undefined4 **)0x0;
  cVar3 = FUN_101375ae(pppuVar4,6,local_60,param_1);
  local_18 = 0xffffffff;
  ppuStack_64 = (undefined4 **)0x100d660b;
  FUN_10001fee();
  if (cVar3 != '\0') {
    local_24 = (undefined1 *)&local_70;
    local_50 = (undefined1 *)&local_70;
    local_4c = (undefined1 *)local_60;
    FUN_10053816(local_60);
    local_18 = 1;
    FUN_10013d2e(param_3);
    local_18 = 0xffffffff;
    FUN_1004eed0();
    puVar2 = local_4c;
    uVar1 = local_60[0];
    local_24 = local_4c;
    local_3c = 0;
    local_40 = (undefined4 **)0x0;
    *(undefined4 ****)(local_4c + -4) = &local_40;
    *(char **)(puVar2 + -8) = "actorId";
    *(undefined4 *)(puVar2 + -0xc) = 0x100d6674;
    FUN_100d627a();
    *(undefined8 *)(puVar2 + -8) = uVar1;
    *(undefined4 *)(puVar2 + -0xc) = param_4;
    *(undefined4 *)(puVar2 + -0x10) = 0x100d6680;
    FUN_100d8e0f();
  }
  ExceptionList = local_20;
  return;
}

