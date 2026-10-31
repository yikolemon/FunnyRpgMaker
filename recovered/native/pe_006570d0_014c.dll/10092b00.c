/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10092b00 */

void __fastcall FUN_10092b00(int *param_1)

{
  ushort *puVar1;
  undefined2 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  byte bVar5;
  char cVar6;
  void *pvVar7;
  uint uVar8;
  ushort uVar9;
  
  puVar3 = (ushort *)*param_1;
  puVar4 = (ushort *)param_1[1];
  if (puVar3 == puVar4) {
    param_1[0x12] = -1;
    *(undefined2 *)((int)param_1 + 0x4e) = 0;
    return;
  }
  uVar9 = *puVar3;
  *(ushort *)((int)param_1 + 0x4e) = uVar9;
  if (0xff < uVar9) goto LAB_10092c31;
  pvVar7 = _memchr(&DAT_10295c2c,(int)(char)(byte)uVar9,0x17);
  if (pvVar7 == (void *)0x0) goto LAB_10092c31;
  param_1[0x12] = (uint)uVar9;
  uVar8 = (uint)(byte)uVar9;
  if (uVar8 < 0x3f) {
    if (uVar8 < 0x28) {
      if (uVar8 == 10) {
        if ((*(byte *)(param_1 + 0xe) & 4) == 0) {
          return;
        }
        if (param_1[3] != 0) {
          return;
        }
        param_1[0x12] = 0x7c;
        return;
      }
      if (uVar8 != 0x24) {
        return;
      }
      uVar8 = param_1[0xe];
      if ((uVar8 >> 0x18 & 1) == 0) {
        return;
      }
      puVar1 = puVar3 + 1;
      if (puVar1 == puVar4) {
        return;
      }
      uVar9 = *puVar1;
      if (uVar9 == 0x5c) {
        bVar5 = FUN_10092c6e(puVar1);
        uVar9 = puVar3[bVar5 + 1];
        uVar8 = param_1[0xe];
      }
      else {
        bVar5 = 0;
      }
      if (((param_1[3] == 0 && uVar9 == 10) & (byte)((uVar8 & 4) >> 2)) != 0) {
        return;
      }
      bVar5 = bVar5 & uVar9 == 0x29 & param_1[3] != 0;
    }
    else {
      if (1 < uVar8 - 0x28) {
        if (uVar8 != 0x2b) {
          return;
        }
        goto LAB_10092c0e;
      }
      bVar5 = *(byte *)(param_1 + 0xe) & 8;
    }
  }
  else if (uVar8 < 0x7b) {
    if (uVar8 != 0x3f) {
      if (uVar8 != 0x5c) {
        return;
      }
      cVar6 = FUN_10092c6e(puVar3);
      if (cVar6 == '\0') {
        return;
      }
      uVar2 = *(undefined2 *)(*param_1 + 2);
      *(undefined2 *)((int)param_1 + 0x4e) = uVar2;
      param_1[0x12] = (uint)(byte)uVar2;
      return;
    }
LAB_10092c0e:
    bVar5 = *(byte *)(param_1 + 0xe) & 1;
  }
  else {
    if (uVar8 != 0x7b) {
      if (uVar8 == 0x7c) {
        bVar5 = *(byte *)(param_1 + 0xe) & 2;
        goto joined_r0x10092b9a;
      }
      if (uVar8 != 0x7d) {
        return;
      }
    }
    bVar5 = *(byte *)(param_1 + 0xe) & 0x10;
  }
joined_r0x10092b9a:
  if (bVar5 != 0) {
    return;
  }
LAB_10092c31:
  param_1[0x12] = 0;
  return;
}

