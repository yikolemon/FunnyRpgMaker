/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e7f3d */

void FUN_100e7f3d(char *param_1,undefined4 *****param_2)

{
  undefined4 *****pppppuVar1;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int aiStack_74 [10];
  undefined4 ****local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined4 local_3c;
  uint local_38;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_90;
  local_18 = &LAB_100ead00;
  local_1c = ExceptionList;
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0;
  local_7c = 0xf;
  aiStack_74[7] = 0;
  aiStack_74[8] = 0;
  aiStack_74[9] = 0;
  aiStack_74[3] = 0;
  aiStack_74[4] = 0;
  aiStack_74[5] = 0;
  aiStack_74[6] = 0;
  local_78 = 0;
  aiStack_74[0] = 0;
  aiStack_74[1] = 0;
  aiStack_74[2] = 0;
  local_14 = 3;
  ExceptionList = &local_1c;
  FUN_1002218a();
  local_14 = 6;
  if (*param_1 == '\0') {
    FUN_1000334a(&local_90);
  }
  else {
    FUN_100e1814(&local_4c,&DAT_1033a3fb,&local_90);
  }
  local_14 = 10;
  if (param_2 != &local_4c) {
    pppppuVar1 = &local_4c;
    if (0xf < local_38) {
      pppppuVar1 = (undefined4 *****)local_4c;
    }
    FUN_100180a6(pppppuVar1,local_3c);
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  if (*param_1 == '\0') {
    local_4c = (undefined4 *****)0x0;
    local_48 = 0;
    local_44 = 0;
    local_14 = 6;
    FUN_100abcd4((aiStack_74[0] - local_78 >> 4) * -0x55555555,&local_78,aiStack_74);
    local_14 = 7;
    FUN_100abc5e(aiStack_74 + 2);
  }
  else {
    local_14 = 6;
    FUN_100e8220(&local_4c,"translations",&local_78);
  }
  local_14 = 9;
  if (param_2 + 6 != &local_4c) {
    FUN_100e66b6(local_4c,(local_48 - (int)local_4c >> 4) * -0x55555555);
  }
  FUN_100b5be4(local_40);
  local_14 = 0xffffffff;
  FUN_1006ae4c();
  local_14 = 0xffffffff;
  FUN_1006ae4c();
  FUN_10001fee();
  ExceptionList = local_1c;
  return;
}

