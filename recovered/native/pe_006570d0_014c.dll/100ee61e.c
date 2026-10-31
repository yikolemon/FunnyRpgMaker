/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ee61e */

void FUN_100ee61e(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ****ppppuVar4;
  float fVar5;
  float10 fVar6;
  undefined4 *local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  char *local_78;
  undefined4 uStack_74;
  undefined4 ***local_70 [5];
  uint local_5c;
  float local_58;
  int local_54;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_90;
  local_18 = 0xffffffff;
  local_1c = &LAB_100f5230;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100fbc78();
  local_18 = 0;
  fVar6 = (float10)FUN_10111f20();
  local_88 = (float)fVar6;
  local_80 = local_88;
  iVar2 = FUN_100fcb2d();
  local_8c = *(float *)(iVar2 + 0x60);
  uVar3 = FUN_1005c484(DAT_1038900c,*(undefined4 *)*local_90);
  FUN_100fbd22(uVar3,local_88 + local_8c);
  while (cVar1 = FUN_100fc2ca(), fVar5 = local_58, cVar1 != '\0') {
    while (local_84 = fVar5, (int)fVar5 < local_54) {
      local_8c = *(float *)local_90[1];
      local_18 = 0;
      local_88 = fVar5;
      local_7c = FUN_1005c104();
      local_78 = "{}:{}";
      uStack_74 = 5;
      FUN_100ee572(local_70,0x51032f6c3,&local_84,&local_7c);
      local_18 = 1;
      ppppuVar4 = local_70;
      if (0xf < local_5c) {
        ppppuVar4 = (undefined4 ****)local_70[0];
      }
      cVar1 = FUN_1015669c(local_84,ppppuVar4,local_8c == local_88,0x40,0);
      local_18 = 0xffffffff;
      FUN_10001fee();
      if (cVar1 != '\0') {
        *(float *)local_90[1] = local_84;
      }
      fVar5 = (float)((int)local_84 + 1);
    }
    local_18 = 0;
  }
  local_18 = 0xffffffff;
  thunk_FUN_100fbc90();
  ExceptionList = local_20;
  return;
}

