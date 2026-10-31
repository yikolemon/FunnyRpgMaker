/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012f842 */

void FUN_1012f842(float *param_1,float *param_2,undefined4 param_3,float param_4,undefined8 *param_5
                 ,undefined4 param_6,undefined4 param_7,float *param_8,float *param_9)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *local_78;
  float *pfStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined8 *local_68;
  float *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined8 *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  float local_2c;
  float fStack_28;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_78;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    local_44 = *(undefined8 **)(iVar2 + 0xd60);
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    local_2c = *(float *)(iVar1 + 0x144);
    fStack_28 = *(float *)(iVar1 + 0x148);
    fVar6 = (float)*(undefined8 *)(iVar1 + 0x144);
    fVar7 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x144) >> 0x20);
    fVar4 = (float)local_44 + (float)local_44 + (float)*param_5 + fVar6;
    fVar5 = (float)local_44 + (float)local_44 + (float)((ulonglong)*param_5 >> 0x20) + fVar7;
    local_24 = CONCAT44(fVar5,fVar4);
    local_1c = CONCAT44(fVar5 - fVar7,fVar4 - fVar6);
    pfStack_74 = (float *)0xbf800000;
    local_78 = (float *)&local_1c;
    FUN_1010c810();
    fStack_6c = 0.0;
    uStack_70 = 0;
    pfStack_74 = (float *)0x0;
    local_78 = &local_2c;
    cVar3 = FUN_1010c9d8();
    if (cVar3 != '\0') {
      local_48 = *(float *)(iVar2 + 0xd5c);
      if (0.0 < param_8[3]) {
        local_4c = *(undefined4 *)(iVar1 + 0x2e8);
        local_78 = param_8;
        uStack_70 = FUN_100fcba2();
        local_1c = CONCAT44((float)((ulonglong)local_24 >> 0x20) - (float)local_44,
                            (float)local_24 - (float)local_44);
        local_34 = CONCAT44((float)local_44 + fStack_28,(float)local_44 + local_2c);
        local_78 = (float *)&local_34;
        fStack_6c = local_48;
        local_68 = (undefined8 *)0x0;
        pfStack_74 = (float *)&local_1c;
        FUN_1018b85a();
      }
      local_4c = *(undefined4 *)(iVar1 + 0x2e8);
      local_78 = param_9;
      local_58 = FUN_100fcba2();
      fVar4 = (float)((ulonglong)local_24 >> 0x20);
      local_64 = (float *)&local_1c;
      if (local_48 <= 0.0) {
        local_1c = CONCAT44(fVar4 - (float)local_44,(float)local_24 - (float)local_44);
        local_34 = CONCAT44((float)local_44 + fStack_28,(float)local_44 + local_2c);
        local_68 = &local_34;
        local_78 = param_1;
        pfStack_74 = param_2;
        uStack_70 = param_3;
        fStack_6c = param_4;
        local_5c = param_7;
        local_60 = param_6;
        FUN_1018d090();
      }
      else {
        local_1c = CONCAT44(fVar4 - (float)local_44,(float)local_24 - (float)local_44);
        local_68 = &local_34;
        local_34 = CONCAT44((float)local_44 + fStack_28,(float)local_44 + local_2c);
        local_78 = param_1;
        pfStack_74 = param_2;
        uStack_70 = param_3;
        fStack_6c = param_4;
        local_54 = local_48;
        local_5c = param_7;
        local_60 = param_6;
        local_50 = 0;
        FUN_1018d166();
      }
      if (0.0 < (float)*(undefined8 **)(iVar2 + 0xd60)) {
        pfStack_74 = (float *)0x3f800000;
        local_78 = (float *)0x5;
        local_44 = *(undefined8 **)(iVar2 + 0xd60);
        uStack_70 = FUN_100fcb39();
        local_68 = local_44;
        fStack_6c = local_48;
        local_64 = (float *)0x0;
        local_78 = &local_2c;
        pfStack_74 = (float *)&local_24;
        FUN_1018b762();
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

