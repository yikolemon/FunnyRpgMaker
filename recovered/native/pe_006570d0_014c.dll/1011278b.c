/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011278b */

undefined8 * FUN_1011278b(undefined8 *param_1,undefined1 *param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  undefined1 *local_74;
  float local_70;
  float *local_6c;
  uint local_68;
  byte local_61;
  float local_60;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 local_24 [16];
  uint local_14;
  
  iVar5 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_74;
  local_44 = *(float *)(param_2 + 600) + (float)DAT_1028b430;
  local_70 = *(float *)(param_2 + 0x254) + (float)DAT_1028b430;
  local_60 = *(float *)(param_2 + 0x250) + DAT_102b8a50;
  local_74 = (undefined1 *)(DAT_102b8a50 + *(float *)(param_2 + 0x24c) + *(float *)(param_2 + 0xa8))
  ;
  local_54 = local_70;
  fVar10 = (float10)FUN_100ea38a();
  local_50 = (float)fVar10;
  local_74 = (undefined1 *)(local_60 + *(float *)(param_2 + 0xac));
  local_70 = local_44;
  local_48 = local_50;
  fVar10 = (float10)FUN_100ea38a();
  local_60 = (float)fVar10;
  uVar9 = param_4;
  if ((param_4 & 0x15) == 0) {
    uVar9 = (byte)param_2[0xf4] | param_4;
  }
  if ((uVar9 & 0x2a) == 0) {
    uVar8 = 2;
    if (param_2[0x100] != '\0') {
      uVar8 = 0x20;
    }
    uVar9 = uVar9 | uVar8;
  }
  fVar11 = *param_3;
  fVar12 = param_3[1];
  local_5c = param_3[2];
  fVar1 = param_3[3];
  fVar2 = *(float *)(iVar5 + 0xd1c);
  bVar3 = local_60 <= fVar12;
  bVar4 = fVar1 <= local_44;
  uVar7 = 0x101;
  if ((local_54 - local_50 < fVar2 + fVar2 + (local_5c - fVar11)) && ((char)param_2[0x118] < '\x01')
     ) {
    uVar8 = CONCAT11(1,param_2[0xc]) & 0xffffff40;
    uVar7 = (undefined2)CONCAT31((int3)(uVar8 >> 8),(byte)uVar8 >> 6);
  }
  local_58 = iVar5;
  if ((local_44 - local_60 <
       *(float *)(iVar5 + 0xd20) + *(float *)(iVar5 + 0xd20) + (fVar1 - fVar12)) &&
     ((char)param_2[0x119] < '\x01')) {
    uVar6 = CONCAT11(param_2[0xc],(char)uVar7) & 0x40ff;
    uVar7 = CONCAT11((byte)(uVar6 >> 0xe),(char)uVar6);
  }
  local_61 = (byte)((ushort)uVar7 >> 8);
  local_4c = local_60;
  if ((uVar9 & 1) != 0 && (local_54 < local_5c || fVar11 < local_50)) {
    if ((local_50 <= fVar11 & (byte)uVar7) == 0) {
      fVar11 = fVar11 - fVar2;
      local_6c = (float *)0x0;
    }
    else {
      if (local_5c < local_54) goto LAB_10112a06;
      fVar11 = local_5c + fVar2;
      local_6c = DAT_1028b430;
    }
LAB_101129ed:
    local_70 = fVar11 - *(float *)(param_2 + 0x50);
    local_74 = param_2;
    FUN_10115835();
  }
  else if ((uVar9 & 4) != 0 && (local_54 < local_5c || fVar11 < local_50) || (uVar9 & 0x10) != 0) {
    local_6c = (float *)0x0;
    if ((byte)uVar7 != 0) {
      fVar11 = (float)(int)((fVar11 + local_5c) * (float)DAT_102b70e0);
      local_6c = DAT_102b70e0;
    }
    goto LAB_101129ed;
  }
LAB_10112a06:
  if ((uVar9 & 2) == 0 || bVar4 && bVar3) {
    if (((uVar9 & 8) == 0 || bVar4 && bVar3) && (uVar9 & 0x20) == 0) goto LAB_10112ab6;
    local_70 = param_3[1];
    local_6c = (float *)0x0;
    if (local_61 != 0) {
      local_70 = (float)(int)((local_70 + param_3[3]) * (float)DAT_102b70e0);
      local_6c = DAT_102b70e0;
    }
  }
  else if ((local_61 & local_60 <= param_3[1]) == 0) {
    local_70 = param_3[1] - *(float *)(local_58 + 0xd20);
    local_6c = (float *)0x0;
  }
  else {
    if (param_3[3] < local_44) goto LAB_10112ab6;
    local_70 = param_3[3] + *(float *)(local_58 + 0xd20);
    local_6c = DAT_1028b430;
  }
  local_70 = local_70 - *(float *)(param_2 + 0x54);
  local_74 = param_2;
  FUN_1011587f();
LAB_10112ab6:
  FUN_1010fae1();
  fVar11 = (float)local_24._8_8_ - (float)*(undefined8 *)(param_2 + 0xc4);
  fVar12 = SUB84(local_24._8_8_,4) - (float)((ulonglong)*(undefined8 *)(param_2 + 0xc4) >> 0x20);
  *param_1 = CONCAT44(fVar12,fVar11);
  if (((uVar9 & 0x40) == 0) && ((param_2[0xf] & 1) != 0)) {
    uVar9 = (param_4 & 0xffffffea) + 1;
    if ((param_4 & 0x14) == 0) {
      uVar9 = param_4;
    }
    local_68 = uVar9 & 0xffffffc1 | 2;
    if ((uVar9 & 0x28) == 0) {
      local_68 = uVar9;
    }
    uStack_3c = 0;
    uStack_38 = 0;
    local_34 = *param_3 - fVar11;
    fStack_30 = param_3[1] - fVar12;
    fStack_2c = param_3[2] - fVar11;
    fStack_28 = param_3[3] - fVar12;
    local_6c = &local_34;
    local_70 = *(float *)(param_2 + 0x3a0);
    local_74 = local_24;
    local_44 = fVar11;
    fStack_40 = fVar12;
    FUN_1011278b();
    *param_1 = CONCAT44(SUB84(local_24._0_8_,4) + fStack_40,(float)local_24._0_8_ + local_44);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_74)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

