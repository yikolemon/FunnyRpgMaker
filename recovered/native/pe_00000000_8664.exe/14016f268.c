/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f268 */

int FUN_14016f268(uint *param_1,uint param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined8 uStack_54;
  uint uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar5 = param_3;
  if (param_2 >= param_3 && param_2 != param_3) {
    uVar5 = param_2;
  }
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  iVar6 = 0;
  if ((param_3 < uVar5) && (uVar5 < *param_1)) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar5 * 0x18);
    uVar7 = *puVar1;
    if (uVar7 != 0) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 2) + (ulonglong)param_3 * 0x18);
      if (*puVar2 < uVar7) {
        iVar6 = FUN_14016f3a3(puVar2,uVar7,param_4);
        if (iVar6 != 0) goto LAB_14016f372;
        *puVar2 = uVar7;
      }
      if ((uVar7 + 7 & 0xfffffff8) != 0) {
        lVar3 = *(longlong *)(puVar2 + 2);
        lVar4 = *(longlong *)(puVar1 + 2);
        lVar9 = 0;
        do {
          *(byte *)(lVar3 + lVar9) = *(byte *)(lVar3 + lVar9) | *(byte *)(lVar4 + lVar9);
          lVar9 = lVar9 + 1;
        } while (uVar7 + 7 >> 3 != (uint)lVar9);
      }
    }
    iVar6 = 0;
    *puVar1 = 0;
    puVar1[4] = 0;
    uVar7 = *param_1;
    if (~uVar5 + uVar7 != 0) {
      local_48 = *(undefined8 *)(puVar1 + 4);
      local_58 = *puVar1;
      uStack_54 = *(undefined8 *)(puVar1 + 1);
      uStack_4c = puVar1[3];
      uVar8 = (ulonglong)(~uVar5 + uVar7);
      FUN_1401c5180(puVar1,puVar1 + 6,uVar8 * 0x18);
      puVar2 = puVar1 + uVar8 * 6;
      *puVar2 = local_58;
      puVar2[1] = (uint)uStack_54;
      puVar2[2] = uStack_54._4_4_;
      puVar2[3] = uStack_4c;
      *(undefined8 *)(puVar1 + uVar8 * 6 + 4) = local_48;
      uVar7 = *param_1;
    }
    *param_1 = uVar7 - 1;
  }
LAB_14016f372:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

