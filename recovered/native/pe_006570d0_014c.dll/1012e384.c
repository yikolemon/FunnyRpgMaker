/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012e384 */

undefined1
FUN_1012e384(undefined4 param_1,undefined4 param_2,float param_3,float param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [3];
  undefined1 local_45;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  byte local_2e;
  char local_2d;
  float local_2c;
  float fStack_28;
  undefined8 uStack_24;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_48;
  local_1c = param_3;
  local_18 = param_4;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    uVar4 = FUN_101021d4(param_1,0);
    local_2c = *(float *)(iVar1 + 0x144);
    fStack_28 = *(float *)(iVar1 + 0x148);
    uStack_24 = CONCAT44(param_4 + (float)((ulonglong)*(undefined8 *)(iVar1 + 0x144) >> 0x20),
                         param_3 + (float)*(undefined8 *)(iVar1 + 0x144));
    fVar7 = (float10)FUN_101155f9();
    local_34 = (float)fVar7;
    uVar8 = DAT_102b8a50;
    if (local_34 <= param_4) {
      uVar8 = *(undefined4 *)(iVar2 + 0xd10);
    }
    FUN_1010c810(&local_1c,uVar8);
    cVar3 = FUN_1010c9d8(&local_2c,uVar4,0,0);
    uVar6 = 0;
    if (cVar3 != '\0') {
      local_45 = FUN_1012d77e(&local_2c,uVar4,&local_2d,&local_2e,param_5);
      iVar5 = 0x16;
      if (local_2d != '\0') {
        iVar5 = local_2e + 0x17;
      }
      local_44 = (float)FUN_100fcb39(iVar5,0x3f800000);
      local_40 = FUN_100fcb39(0,0x3f800000);
      FUN_100fe25e(&local_2c,uVar4,0);
      FUN_100fdee9(local_2c,fStack_28,(undefined4)uStack_24,uStack_24._4_4_,local_44,1,
                   *(undefined4 *)(iVar2 + 0xd14));
      fVar7 = (float10)FUN_100fdbca(0,(local_18 - *(float *)(iVar2 + 0x1228)) * DAT_102b70e0);
      local_44 = (float)fVar7;
      local_38 = local_44;
      fVar7 = (float10)FUN_100fdbca(0,(local_1c - *(float *)(iVar2 + 0x1228)) * DAT_102b70e0);
      local_3c = (float)fVar7;
      FUN_10193b2c(*(undefined4 *)(iVar1 + 0x2e8),local_3c + local_2c,local_44 + fStack_28,local_40,
                   param_2,0x3f800000);
      uVar6 = local_45;
    }
  }
  else {
    uVar6 = 0;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar6;
}

