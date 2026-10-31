/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005d41a */

void FUN_14005d41a(longlong *param_1)

{
  undefined2 uVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  
  puVar2 = (ushort *)*param_1;
  puVar3 = (ushort *)param_1[1];
  if (puVar2 == puVar3) {
    *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + 0x76) = 0;
    return;
  }
  uVar8 = *puVar2;
  *(ushort *)((longlong)param_1 + 0x76) = uVar8;
  if (0xff < uVar8) goto LAB_14005d567;
  bVar4 = (byte)uVar8;
  lVar6 = FUN_1401c4fe0(&DAT_1401d36f0,(int)(char)bVar4,0x17);
  if (lVar6 == 0) goto LAB_14005d567;
  *(uint *)(param_1 + 0xe) = (uint)uVar8;
  if (bVar4 < 0x3f) {
    if (bVar4 < 0x28) {
      if (bVar4 == 10) {
        if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
          return;
        }
        if (*(int *)((longlong)param_1 + 0x14) != 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0xe) = 0x7c;
        return;
      }
      if (bVar4 != 0x24) {
        return;
      }
      uVar7 = (uint)param_1[0xc];
      if ((uVar7 >> 0x18 & 1) == 0) {
        return;
      }
      if (puVar2 + 1 == puVar3) {
        return;
      }
      uVar8 = puVar2[1];
      if (uVar8 == 0x5c) {
        bVar4 = FUN_14005d5ae(param_1);
        uVar8 = puVar2[(ulonglong)bVar4 + 1];
        uVar7 = (uint)param_1[0xc];
      }
      else {
        bVar4 = 0;
      }
      if (((*(int *)((longlong)param_1 + 0x14) == 0 && uVar8 == 10) & (byte)((uVar7 & 4) >> 2)) != 0
         ) {
        return;
      }
      bVar4 = bVar4 & uVar8 == 0x29 & *(int *)((longlong)param_1 + 0x14) != 0;
    }
    else {
      if (1 < bVar4 - 0x28) {
        if (bVar4 != 0x2b) {
          return;
        }
        goto LAB_14005d544;
      }
      bVar4 = *(byte *)(param_1 + 0xc) & 8;
    }
  }
  else if (bVar4 < 0x7b) {
    if (bVar4 != 0x3f) {
      if (bVar4 != 0x5c) {
        return;
      }
      cVar5 = FUN_14005d5ae(param_1,puVar2);
      if (cVar5 == '\0') {
        return;
      }
      uVar1 = *(undefined2 *)(*param_1 + 2);
      *(undefined2 *)((longlong)param_1 + 0x76) = uVar1;
      *(uint *)(param_1 + 0xe) = (uint)(byte)uVar1;
      return;
    }
LAB_14005d544:
    bVar4 = *(byte *)(param_1 + 0xc) & 1;
  }
  else {
    if (bVar4 != 0x7b) {
      if (bVar4 == 0x7c) {
        bVar4 = *(byte *)(param_1 + 0xc) & 2;
        goto joined_r0x00014005d4c1;
      }
      if (bVar4 != 0x7d) {
        return;
      }
    }
    bVar4 = *(byte *)(param_1 + 0xc) & 0x10;
  }
joined_r0x00014005d4c1:
  if (bVar4 != 0) {
    return;
  }
LAB_14005d567:
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}

