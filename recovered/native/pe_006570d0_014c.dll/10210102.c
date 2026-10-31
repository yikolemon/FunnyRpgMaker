/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10210102 */

int __fastcall FUN_10210102(uint *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *local_2c;
  uint *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  uVar6 = param_3;
  if (param_2 >= param_3 && param_2 != param_3) {
    uVar6 = param_2;
  }
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  iVar8 = 0;
  if ((param_3 < uVar6) && (uVar6 < *param_1)) {
    uVar5 = param_1[2];
    local_2c = (undefined4 *)(uVar5 + uVar6 * 0x10);
    uVar2 = *(uint *)(uVar5 + uVar6 * 0x10);
    local_28 = param_1;
    if (uVar2 != 0) {
      puVar4 = (uint *)(uVar5 + param_3 * 0x10);
      if (*puVar4 < uVar2) {
        iVar8 = FUN_102101f2(param_4);
        if (iVar8 != 0) goto LAB_102101cd;
        *puVar4 = uVar2;
      }
      uVar5 = uVar2 + 7 >> 3;
      if (uVar5 != 0) {
        uVar2 = puVar4[2];
        iVar8 = local_2c[2];
        uVar3 = 0;
        do {
          *(byte *)(uVar2 + uVar3) = *(byte *)(uVar2 + uVar3) | *(byte *)(iVar8 + uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar5 != uVar3);
      }
    }
    puVar1 = local_2c;
    iVar8 = 0;
    *local_2c = 0;
    local_2c[3] = 0;
    uVar5 = *local_28;
    iVar7 = ~uVar6 + uVar5;
    if (iVar7 != 0) {
      local_24 = *local_2c;
      uStack_20 = local_2c[1];
      uStack_1c = local_2c[2];
      uStack_18 = local_2c[3];
      FUN_1025b2d0(local_2c,local_2c + 4,iVar7 * 0x10);
      puVar1 = puVar1 + iVar7 * 4;
      *puVar1 = local_24;
      puVar1[1] = uStack_20;
      puVar1[2] = uStack_1c;
      puVar1[3] = uStack_18;
      uVar5 = *local_28;
    }
    *local_28 = uVar5 - 1;
  }
LAB_102101cd:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

