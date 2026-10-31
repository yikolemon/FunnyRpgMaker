/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012655b */

void __fastcall
FUN_1012655b(int param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 *local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined8 *local_54;
  undefined8 *local_50;
  float local_4c;
  float local_48;
  undefined8 *local_44;
  undefined8 *puStack_40;
  float fStack_3c;
  float fStack_38;
  undefined8 *local_34;
  undefined8 *puStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_70;
  local_34 = (undefined8 *)*param_2;
  puStack_30 = (undefined8 *)param_2[1];
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  puVar8 = local_34;
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    fStack_2c = 0.0;
    fStack_28 = 0.0;
    iVar1 = *(int *)(param_1 + 0x3a0);
    uVar2 = *(uint *)(iVar1 + 0xc);
    local_44 = *(undefined8 **)(iVar1 + 0x24c);
    local_5c = *(float *)(iVar1 + 0x250);
    local_58 = *(float *)(iVar1 + 0x254);
    local_60 = *(float *)(iVar1 + 600);
    local_6c = *(float *)(iVar1 + 0x8c);
    local_70 = *(undefined8 **)(iVar1 + 0x84);
    fVar3 = (float10)FUN_100fdbca();
    local_64 = (float)fVar3;
    local_70 = *(undefined8 **)(iVar1 + 0x80);
    local_6c = *(float *)(iVar1 + 0x8c);
    local_48 = local_64;
    fVar3 = (float10)FUN_100fdbca();
    local_4c = (float)fVar3;
    puVar8 = local_34;
    if ((uVar2 & 0x8800) == 0 || (uVar2 & 8) != 0) {
      local_68 = local_58 - local_4c;
      local_6c = (float)local_44 + local_4c;
      local_70 = local_34;
      fVar3 = (float10)FUN_10112cc4();
      local_50 = (undefined8 *)(float)fVar3;
      puVar8 = local_50;
      if ((uVar2 & 8) != 0) {
        local_6c = local_5c + local_64;
        puStack_40 = puStack_30;
        fStack_3c = fStack_2c;
        fStack_38 = fStack_28;
        local_68 = local_60 - local_64;
        local_70 = puStack_30;
        local_44 = local_50;
        fVar3 = (float10)FUN_10112cc4();
        puStack_30 = (undefined8 *)(float)fVar3;
        puVar8 = local_44;
        fStack_2c = fStack_3c;
        fStack_28 = fStack_38;
        local_54 = puStack_30;
      }
    }
  }
  fVar9 = (float)*(undefined8 *)(param_1 + 0x50);
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_1 + 0x58) + fVar9;
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20) + fVar10;
  fVar6 = (float)*(undefined8 *)param_3;
  fVar7 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  local_44 = (undefined8 *)((fVar9 - (float)puVar8) * fVar6 + (float)puVar8);
  puStack_40 = (undefined8 *)((fVar10 - (float)puStack_30) * fVar7 + (float)puStack_30);
  fStack_3c = (0.0 - fStack_2c) * 0.0 + fStack_2c;
  fStack_38 = (0.0 - fStack_28) * 0.0 + fStack_28;
  local_34 = (undefined8 *)((((float)puVar8 - fVar4) * fVar6 + fVar4) - (float)local_44);
  puStack_30 = (undefined8 *)((((float)puStack_30 - fVar5) * fVar7 + fVar5) - (float)puStack_40);
  fStack_2c = ((fStack_2c - 0.0) * 0.0 + 0.0) - fStack_3c;
  fStack_28 = ((fStack_28 - 0.0) * 0.0 + 0.0) - fStack_38;
  local_70 = &local_1c;
  local_1c = CONCAT44(puStack_30,local_34);
  FUN_1010d23f();
  *param_4 = (float)local_44;
  param_4[1] = (float)puStack_40;
  if ((*param_3 == 0.0) && (!NAN(*param_3))) {
    *param_4 = (float)local_44 - (local_24 - (float)local_34);
  }
  if ((param_3[1] == 0.0) && (!NAN(param_3[1]))) {
    param_4[1] = (float)puStack_40 - (fStack_20 - (float)puStack_30);
  }
  *param_5 = CONCAT44(fStack_20,local_24);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_70)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

