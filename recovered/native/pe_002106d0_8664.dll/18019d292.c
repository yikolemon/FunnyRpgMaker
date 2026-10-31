/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019d292 */

undefined8 FUN_18019d292(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  int iVar11;
  float fVar12;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined8 local_94;
  float local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_2 + 0x58);
  lVar6 = FUN_18019abe2(param_2,0x2e);
  if (lVar6 == 0) {
    lVar6 = FUN_18019abe2(param_2,0xff0e);
    if (lVar6 == 0) {
      uVar9 = 0;
      goto LAB_18019d458;
    }
  }
  local_a0 = *(undefined4 *)(lVar6 + 0x28);
  lVar7 = FUN_180197a3b(param_1);
  fVar12 = (*(float *)(lVar6 + 0x10) - *(float *)(lVar6 + 8)) + DAT_1802ac570;
  iVar11 = 0;
  uVar5 = FUN_1801976e6(param_1,(uint)*(ushort *)(lVar7 + 4) + (uint)*(ushort *)(lVar7 + 4) * 2 + 2,
                        *(undefined2 *)(lVar7 + 6),0);
  puVar8 = (ushort *)FUN_180197a3b(param_1,uVar5);
  fVar4 = DAT_1802bb8e0;
  local_84 = 0;
  uStack_7c = 0;
  uVar1 = *(ushort *)(lVar2 + 0x30);
  fVar12 = fVar12 * DAT_1802dbb3c;
  local_98 = FUN_180102463(*(undefined4 *)(lVar6 + 4),*(float *)(lVar6 + 8) + fVar12 + DAT_1802bb8e0
                          );
  local_94 = *(undefined8 *)(lVar6 + 8);
  local_8c = (float)local_94 + fVar12 + fVar4;
  local_88 = *(undefined4 *)(lVar6 + 0x14);
  local_9c = (uint)uVar1 << 6 | 2;
  local_74 = uVar5;
  uVar9 = FUN_180197c73(param_1,param_2,0,&local_9c);
  puVar10 = (undefined2 *)FUN_180197a3b(param_1,local_a0);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  do {
    local_c8 = ((ushort)puVar10[2] + 1) * iVar11 + (uint)*puVar8;
    local_b0 = (uint)(ushort)puVar10[3];
    local_b8 = (uint)(ushort)puVar10[2];
    local_c0 = (uint)puVar8[1];
    FUN_180196571(uVar3,*puVar10,puVar10[1],uVar3);
    iVar11 = iVar11 + 1;
  } while (iVar11 != 3);
  local_c0 = (uint)puVar8[3];
  local_c8 = (uint)puVar8[2];
  FUN_180196606(param_1,uVar3,*puVar8,puVar8[1]);
LAB_18019d458:
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_e8)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_e8);
}

