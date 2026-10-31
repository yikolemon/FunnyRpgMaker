/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101529e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_101529e4(undefined *param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  undefined *local_74;
  undefined4 *local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar6 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_74;
  local_60 = *(float *)(DAT_1039d74c + 0xd10) + *(float *)(DAT_1039d74c + 0xd10) +
             *(float *)(DAT_1039d74c + 0x1228);
  local_5c = *(float *)(DAT_1039d74c + 0x1228) + _DAT_102b9554;
  iVar4 = *(int *)(DAT_1039d74c + 0x14cc);
  local_54 = local_5c + local_5c;
  local_48 = *(undefined4 *)(iVar4 + 0x144);
  local_44 = *(undefined4 *)(iVar4 + 0x148);
  local_24 = *(undefined4 *)(DAT_1039d74c + 0xe00);
  uStack_20 = *(undefined4 *)(DAT_1039d74c + 0xe04);
  uStack_1c = *(undefined4 *)(DAT_1039d74c + 0xe08);
  local_70 = &local_24;
  fStack_18 = *(float *)(DAT_1039d74c + 0xe0c) * DAT_102b70e0;
  local_74 = (undefined *)0x0;
  FUN_100fcd80();
  local_70 = &local_34;
  local_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_74 = (undefined *)0x16;
  FUN_100fcd80();
  local_70 = (undefined4 *)0x1;
  local_74 = (undefined *)0xa;
  FUN_1011177d();
  local_4c = iVar6;
  local_3c = *(undefined8 *)(iVar6 + 0x94);
  *(undefined8 *)(iVar6 + 0x94) = DAT_102b9680;
  local_74 = *(undefined **)(param_1 + 0x30);
  local_70 = (undefined4 *)(*(float *)(param_1 + 0x38) - local_54);
  fVar8 = (float10)FUN_100fdbca();
  local_58 = (float)fVar8;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(float *)(iVar4 + 0x144) = local_58;
  *(undefined4 *)(iVar4 + 0x148) = uVar1;
  local_64 = 0x10;
  local_68 = local_60;
  local_6c = local_5c;
  local_50 = 0;
  local_70 = (undefined4 *)0x0;
  local_74 = &DAT_1033d430;
  local_40 = local_58;
  uVar3 = FUN_1012e384();
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(float *)(iVar4 + 0x144) = local_58 + local_5c;
  *(undefined4 *)(iVar4 + 0x148) = uVar1;
  local_64 = 0x10;
  local_68 = local_60;
  local_6c = local_5c;
  local_70 = (undefined4 *)0x1;
  local_74 = &DAT_1033cff6;
  local_58 = (float)iVar4;
  cVar2 = FUN_1012e384();
  iVar4 = -(uVar3 & 0xff);
  if (cVar2 != '\0') {
    iVar4 = 1;
  }
  FUN_10111839();
  local_74 = (undefined *)0x2;
  FUN_100fce8e();
  *(undefined8 *)(local_4c + 0x94) = local_3c;
  local_60 = (float)iVar4;
  if (iVar4 != 0) {
    local_70 = *(undefined4 **)(param_1 + 0x18);
    local_74 = param_1;
    iVar4 = FUN_1014f645();
    if (iVar4 != 0) {
      local_5c = *(float *)(param_1 + 0xc);
      iVar5 = (iVar4 - (int)local_5c >> 4) * -0x55555555;
      iVar4 = iVar5 + (int)local_60;
      iVar6 = iVar5 + (int)local_60 * 2;
      do {
        if ((iVar4 < 0) || (iVar7 = iVar4, *(int *)(param_1 + 4) <= iVar4)) {
          iVar7 = iVar5;
        }
        local_50 = (int)local_5c + iVar7 * 0x30;
        if (((*(byte *)((int)local_5c + 6 + iVar7 * 0x30) & 0x20) == 0) || (iVar6 < 0)) break;
        iVar4 = iVar4 + (int)local_60;
        iVar5 = iVar5 + (int)local_60;
        iVar6 = iVar6 + (int)local_60;
      } while (iVar4 < *(int *)(param_1 + 4));
    }
  }
  *(undefined4 *)((int)local_58 + 0x144) = local_48;
  fVar9 = local_54 + DAT_1028b430;
  *(undefined4 *)((int)local_58 + 0x148) = local_44;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) - fVar9;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_74)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_50;
}

