/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ee37a */

void FUN_100ee37a(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 ***pppuVar5;
  float10 fVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [4];
  float local_94;
  float local_90;
  float local_8c;
  undefined4 *local_88;
  float local_84;
  undefined8 local_80;
  char *local_78;
  undefined4 uStack_74;
  undefined4 **local_70 [5];
  uint local_5c;
  float local_58;
  int local_54;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_98;
  local_18 = 0xffffffff;
  local_1c = &LAB_100f5220;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100fbc78();
  local_18 = 0;
  fVar6 = (float10)FUN_10111f20();
  local_8c = (float)fVar6;
  local_84 = local_8c;
  iVar2 = FUN_100fcb2d();
  local_90 = *(float *)(iVar2 + 0x60);
  uVar3 = FUN_1005c40b(DAT_1038900c);
  FUN_100fbd22(uVar3,local_8c + local_90);
  while( true ) {
    cVar1 = FUN_100fc2ca();
    fVar4 = local_58;
    if (cVar1 == '\0') break;
    while (local_94 = fVar4, (int)fVar4 < local_54) {
      local_18 = 0;
      uVar7 = FUN_1005c375(DAT_1038900c,fVar4);
      local_8c = *(float *)*local_88;
      local_90 = local_94;
      local_78 = "{}:{}";
      uStack_74 = 5;
      local_80 = uVar7;
      FUN_100ee572(local_70,0x51032f6c3,&local_94,&local_80);
      local_18 = 1;
      pppuVar5 = local_70;
      if (0xf < local_5c) {
        pppuVar5 = (undefined4 ***)local_70[0];
      }
      cVar1 = FUN_1015669c(local_94,pppuVar5,local_8c == local_90,0x40,0);
      local_18 = 0xffffffff;
      FUN_10001fee();
      if (cVar1 != '\0') {
        *(float *)*local_88 = local_94;
        *(undefined4 *)local_88[1] = local_80._4_4_;
      }
      fVar4 = (float)((int)local_94 + 1);
    }
    local_18 = 0;
  }
  local_18 = 0xffffffff;
  thunk_FUN_100fbc90();
  ExceptionList = local_20;
  return;
}

