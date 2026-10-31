/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001ce44 */

void __fastcall FUN_1001ce44(int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  void *pvVar6;
  uint uVar7;
  byte bVar8;
  
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  if (pbVar2 == pbVar3) {
    param_1[0x12] = -1;
    *(undefined1 *)((int)param_1 + 0x4d) = 0;
    return;
  }
  bVar8 = *pbVar2;
  *(byte *)((int)param_1 + 0x4d) = bVar8;
  pvVar6 = _memchr(&DAT_1028fd44,(int)(char)bVar8,0x17);
  if (pvVar6 == (void *)0x0) goto LAB_1001cf58;
  uVar7 = (uint)bVar8;
  param_1[0x12] = uVar7;
  if (uVar7 < 0x3f) {
    if (uVar7 < 0x28) {
      if (uVar7 == 10) {
        if ((*(byte *)(param_1 + 0xe) & 4) == 0) {
          return;
        }
        if (param_1[3] != 0) {
          return;
        }
        param_1[0x12] = 0x7c;
        return;
      }
      if (uVar7 != 0x24) {
        return;
      }
      uVar7 = param_1[0xe];
      if ((uVar7 >> 0x18 & 1) == 0) {
        return;
      }
      pbVar1 = pbVar2 + 1;
      if (pbVar1 == pbVar3) {
        return;
      }
      bVar8 = *pbVar1;
      if (bVar8 == 0x5c) {
        bVar4 = FUN_1001d106(pbVar1);
        bVar8 = pbVar2[bVar4 + 1];
        uVar7 = param_1[0xe];
      }
      else {
        bVar4 = 0;
      }
      if (((param_1[3] == 0 && bVar8 == 10) & (byte)((uVar7 & 4) >> 2)) != 0) {
        return;
      }
      bVar8 = bVar4 & bVar8 == 0x29 & param_1[3] != 0;
    }
    else {
      if (1 < uVar7 - 0x28) {
        if (uVar7 != 0x2b) {
          return;
        }
        goto LAB_1001cf35;
      }
      bVar8 = *(byte *)(param_1 + 0xe) & 8;
    }
  }
  else if (uVar7 < 0x7b) {
    if (uVar7 != 0x3f) {
      if (uVar7 != 0x5c) {
        return;
      }
      cVar5 = FUN_1001d106(pbVar2);
      if (cVar5 == '\0') {
        return;
      }
      bVar8 = *(byte *)(*param_1 + 1);
      *(byte *)((int)param_1 + 0x4d) = bVar8;
      param_1[0x12] = (uint)bVar8;
      return;
    }
LAB_1001cf35:
    bVar8 = *(byte *)(param_1 + 0xe) & 1;
  }
  else {
    if (uVar7 != 0x7b) {
      if (uVar7 == 0x7c) {
        bVar8 = *(byte *)(param_1 + 0xe) & 2;
        goto joined_r0x1001cecc;
      }
      if (uVar7 != 0x7d) {
        return;
      }
    }
    bVar8 = *(byte *)(param_1 + 0xe) & 0x10;
  }
joined_r0x1001cecc:
  if (bVar8 != 0) {
    return;
  }
LAB_1001cf58:
  param_1[0x12] = 0;
  return;
}

