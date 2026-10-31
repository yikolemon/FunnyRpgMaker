/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015285a */

int * __fastcall FUN_1015285a(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar6 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_44;
  iVar7 = *(int *)(DAT_1039d74c + 0x14cc);
  fVar1 = *(float *)(DAT_1039d74c + 0xd10);
  fVar2 = *(float *)(DAT_1039d74c + 0x1228);
  uVar5 = *(undefined4 *)(iVar7 + 0x144);
  local_38 = *(undefined4 *)(iVar7 + 0x148);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  *(float *)(iVar7 + 0x144) = *(float *)(param_1 + 0x30) - fVar1;
  *(undefined4 *)(iVar7 + 0x148) = uVar3;
  *(float *)(param_1 + 0x30) = fVar2 + fVar1 + *(float *)(param_1 + 0x30);
  local_24 = *(undefined4 *)(iVar6 + 0xe00);
  uStack_20 = *(undefined4 *)(iVar6 + 0xe04);
  uStack_1c = *(undefined4 *)(iVar6 + 0xe08);
  fStack_18 = *(float *)(iVar6 + 0xe0c) * DAT_102b70e0;
  FUN_100fcd80(0,&local_24);
  local_34 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  FUN_100fcd80(0x16,&local_34);
  local_44 = (int *)0x0;
  cVar4 = FUN_10132c48(&DAT_10330e62,0,0x50);
  FUN_100fce8e(2);
  if (cVar4 != '\0') {
    iVar6 = *(int *)(param_1 + 4);
    local_40 = uVar5;
    local_3c = iVar7;
    if (iVar6 < 1) {
      local_44 = (int *)0x0;
    }
    else {
      local_44 = (int *)0x0;
      iVar7 = 0;
      iVar8 = 0;
      do {
        if ((*(byte *)(*(int *)(param_1 + 0xc) + 6 + iVar7) & 0x20) == 0) {
          piVar9 = (int *)(*(int *)(param_1 + 0xc) + iVar7);
          uVar5 = FUN_1014f6a8(param_1,piVar9);
          local_34 = 0;
          cVar4 = FUN_10133727(uVar5,*(int *)(param_1 + 0x18) == *piVar9,0,&local_34);
          if (cVar4 != '\0') {
            local_44 = piVar9;
          }
          iVar6 = *(int *)(param_1 + 4);
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 0x30;
      } while (iVar8 < iVar6);
    }
    FUN_101334a7();
    uVar5 = local_40;
    iVar7 = local_3c;
  }
  *(undefined4 *)(iVar7 + 0x144) = uVar5;
  *(undefined4 *)(iVar7 + 0x148) = local_38;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_44)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_44;
}

