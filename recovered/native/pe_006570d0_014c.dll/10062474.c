/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10062474 */

void __fastcall FUN_10062474(undefined4 ***param_1)

{
  char cVar1;
  undefined4 ***pppuVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_80 [8];
  char *local_78;
  char *local_74;
  int local_6c;
  char *local_68;
  char *local_64;
  undefined4 **local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 **local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  uint local_34;
  char *local_30;
  undefined4 **local_2c;
  undefined4 **local_28;
  undefined4 **local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_80;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1ac0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  local_24 = param_1;
  cVar1 = FUN_100628c6(param_1);
  if (cVar1 == '\0') {
    FUN_1006292c(&local_6c,local_24);
    if (local_6c == DAT_1039ca10) {
      local_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      iStack_38 = 0;
      local_34 = 3;
      local_48 = (undefined4 **)0x0;
      local_14 = 1;
      pppuVar2 = (undefined4 ***)local_24;
      if ((undefined4 **)0xf < local_24[5]) {
        pppuVar2 = (undefined4 ***)*local_24;
      }
      local_28 = &local_60;
      FUN_10063c30(local_28,pppuVar2,(int)local_24[4] + (int)pppuVar2,&local_48);
      local_14 = 2;
      FUN_1006299e();
      local_14 = 0xffffffff;
      FUN_10061fce();
      local_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      iStack_38 = 0;
      local_34 = 3;
      local_48 = (undefined4 ***)0x0;
      local_14 = 4;
      local_68 = local_74;
      local_2c = &local_48;
      while (local_78 != local_68) {
        pcVar4 = local_78;
        local_30 = local_78;
        if (*local_78 == '\x01') {
          local_64 = local_78 + 4;
          FUN_10062bb6(&local_60,local_64);
          pcVar4 = local_30;
          local_14 = 6;
          FUN_10063284(&local_60);
          local_14 = 0xffffffff;
          FUN_10061fce();
        }
        if (*(uint *)(pcVar4 + 0x18) < 4) {
          pcVar3 = pcVar4 + 4;
        }
        else {
          pcVar3 = *(char **)(pcVar4 + 4);
        }
        local_14 = 4;
        FUN_10063a48(pcVar3,*(undefined4 *)(pcVar4 + 0x14));
        local_78 = local_30 + 0x1c;
      }
      local_60 = (undefined4 ***)0x0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      local_50 = 0;
      local_4c = 0xf;
      local_14 = 5;
      if (3 < local_34) {
        local_2c = local_48;
      }
      FUN_10066ac5(local_80,local_2c,local_2c + iStack_38,&local_60);
      local_14 = 7;
      FUN_100632d2(local_80,local_24,&local_60);
      FUN_100632d2(local_80,&local_60,local_24);
      if ((undefined4 ***)local_24 != &local_60) {
        if (0xf < local_4c) {
          local_28 = local_60;
        }
        FUN_100180a6(local_28,local_50);
      }
      local_14 = 0xffffffff;
      FUN_10001fee();
      FUN_10061fce();
      FUN_10061f0c();
    }
    else {
      pppuVar2 = (undefined4 ***)(local_6c + 0x20);
      if ((undefined4 ***)local_24 != pppuVar2) {
        if (0xf < *(uint *)(local_6c + 0x34)) {
          pppuVar2 = *(undefined4 ****)(local_6c + 0x20);
        }
        FUN_100180a6(pppuVar2,*(undefined4 *)(local_6c + 0x30));
      }
    }
  }
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_1039c9a4);
  ExceptionList = local_1c;
  return;
}

