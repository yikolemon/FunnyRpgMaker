/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467882 */

int __fastcall FUN_00467882(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *local_2c;
  uint *local_28;
  uint local_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_2c;
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
    local_2c = (uint *)(uVar5 + uVar6 * 0x10);
    uVar1 = *(uint *)(uVar5 + uVar6 * 0x10);
    local_28 = param_1;
    if (uVar1 != 0) {
      puVar4 = (uint *)(uVar5 + param_3 * 0x10);
      if (*puVar4 < uVar1) {
        iVar8 = FUN_00467972((int)puVar4,uVar1,param_4);
        if (iVar8 != 0) goto LAB_0046794d;
        *puVar4 = uVar1;
      }
      uVar5 = uVar1 + 7 >> 3;
      if (uVar5 != 0) {
        uVar1 = puVar4[2];
        uVar2 = local_2c[2];
        uVar3 = 0;
        do {
          *(byte *)(uVar1 + uVar3) = *(byte *)(uVar1 + uVar3) | *(byte *)(uVar2 + uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar5 != uVar3);
      }
    }
    puVar4 = local_2c;
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
      FUN_004878c0(local_2c,local_2c + 4,iVar7 * 0x10);
      puVar4 = puVar4 + iVar7 * 4;
      *puVar4 = local_24;
      puVar4[1] = uStack_20;
      puVar4[2] = uStack_1c;
      puVar4[3] = uStack_18;
      uVar5 = *local_28;
    }
    *local_28 = uVar5 - 1;
  }
LAB_0046794d:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_2c)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_2c);
}

