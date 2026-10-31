/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012df59 */

undefined4 FUN_1012df59(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  byte local_36;
  char local_35;
  float local_34;
  float fStack_30;
  undefined8 uStack_2c;
  undefined1 local_24 [8];
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_60;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar4 = *(int *)(iVar1 + 0x14cc);
  uVar6 = 0;
  if (*(char *)(iVar4 + 0xfe) == '\0') {
    local_5c = FUN_101021d4(param_1,0);
    local_60 = FUN_100fd57d(param_1,0);
    FUN_100fdb2e(&local_1c,param_1,local_60,0,0xbf800000);
    local_34 = *(float *)(iVar4 + 0x144);
    local_58 = *(float *)(iVar4 + 0x148);
    fVar7 = *(float *)(iVar1 + 0xd10);
    if (((short)param_3 < 0) && (fVar7 < *(float *)(iVar4 + 0x17c))) {
      local_58 = local_58 + (*(float *)(iVar4 + 0x17c) - fVar7);
    }
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    FUN_1010c427(local_24,*param_2,param_2[1],
                 *(float *)(iVar1 + 0xd0c) + *(float *)(iVar1 + 0xd0c) + local_1c,
                 fVar7 + fVar7 + local_18);
    fStack_30 = local_58;
    uStack_2c = CONCAT44(local_58 + local_24._4_4_,local_34 + local_24._0_4_);
    FUN_1010c810(local_24,*(undefined4 *)(iVar1 + 0xd10));
    uVar2 = local_5c;
    uVar6 = 0;
    cVar3 = FUN_1010c9d8(&local_34,local_5c,0,0);
    if (cVar3 != '\0') {
      uVar6 = FUN_1012d77e(&local_34,uVar2,&local_35,&local_36,param_3);
      iVar4 = 0x16;
      if (local_35 != '\0') {
        iVar4 = local_36 + 0x17;
      }
      uVar5 = FUN_100fcb39(iVar4,0x3f800000);
      FUN_100fe25e(&local_34,uVar2,0);
      FUN_100fdee9(local_34,fStack_30,(undefined4)uStack_2c,uStack_2c._4_4_,uVar5,1,
                   *(undefined4 *)(iVar1 + 0xd14));
      if (*(char *)(iVar1 + 0x2748) == '\x01') {
        FUN_10118366(&DAT_1033b941,&DAT_1033b90e);
      }
      fVar7 = (float)*(undefined8 *)(iVar1 + 0xd0c);
      fVar8 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0xd0c) >> 0x20);
      local_40 = CONCAT44((float)((ulonglong)uStack_2c >> 0x20) - fVar8,(float)uStack_2c - fVar7);
      local_48 = CONCAT44(fStack_30 + fVar8,local_34 + fVar7);
      FUN_100fdbf2(&local_48,&local_40,param_1,local_60,&local_1c,iVar1 + 0xdb0,&local_34);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_60)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

