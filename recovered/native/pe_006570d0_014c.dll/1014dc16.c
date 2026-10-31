/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014dc16 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1014dc16(undefined4 param_1,char *param_2,char *param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float local_58;
  char local_51;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_58;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  uVar5 = 0;
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    local_50 = *(float *)(iVar1 + 0x144);
    local_34 = *(float *)(iVar1 + 0x148);
    local_44 = FUN_100fd57d(param_1,0);
    FUN_100fdb2e(&local_1c,param_1,local_44,0,0xbf800000);
    local_51 = FUN_1014db19();
    if (local_51 != '\0') {
      FUN_1011177d(0x2000,1);
    }
    FUN_101131fa(param_1);
    if (param_5 == '\0') {
      FUN_10111871(1);
    }
    if (*(int *)(iVar1 + 0x1f0) == 0) {
      local_34 = (float)(int)(*(float *)(iVar2 + 0xd1c) * DAT_102b70e0) + *(float *)(iVar1 + 0x144);
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      *(float *)(iVar1 + 0x144) = local_34;
      local_58 = *(float *)(iVar1 + 0x148);
      local_50 = *(float *)(iVar1 + 0x17c);
      local_4c = (float)CONCAT22(local_4c._2_2_,*(undefined2 *)(iVar1 + 0x1bc));
      FUN_100fd1ac(0xe,*(float *)(iVar2 + 0xd1c) + *(float *)(iVar2 + 0xd1c));
      local_24 = (ulonglong)local_1c;
      uVar5 = FUN_10133727(&DAT_10356101,param_4,0x2800000,&local_24);
      FUN_100fd4c4(1);
      if ((*(byte *)(iVar2 + 0x1e89) & 1) != 0) {
        FUN_100fd5ae(local_34 + (float)((uint)local_4c & 0xffff),local_58 + local_50,param_1,
                     local_44,0);
      }
      *(float *)(iVar1 + 0x144) =
           (float)(int)(*(float *)(iVar2 + 0xd1c) * DAT_102b8d58) + *(float *)(iVar1 + 0x144);
    }
    else {
      local_4c = 0.0;
      if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
        FUN_100fdb2e(&local_24,param_2,0,0,0xbf800000);
        local_4c = (float)local_24;
      }
      local_40 = 0.0;
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        FUN_100fdb2e(&local_24,param_3,0,0,0xbf800000);
        local_40 = (float)local_24;
      }
      fVar6 = (float10)FUN_1014c7f4(local_4c,local_1c,local_40,
                                    (float)(int)(*(float *)(iVar2 + 0x1228) * DAT_102b8e98));
      local_58 = (float)fVar6;
      local_38 = local_58;
      FUN_1010c3e4(&local_24);
      fVar6 = (float10)FUN_100fdbca(0,(float)local_24 - local_58);
      local_48 = (float)fVar6;
      local_34 = local_34 + *(float *)(iVar1 + 0x17c);
      local_24 = CONCAT44(local_18,local_58);
      local_3c = local_48;
      uVar5 = FUN_10133727(&DAT_10356101,0,0x3800000,&local_24);
      if ((*(byte *)(iVar2 + 0x1e89) & 1) != 0) {
        local_58 = local_34 + 0.0;
        FUN_100fd5ae((float)*(ushort *)(iVar1 + 0x1bc) + local_50,local_58,param_1,local_44,0);
        if (0.0 < local_4c) {
          FUN_100fd5ae((float)*(ushort *)(iVar1 + 0x1ba) + local_50,local_58,param_2,0,1);
        }
        if (0.0 < local_40) {
          FUN_100fcd80(0,iVar2 + 0xe10);
          FUN_10118366(&DAT_1034a245,&DAT_1034a243);
          FUN_100fd5ae((float)*(ushort *)(iVar1 + 0x1be) + local_48 + local_50,local_58,param_3,0,0)
          ;
          FUN_100fce8e(1);
        }
        if (param_4 != '\0') {
          local_58 = *(float *)(iVar2 + 0x1228) * _DAT_102b964c;
          uVar4 = FUN_100fcb39(0,0x3f800000);
          FUN_10193ceb(*(undefined4 *)(iVar1 + 0x2e8),
                       local_50 +
                       *(float *)(iVar2 + 0x1228) * DAT_102b8e90 +
                       local_48 + (float)*(ushort *)(iVar1 + 0x1c0),
                       local_34 + DAT_102b9650 * *(float *)(iVar2 + 0x1228) * DAT_102b70e0,uVar4,
                       local_58);
        }
      }
    }
    if (((*(int *)(iVar2 + 0x1528) == *(int *)(iVar2 + 0x1e80)) &&
        (*(int *)(iVar2 + 0x1510) != *(int *)(iVar2 + 0x1e80))) && (*(int *)(iVar2 + 0x1548) == 1))
    {
      cVar3 = FUN_1010378f(0,0xbf800000);
      if (cVar3 != '\0') {
        FUN_101028d8();
        FUN_101143b4(0x290,0xffffffff,0);
      }
    }
    if (param_5 == '\0') {
      FUN_10111961();
    }
    FUN_10113568();
    if (local_51 != '\0') {
      FUN_10111839();
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_58)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

