/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010d23f */

ulonglong * __fastcall FUN_1010d23f(ulonglong *param_1,int param_2,float *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_70;
  float local_6c;
  float local_68;
  undefined4 *local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *local_3c;
  undefined4 *puStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  float fStack_14;
  uint local_10;
  
  iVar2 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_70;
  local_3c = (undefined4 *)*param_3;
  puStack_38 = (undefined4 *)param_3[1];
  fStack_34 = 0.0;
  if ((*(byte *)(DAT_1039d74c + 0x1ed0) & 0x10) != 0) {
    puVar8 = *(undefined4 **)(DAT_1039d74c + 0x1f1c);
    puVar9 = *(undefined4 **)(DAT_1039d74c + 0x1f24);
    fStack_34 = 0.0;
    uStack_30 = 0;
    if ((*(float *)(DAT_1039d74c + 0x1f18) < 0.0) || (*(float *)(DAT_1039d74c + 0x1f20) < 0.0)) {
      puVar5 = *(undefined4 **)(param_2 + 0x60);
    }
    else {
      local_70 = local_3c;
      local_6c = *(float *)(DAT_1039d74c + 0x1f18);
      local_68 = *(float *)(DAT_1039d74c + 0x1f20);
      local_64 = puVar9;
      local_4c = puVar8;
      fVar4 = (float10)FUN_10112cc4();
      puVar5 = (undefined4 *)(float)fVar4;
      puVar8 = local_4c;
      puVar9 = local_64;
      local_50 = puVar5;
    }
    puVar7 = (undefined4 *)0x0;
    if (((float)puVar8 < 0.0) || ((float)puVar9 < 0.0)) {
      fVar6 = *(float *)(param_2 + 100);
    }
    else {
      local_70 = puStack_38;
      puStack_38 = (undefined4 *)0x0;
      fStack_34 = 0.0;
      uStack_30 = 0;
      local_6c = (float)puVar8;
      local_68 = (float)puVar9;
      local_3c = puVar5;
      fVar4 = (float10)FUN_10112cc4();
      fVar6 = (float)fVar4;
      puVar5 = local_3c;
      puVar7 = puStack_38;
      local_54 = fVar6;
    }
    pcVar1 = *(code **)(iVar2 + 0x1f28);
    if (pcVar1 != (code *)0x0) {
      local_2c = *(undefined4 *)(iVar2 + 0x1f2c);
      local_70 = &local_2c;
      local_28 = *(undefined8 *)(param_2 + 0x50);
      local_20 = *(undefined4 *)(param_2 + 0x60);
      local_1c = *(undefined4 *)(param_2 + 100);
      local_18 = puVar5;
      fStack_14 = fVar6;
      (*pcVar1)();
      puVar7 = (undefined4 *)0x0;
      puVar5 = local_18;
      fVar6 = fStack_14;
    }
    local_3c = (undefined4 *)(float)(int)(float)puVar5;
    puStack_38 = (undefined4 *)(float)(int)fVar6;
    fStack_34 = (float)(int)(float)puVar7;
  }
  iVar2 = DAT_1039d74c;
  uStack_30 = 0;
  local_64 = DAT_102b8cb0;
  if ((*(uint *)(param_2 + 0xc) & 0x5000000) == 0x1000000) {
    local_4c = DAT_102b8cb0;
    if ((*(uint *)(param_2 + 0x14) & 4) != 0) {
      local_4c = *(undefined4 **)(DAT_1039d74c + 0xce8);
    }
    if ((*(uint *)(param_2 + 0x14) & 8) == 0) goto LAB_1010d3df;
  }
  else {
    if ((*(uint *)(param_2 + 0xc) & 0x40) != 0) {
      local_4c = DAT_102b8cb0;
      goto LAB_1010d3df;
    }
    local_4c = *(undefined4 **)(DAT_1039d74c + 0xce8);
  }
  local_64 = *(undefined4 **)(DAT_1039d74c + 0xcec);
LAB_1010d3df:
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  iVar3 = FUN_10126468();
  fStack_60 = *(float *)(iVar3 + 0x90) + *(float *)(iVar3 + 0x94);
  local_6c = *(float *)(iVar2 + 0xcdc) + DAT_102b8a50;
  local_70 = (undefined4 *)0x0;
  fVar4 = (float10)FUN_100fdbca();
  fStack_58 = (float)fVar4;
  local_6c = fStack_60 + fStack_58;
  local_70 = local_64;
  fVar4 = (float10)FUN_100fdbca();
  fStack_5c = (float)fVar4;
  *param_1 = CONCAT44(~-(uint)(fStack_5c <= (float)puStack_38) & (uint)fStack_5c,
                      ~-(uint)((float)local_4c <= (float)local_3c) & (uint)local_4c) |
             CONCAT44((uint)puStack_38 & -(uint)(fStack_5c <= (float)puStack_38),
                      (uint)local_3c & -(uint)((float)local_4c <= (float)local_3c));
  if (DAT_10388d00 != (local_10 ^ (uint)&local_70)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

