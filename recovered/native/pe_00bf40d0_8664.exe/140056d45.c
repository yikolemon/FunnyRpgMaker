/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140056d45 */

int FUN_140056d45(longlong param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auStackY_78 [32];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  local_44 = 0;
  pbVar11 = (byte *)(param_1 + 5);
  iVar3 = 8;
  if (pbVar11 <= param_2) {
    bVar1 = *(byte *)(param_1 + 3);
    uVar6 = (uint)bVar1;
    bVar2 = *(byte *)(param_1 + 4);
    uVar9 = (uint)bVar2;
    uVar5 = *(uint *)(param_3 + 0xf) + uVar9;
    if (*(uint *)((longlong)param_3 + 0x7c) < uVar5) {
      uVar5 = uVar5 + 3 & 0xfffffffc;
      lVar4 = FUN_14001c617(*param_3,0x28,*(uint *)(param_3 + 0xf),uVar5,param_3[0x10],&local_44);
      param_3[0x10] = lVar4;
      iVar3 = local_44;
      if (local_44 != 0) goto LAB_140056f48;
      *(uint *)((longlong)param_3 + 0x7c) = uVar5;
    }
    iVar7 = (uVar6 & 1) + 9;
    if ((bVar1 & 2) == 0) {
      iVar7 = (uVar6 & 1) + 8;
    }
    iVar3 = 8;
    if (pbVar11 + (((uVar6 & 0x10) >> 4) + ((uVar6 & 8) >> 3) + ((bVar1 & 4) >> 2) + iVar7) * uVar9
        <= param_2) {
      uVar5 = *(uint *)(param_3 + 0xf);
      if (bVar2 == 0) {
        iVar3 = 0;
      }
      else {
        lVar4 = (ulonglong)uVar5 * 0x28 + param_3[0x10];
        lVar8 = 0;
        do {
          uVar5 = (uint)*pbVar11;
          if ((bVar1 & 1) == 0) {
            pbVar10 = pbVar11 + 1;
          }
          else {
            pbVar10 = pbVar11 + 2;
            uVar5 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
          }
          *(uint *)(lVar4 + lVar8) = uVar5;
          uVar5 = (uint)*pbVar10;
          if ((bVar1 & 2) == 0) {
            pbVar11 = pbVar10 + 1;
          }
          else {
            pbVar11 = pbVar10 + 2;
            uVar5 = (uint)CONCAT11(*pbVar10,pbVar10[1]);
          }
          *(uint *)(lVar4 + 4 + lVar8) = uVar5;
          *(uint *)(lVar4 + 8 + lVar8) = (uint)*pbVar11;
          uVar5 = (uint)pbVar11[2];
          if ((bVar1 & 4) == 0) {
            pbVar10 = pbVar11 + 3;
            uVar6 = (uint)pbVar11[1] << 8;
          }
          else {
            uVar5 = (uint)pbVar11[2] << 8 | (uint)pbVar11[1] << 0x10;
            uVar6 = (uint)pbVar11[3];
            pbVar10 = pbVar11 + 4;
          }
          *(uint *)(lVar4 + 0x14 + lVar8) = uVar6 | uVar5;
          uVar5 = (uint)pbVar10[1];
          if ((bVar1 & 8) == 0) {
            pbVar12 = pbVar10 + 2;
            uVar6 = (uint)*pbVar10 << 8;
          }
          else {
            uVar5 = (uint)pbVar10[1] << 8 | (uint)*pbVar10 << 0x10;
            uVar6 = (uint)pbVar10[2];
            pbVar12 = pbVar10 + 3;
          }
          *(uint *)(lVar4 + 0x18 + lVar8) = uVar6 | uVar5;
          uVar5 = (uint)*pbVar12;
          if ((bVar1 & 0x10) == 0) {
            pbVar11 = pbVar12 + 1;
          }
          else {
            pbVar11 = pbVar12 + 2;
            uVar5 = (uint)CONCAT11(*pbVar12,pbVar12[1]);
          }
          *(uint *)(lVar4 + 0x1c + lVar8) = uVar5;
          lVar8 = lVar8 + 0x28;
        } while (uVar9 * 0x28 != (int)lVar8);
        uVar5 = *(uint *)(param_3 + 0xf);
        iVar3 = local_44;
      }
      *(uint *)(param_3 + 0xf) = uVar5 + uVar9;
    }
  }
LAB_140056f48:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_78)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_78);
}

