/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d1bc */

int FUN_14006d1bc(uint *param_1,uint param_2,uint param_3,longlong param_4)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  uVar9 = param_3;
  if (param_2 >= param_3 && param_2 != param_3) {
    uVar9 = param_2;
  }
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  iVar5 = 0;
  if ((param_3 < uVar9) && (iVar5 = 0, uVar9 < *param_1)) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar9 * 0x18);
    uVar6 = *puVar1;
    if (uVar6 != 0) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 2) + (ulonglong)param_3 * 0x18);
      if (*puVar2 < uVar6) {
        iVar5 = FUN_14006d2f7((longlong)puVar2,uVar6,param_4);
        if (iVar5 != 0) goto LAB_14006d2c6;
        *puVar2 = uVar6;
      }
      if ((uVar6 + 7 & 0xfffffff8) != 0) {
        lVar3 = *(longlong *)(puVar2 + 2);
        lVar4 = *(longlong *)(puVar1 + 2);
        lVar8 = 0;
        do {
          *(byte *)(lVar3 + lVar8) = *(byte *)(lVar3 + lVar8) | *(byte *)(lVar4 + lVar8);
          lVar8 = lVar8 + 1;
        } while (uVar6 + 7 >> 3 != (uint)lVar8);
      }
    }
    iVar5 = 0;
    *puVar1 = 0;
    puVar1[4] = 0;
    uVar6 = *param_1;
    if (~uVar9 + uVar6 != 0) {
      local_48 = *(undefined8 *)(puVar1 + 4);
      local_58 = *puVar1;
      uStack_54 = (undefined4)*(undefined8 *)(puVar1 + 1);
      uStack_50 = (undefined4)((ulonglong)*(undefined8 *)(puVar1 + 1) >> 0x20);
      uStack_4c = puVar1[3];
      uVar7 = (ulonglong)(~uVar9 + uVar6);
      FUN_1400b3550((undefined8 *)puVar1,(undefined8 *)(puVar1 + 6),uVar7 * 0x18);
      *(ulonglong *)(puVar1 + uVar7 * 6) = CONCAT44(uStack_54,local_58);
      *(ulonglong *)(puVar1 + uVar7 * 6 + 2) = CONCAT44(uStack_4c,uStack_50);
      *(undefined8 *)(puVar1 + uVar7 * 6 + 4) = local_48;
      uVar6 = *param_1;
    }
    *param_1 = uVar6 - 1;
  }
LAB_14006d2c6:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_78)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_78);
}

