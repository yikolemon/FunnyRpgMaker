/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018fdef */

undefined4 FUN_1018fdef(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_38 = param_4;
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  iVar1 = *(int *)(param_1 + 0x290);
  local_3c = param_1;
  iVar4 = *(int *)(param_1 + 8);
  uVar2 = FUN_100fbc6a(*(undefined4 *)(iVar1 + 0x98),param_2);
  *(undefined4 *)(iVar1 + 0x98) = uVar2;
  uVar2 = FUN_100fbc6a(*(undefined4 *)(iVar1 + 0x9c),param_3);
  *(undefined4 *)(iVar1 + 0x9c) = uVar2;
  local_48 = param_2;
  iVar5 = param_2 + iVar4;
  local_44 = param_3;
  iVar3 = iVar4 + param_3;
  local_2c = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_30 = iVar4;
  iStack_28 = iVar5;
  iStack_24 = iVar3;
  FUN_1019269e();
  if (local_1c._4_4_ == 0) {
    iVar4 = -4;
    do {
      iVar4 = iVar4 + 1;
      if ((iVar4 == 0) || (*(char *)(iVar1 + 0xa8) == '\x01')) {
        if ((DAT_1039d74c != 0) && ((*(byte *)(DAT_1039d74c + 0x27b5) & 1) != 0)) {
          FUN_100f99e6("[font] Failed packing %dx%d rectangle. Returning fallback.\n",local_48,
                       local_44);
        }
        if (DAT_10388d00 == (local_14 ^ (uint)&local_48)) {
          return 0xffffffff;
        }
        goto LAB_1019007c;
      }
      FUN_10192111(local_3c);
      local_2c = 0;
      uStack_20 = 0;
      local_1c = 0;
      iStack_28 = iVar5;
      iStack_24 = iVar3;
      FUN_1019269e();
    } while (local_1c._4_4_ == 0);
  }
  iVar4 = local_30;
  local_34 = uStack_20 & 0xffff;
  local_40 = (uint)(ushort)local_1c;
  local_48 = local_48 & 0xffff;
  uVar2 = FUN_100fbc6a(*(undefined4 *)(iVar1 + 0xa0),local_48 + local_34 + local_30);
  *(undefined4 *)(iVar1 + 0xa0) = uVar2;
  local_44 = local_44 & 0xffff;
  uVar2 = FUN_100fbc6a(*(undefined4 *)(iVar1 + 0xa4),local_40 + local_44 + iVar4);
  iVar4 = local_38;
  *(undefined4 *)(iVar1 + 0xa4) = uVar2;
  *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + 1;
  *(int *)(iVar1 + 0x88) = *(int *)(iVar1 + 0x88) + iVar5 * iVar3;
  iVar3 = *(int *)(iVar1 + 0x5c);
  if (iVar3 == *(int *)(iVar1 + 0x60)) {
    if (iVar3 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar3 / 2 + iVar3;
    }
    iVar6 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    iVar5 = FUN_100fa1fa(iVar6 * 8);
    if (*(int *)(iVar1 + 100) != 0) {
      FUN_1025b2d0(iVar5,*(int *)(iVar1 + 100),*(int *)(iVar1 + 0x5c) << 3);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 100));
    }
    *(int *)(iVar1 + 100) = iVar5;
    *(int *)(iVar1 + 0x60) = iVar6;
    iVar3 = *(int *)(iVar1 + 0x5c);
  }
  else {
    iVar5 = *(int *)(iVar1 + 100);
  }
  *(uint *)(iVar5 + 4 + iVar3 * 8) = local_44 * 0x10000 + local_48;
  *(uint *)(iVar5 + iVar3 * 8) = local_40 * 0x10000 + local_34;
  *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 1;
  if (iVar4 == 0) {
    if (DAT_10388d00 == (local_14 ^ (uint)&local_48)) {
      uVar2 = FUN_10192772();
      return uVar2;
    }
  }
  else if (DAT_10388d00 == (local_14 ^ (uint)&local_48)) {
    uVar2 = FUN_1019273c();
    return uVar2;
  }
LAB_1019007c:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

