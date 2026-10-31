/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012fb81 */

undefined4
FUN_1012fb81(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,int param_9
            ,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  byte local_2e;
  char local_2d;
  float local_2c;
  float fStack_28;
  undefined8 uStack_24;
  undefined8 local_1c;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_58;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar3 = *(int *)(iVar1 + 0x14cc);
  uVar5 = 0;
  if (*(char *)(iVar3 + 0xfe) == '\0') {
    local_48 = *(float *)(iVar1 + 0xd0c);
    fStack_44 = *(float *)(iVar1 + 0xd10);
    local_2c = *(float *)(iVar3 + 0x144);
    fStack_28 = *(float *)(iVar3 + 0x148);
    fVar7 = (float)*(undefined8 *)(iVar3 + 0x144);
    fVar8 = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x144) >> 0x20);
    uStack_40 = 0;
    uStack_3c = 0;
    fVar9 = (float)*param_6 + fVar7 + local_48 + local_48;
    fVar10 = (float)((ulonglong)*param_6 >> 0x20) + fVar8 + fStack_44 + fStack_44;
    uStack_24 = CONCAT44(fVar10,fVar9);
    local_1c = CONCAT44(fVar10 - fVar8,fVar9 - fVar7);
    FUN_1010c810(&local_1c,0xbf800000);
    cVar2 = FUN_1010c9d8(&local_2c,param_1,0,0);
    if (cVar2 != '\0') {
      uVar5 = FUN_1012d77e(&local_2c,param_1,&local_2d,&local_2e,param_11);
      iVar3 = 0x16;
      if (local_2d != '\0') {
        iVar3 = local_2e + 0x17;
      }
      local_58 = (float)FUN_100fcb39(iVar3,0x3f800000);
      FUN_100fe25e(&local_2c,param_1,0);
      FUN_100fdee9(local_2c,fStack_28,(undefined4)uStack_24,uStack_24._4_4_,local_58,1,
                   *(undefined4 *)(iVar1 + 0xd14));
      if (0.0 < *(float *)(param_9 + 0xc)) {
        uVar4 = FUN_100fcba2(param_9);
        local_1c = CONCAT44((float)((ulonglong)uStack_24 >> 0x20) - fStack_44,
                            (float)uStack_24 - local_48);
        local_38 = CONCAT44(fStack_28 + fStack_44,local_2c + local_48);
        FUN_1018b85a(&local_38,&local_1c,uVar4,0,0);
      }
      local_54 = *(float *)(iVar1 + 0xd14);
      local_58 = *(float *)(iVar1 + 0xd5c);
      fVar6 = (float10)FUN_100fdbca(local_48,fStack_44);
      local_4c = (float)fVar6;
      fVar6 = (float10)FUN_100fdbca(local_54 - local_4c,local_58);
      local_58 = (float)fVar6;
      local_50 = local_58;
      uVar4 = FUN_100fcba2(param_10);
      fVar7 = (float)((ulonglong)uStack_24 >> 0x20);
      if (local_58 <= 0.0) {
        local_1c = CONCAT44(fVar7 - fStack_44,(float)uStack_24 - local_48);
        local_38 = CONCAT44(fStack_28 + fStack_44,local_2c + local_48);
        FUN_1018d090(param_2,param_3,param_4,param_5,&local_38,&local_1c,param_7,param_8,uVar4);
      }
      else {
        local_1c = CONCAT44(fVar7 - fStack_44,(float)uStack_24 - local_48);
        local_38 = CONCAT44(fStack_28 + fStack_44,local_2c + local_48);
        FUN_1018d166(param_2,param_3,param_4,param_5,&local_38,&local_1c,param_7,param_8,uVar4,
                     local_58,0);
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_58)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

