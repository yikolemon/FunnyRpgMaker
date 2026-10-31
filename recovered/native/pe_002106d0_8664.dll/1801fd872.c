/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fd872 */

int FUN_1801fd872(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  short local_52;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  lVar8 = param_1[4];
  lVar11 = param_1[0x12];
  local_4c = 0;
  if (*(char *)((longlong)param_1 + 0xb4) == '\0') {
    pcVar7 = (char *)param_1[0x13];
    pcVar1 = pcVar7 + *(uint *)(param_1 + 0x14);
    *param_1 = (longlong)pcVar7;
    param_1[2] = (longlong)pcVar1;
    iVar6 = 3;
    if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
      do {
        if ((((pcVar7 + 9 < pcVar1 && *pcVar7 == 'e') && (pcVar7[1] == 'e')) && (pcVar7[2] == 'x'))
           && ((pcVar7[3] == 'e' && (pcVar7[4] == 'c')))) {
          param_1[2] = (ulonglong)*(uint *)(param_1 + 0x14) + param_1[0x13];
          (*(code *)param_1[8])(param_1);
          pbVar15 = (byte *)*param_1;
          pbVar3 = (byte *)param_1[2];
          uVar9 = FUN_1802a8150(pbVar15,10,(longlong)pbVar3 - (longlong)pbVar15);
          if (uVar9 == 0) {
            bVar4 = true;
          }
          else {
            uVar10 = FUN_1802a8150(pbVar15,0xd,(longlong)pbVar3 - (longlong)pbVar15);
            bVar4 = uVar10 < uVar9;
          }
          if (pbVar15 < pbVar3) {
            uVar9 = (ulonglong)pbVar15 & 0xffffffff;
            goto LAB_1801fdb63;
          }
          break;
        }
        (*(code *)param_1[8])(param_1);
        if ((int)param_1[3] != 0) break;
        (*(code *)param_1[7])(param_1);
        pcVar7 = (char *)*param_1;
      } while (pcVar7 < pcVar1);
    }
  }
  else {
    uVar5 = FUN_1801ceb6f(lVar11);
    *(undefined4 *)(param_1 + 0x16) = 0;
    while (iVar6 = FUN_1801fde86(lVar11,&local_52,&local_50), iVar6 == 0) {
      if (local_52 != -0x7ffe) {
        if ((int)param_1[0x16] == 0) {
          iVar6 = 3;
        }
        else {
          local_4c = FUN_1801ce63e(lVar11,uVar5);
          iVar6 = local_4c;
          if (local_4c == 0) {
            lVar8 = FUN_1801cc006(lVar8,(int)param_1[0x16],&local_4c);
            param_1[0x15] = lVar8;
            iVar6 = local_4c;
            if (local_4c == 0) {
              *(undefined4 *)(param_1 + 0x16) = 0;
              iVar6 = FUN_1801fde86(lVar11,&local_52,&local_50);
              if ((iVar6 != 0) || (local_52 != -0x7ffe)) goto LAB_1801fda85;
              goto LAB_1801fda33;
            }
          }
        }
        break;
      }
      *(uint *)(param_1 + 0x16) = (int)param_1[0x16] + local_50;
      local_4c = FUN_1801ce690(lVar11);
      iVar6 = local_4c;
      if (local_4c != 0) break;
    }
  }
  goto LAB_1801fd9a3;
  while( true ) {
    pbVar15 = pbVar15 + 1;
    uVar9 = (ulonglong)(iVar12 + 1);
    if (pbVar15 == pbVar3) break;
LAB_1801fdb63:
    bVar2 = *pbVar15;
    iVar12 = (int)uVar9;
    if (((bVar2 != 9) && (bVar2 != 0x20)) && ((bVar2 != 10 && (!(bool)(bVar2 == 0xd & bVar4))))) {
      lVar11 = param_1[0x13];
      iVar14 = ((int)lVar11 + (int)param_1[0x14]) - iVar12;
      if (*(char *)((longlong)param_1 + 0xb5) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
        param_1[0x15] = lVar11;
        *(int *)(param_1 + 0x16) = iVar14;
        param_1[0x13] = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else {
        lVar11 = FUN_1801cc006(lVar8,(((int)param_1[0x14] + (int)lVar11) - iVar12) + 1,&local_4c);
        param_1[0x15] = lVar11;
        iVar6 = local_4c;
        if (local_4c != 0) break;
        *(int *)(param_1 + 0x16) = iVar14;
      }
      if ((((pbVar15 + 3 < pbVar3) &&
           (((byte)(*pbVar15 - 0x30) < 10 ||
            ((uVar13 = *pbVar15 - 0x41, uVar13 < 0x26 &&
             ((0x3f0000003fU >> ((ulonglong)uVar13 & 0x3f) & 1) != 0)))))) &&
          (((byte)(pbVar15[1] - 0x30) < 10 ||
           ((uVar13 = pbVar15[1] - 0x41, uVar13 < 0x26 &&
            ((0x3f0000003fU >> ((ulonglong)uVar13 & 0x3f) & 1) != 0)))))) &&
         ((((byte)(pbVar15[2] - 0x30) < 10 ||
           ((uVar13 = pbVar15[2] - 0x41, uVar13 < 0x26 &&
            ((0x3f0000003fU >> ((ulonglong)uVar13 & 0x3f) & 1) != 0)))) &&
          ((bVar2 = pbVar15[3], (byte)(bVar2 - 0x30) < 10 ||
           ((uVar13 = bVar2 - 0x41, uVar13 < 0x26 &&
            ((0x3f0000003fU >> ((ulonglong)uVar13 & 0x3f) & 1) != 0)))))))) {
        *param_1 = (longlong)pbVar15;
        local_68 = 0;
        (**(code **)(*(longlong *)(param_2 + 8) + 0x30))(param_1,lVar11,iVar14,&local_50);
        *(uint *)(param_1 + 0x16) = local_50;
        *(undefined1 *)(param_1[0x15] + (ulonglong)local_50) = 0;
      }
      else {
        FUN_1802a82f0(lVar11,pbVar15,iVar14);
      }
      goto LAB_1801fda8d;
    }
  }
  goto LAB_1801fd9a3;
  while( true ) {
    *(uint *)(param_1 + 0x16) = (int)param_1[0x16] + uVar13;
    iVar6 = FUN_1801fde86(lVar11,&local_52,&local_50);
    if ((iVar6 != 0) || (local_52 != -0x7ffe)) break;
LAB_1801fda33:
    uVar13 = local_50;
    local_4c = 0;
    local_4c = FUN_1801ce682(lVar11,(ulonglong)*(uint *)(param_1 + 0x16) + param_1[0x15],local_50);
    iVar6 = local_4c;
    if (local_4c != 0) goto LAB_1801fd9a3;
  }
LAB_1801fda85:
  local_4c = 0;
LAB_1801fda8d:
  (**(code **)(param_2 + 0x20))(param_1[0x15],(int)param_1[0x16],0xd971);
  iVar6 = 3;
  if (3 < *(uint *)(param_1 + 0x16)) {
    *(undefined1 *)param_1[0x15] = 0x20;
    *(undefined1 *)(param_1[0x15] + 1) = 0x20;
    *(undefined1 *)(param_1[0x15] + 2) = 0x20;
    *(undefined1 *)(param_1[0x15] + 3) = 0x20;
    lVar8 = param_1[0x15];
    param_1[1] = lVar8;
    *param_1 = lVar8;
    param_1[2] = (ulonglong)*(uint *)(param_1 + 0x16) + lVar8;
    iVar6 = local_4c;
  }
LAB_1801fd9a3:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar6;
}

