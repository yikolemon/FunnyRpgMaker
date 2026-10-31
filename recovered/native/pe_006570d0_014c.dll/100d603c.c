/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d603c */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100d603c(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 ***pppuVar4;
  int *piVar5;
  int *local_a4;
  undefined *local_a0;
  undefined4 local_78;
  undefined1 uStack_74;
  undefined1 uStack_70;
  uint uStack_6c;
  int *local_68;
  int local_64;
  undefined4 **local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  int local_40 [6];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_48 = (undefined1 *)&local_68;
  local_1c = &LAB_100dde40;
  local_20 = ExceptionList;
  local_24 = (undefined1 *)&local_a4;
  local_78 = 0;
  local_a4 = local_40;
  local_a0 = &DAT_10388f3c;
  uStack_74 = 1;
  uStack_70 = 1;
  uStack_6c = (uint)ExceptionList & 0xffffff00;
  local_18 = 0;
  ExceptionList = &local_20;
  FUN_10013ab0();
  puVar2 = local_48;
  uVar1 = DAT_1028f540._4_4_;
  local_24 = local_48;
  local_18 = 2;
  piVar5 = (int *)(local_48 + -0x14);
  *(undefined4 *)(local_48 + -0x10) = (undefined4)DAT_1028f540;
  *(undefined4 *)(puVar2 + -0xc) = uVar1;
  *(undefined4 *)(puVar2 + -8) = 0;
  *(undefined4 *)(puVar2 + -4) = 0;
  *piVar5 = (int)local_60;
  *(undefined4 *)(puVar2 + -0x18) = 0x100d60e8;
  FUN_100141c8();
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar2 + -4) = 0x100d60f8;
  FUN_10013efc();
  local_18 = 1;
  if ((undefined4 ***)(*local_68 + 0x20) != local_60) {
    pppuVar4 = local_60;
    if (0xf < local_4c) {
      pppuVar4 = (undefined4 ***)local_60[0];
    }
    *(undefined4 *)(puVar2 + -4) = local_50;
    *(undefined4 ****)(puVar2 + -8) = pppuVar4;
    *(undefined4 *)(puVar2 + -0xc) = 0x100d6122;
    FUN_100180a6();
  }
  *(undefined4 ****)(puVar2 + -4) = local_60;
  *(undefined4 *)(puVar2 + -8) = 0x100d6136;
  FUN_100d125e();
  *(undefined4 *)(puVar2 + -4) = *(undefined4 *)local_68[1];
  *(undefined4 *)(puVar2 + -8) = 0x100d614b;
  cVar3 = FUN_1014b156();
  if (cVar3 != '\0') {
    local_44 = 0;
    local_64 = 0;
    while( true ) {
      *(int **)(puVar2 + -4) = &local_64;
      *(undefined4 **)(puVar2 + -8) = &local_44;
      *(undefined4 *)(puVar2 + -0xc) = 0x100d6171;
      cVar3 = FUN_1014b16c();
      if (cVar3 == '\0') break;
      *(int *)(puVar2 + -4) = local_64 * 8 + DAT_1039cfa8;
      *(int **)(puVar2 + -8) = local_40;
      *(undefined4 *)(puVar2 + -0xc) = 0x100d6191;
      FUN_100d83bc();
      if ((undefined4 ***)(local_40[0] + 0x30) != local_60) {
        pppuVar4 = local_60;
        if (0xf < local_4c) {
          pppuVar4 = (undefined4 ***)local_60[0];
        }
        *(undefined4 *)(puVar2 + -4) = local_50;
        *(undefined4 ****)(puVar2 + -8) = pppuVar4;
        *(undefined4 *)(puVar2 + -0xc) = 0x100d61b5;
        FUN_100180a6();
      }
      *(undefined4 ****)(puVar2 + -4) = local_60;
      *(undefined4 *)(puVar2 + -8) = 0x100d61cf;
      FUN_100d125e();
    }
  }
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar2 + -4) = 0x100d61e4;
  FUN_10001fee();
  ExceptionList = local_20;
  return;
}

