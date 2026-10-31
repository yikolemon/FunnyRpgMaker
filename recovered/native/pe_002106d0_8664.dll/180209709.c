/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180209709 */

int FUN_180209709(longlong param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_44 = 0;
  pbVar11 = (byte *)(param_1 + 5);
  iVar3 = 8;
  if (pbVar11 <= param_2) {
    bVar1 = *(byte *)(param_1 + 3);
    uVar7 = (uint)bVar1;
    bVar2 = *(byte *)(param_1 + 4);
    uVar6 = *(int *)(param_3 + 0xf) + (uint)bVar2;
    if (*(uint *)((longlong)param_3 + 0x7c) < uVar6) {
      uVar6 = uVar6 + 3 & 0xfffffffc;
      local_58 = param_3[0x10];
      local_50 = &local_44;
      uVar4 = FUN_1801c9c3f(*param_3,0x28,*(int *)(param_3 + 0xf),uVar6);
      param_3[0x10] = uVar4;
      iVar3 = local_44;
      if (local_44 != 0) goto LAB_18020990c;
      *(uint *)((longlong)param_3 + 0x7c) = uVar6;
    }
    iVar8 = (uVar7 & 1) + 9;
    if ((bVar1 & 2) == 0) {
      iVar8 = (uVar7 & 1) + 8;
    }
    iVar3 = 8;
    if (pbVar11 + (((uVar7 & 0x10) >> 4) + ((uVar7 & 8) >> 3) + ((bVar1 & 4) >> 2) + iVar8) *
                  (uint)bVar2 <= param_2) {
      uVar6 = *(uint *)(param_3 + 0xf);
      if (bVar2 == 0) {
        iVar3 = 0;
      }
      else {
        lVar5 = (ulonglong)uVar6 * 0x28 + param_3[0x10];
        lVar9 = 0;
        do {
          uVar6 = (uint)*pbVar11;
          if ((bVar1 & 1) == 0) {
            pbVar10 = pbVar11 + 1;
          }
          else {
            pbVar10 = pbVar11 + 2;
            uVar6 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
          }
          *(uint *)(lVar5 + lVar9) = uVar6;
          uVar6 = (uint)*pbVar10;
          if ((bVar1 & 2) == 0) {
            pbVar11 = pbVar10 + 1;
          }
          else {
            pbVar11 = pbVar10 + 2;
            uVar6 = (uint)CONCAT11(*pbVar10,pbVar10[1]);
          }
          *(uint *)(lVar5 + 4 + lVar9) = uVar6;
          *(uint *)(lVar5 + 8 + lVar9) = (uint)*pbVar11;
          uVar6 = (uint)pbVar11[2];
          if ((bVar1 & 4) == 0) {
            pbVar10 = pbVar11 + 3;
            uVar7 = (uint)pbVar11[1] << 8;
          }
          else {
            uVar6 = (uint)pbVar11[2] << 8 | (uint)pbVar11[1] << 0x10;
            uVar7 = (uint)pbVar11[3];
            pbVar10 = pbVar11 + 4;
          }
          *(uint *)(lVar5 + 0x14 + lVar9) = uVar7 | uVar6;
          uVar6 = (uint)pbVar10[1];
          if ((bVar1 & 8) == 0) {
            pbVar12 = pbVar10 + 2;
            uVar7 = (uint)*pbVar10 << 8;
          }
          else {
            uVar6 = (uint)pbVar10[1] << 8 | (uint)*pbVar10 << 0x10;
            uVar7 = (uint)pbVar10[2];
            pbVar12 = pbVar10 + 3;
          }
          *(uint *)(lVar5 + 0x18 + lVar9) = uVar7 | uVar6;
          uVar6 = (uint)*pbVar12;
          if ((bVar1 & 0x10) == 0) {
            pbVar11 = pbVar12 + 1;
          }
          else {
            pbVar11 = pbVar12 + 2;
            uVar6 = (uint)CONCAT11(*pbVar12,pbVar12[1]);
          }
          *(uint *)(lVar5 + 0x1c + lVar9) = uVar6;
          lVar9 = lVar9 + 0x28;
        } while ((uint)bVar2 * 0x28 != (int)lVar9);
        uVar6 = *(uint *)(param_3 + 0xf);
        iVar3 = local_44;
      }
      *(uint *)(param_3 + 0xf) = uVar6 + bVar2;
    }
  }
LAB_18020990c:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

