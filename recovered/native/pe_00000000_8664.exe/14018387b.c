/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018387b */

int FUN_14018387b(undefined8 *param_1,int *param_2,int *param_3,int param_4)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  local_4c = 0;
  if (param_1 == (undefined8 *)0x0) {
    iVar3 = 0x21;
  }
  else {
    iVar3 = 6;
    if (param_3 != (int *)0x0 && param_2 != (int *)0x0) {
      if ((byte)(*(char *)((longlong)param_2 + 0x1a) - 1U) < 7) {
        if ((param_3[2] == 0) && (param_2[2] < 0)) {
          bVar2 = 1;
        }
        else {
          bVar2 = (byte)((uint)param_3[2] >> 0x1f);
        }
        uVar1 = *param_1;
        iVar3 = param_2[1];
        FUN_140183c9e(param_1,param_3);
        *(undefined1 *)((longlong)param_3 + 0x1a) = 2;
        *param_3 = *param_2;
        param_3[1] = param_2[1];
        iVar4 = iVar3;
        if ((param_4 != 0) && (iVar6 = iVar3 % param_4, iVar6 != 0)) {
          iVar4 = iVar3 - (iVar6 + param_4);
          if (0 < param_4) {
            iVar4 = (iVar3 + param_4) - iVar6;
          }
        }
        local_60 = &local_4c;
        local_68 = 0;
        pbVar5 = (byte *)FUN_14012b8aa(uVar1,iVar4,0);
        *(byte **)(param_3 + 4) = pbVar5;
        iVar3 = local_4c;
        if (local_4c != 0) goto switchD_1401839d2_default;
        iVar3 = -iVar4;
        if (bVar2 == 0) {
          iVar3 = iVar4;
        }
        param_3[2] = iVar3;
      }
      else {
        local_4c = 6;
        pbVar5 = *(byte **)(param_3 + 4);
      }
      pbVar11 = *(byte **)(param_2 + 4);
      if (param_2[2] < 0) {
        pbVar11 = pbVar11 + -(longlong)((*param_2 + -1) * param_2[2]);
      }
      iVar4 = param_3[2];
      if (iVar4 < 0) {
        pbVar5 = pbVar5 + -(longlong)((*param_3 + -1) * iVar4);
      }
      iVar3 = local_4c;
      switch(*(undefined1 *)((longlong)param_2 + 0x1a)) {
      case 1:
        *(undefined2 *)(param_3 + 6) = 2;
        for (iVar4 = *param_2; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar9 = param_2[1];
          uVar8 = uVar9 >> 3;
          pbVar12 = pbVar5;
          pbVar7 = pbVar11;
          if (uVar8 != 0) {
            do {
              bVar2 = *pbVar7;
              *pbVar12 = bVar2 >> 7;
              pbVar12[1] = bVar2 >> 6 & 1;
              pbVar12[2] = bVar2 >> 5 & 1;
              pbVar12[3] = bVar2 >> 4 & 1;
              pbVar12[4] = bVar2 >> 3 & 1;
              pbVar12[5] = bVar2 >> 2 & 1;
              pbVar12[6] = bVar2 >> 1 & 1;
              pbVar12[7] = bVar2 & 1;
              pbVar12 = pbVar12 + 8;
              pbVar7 = pbVar7 + 1;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            uVar9 = param_2[1];
          }
          if ((uVar9 & 7) != 0) {
            bVar2 = *pbVar7;
            lVar10 = 0;
            do {
              pbVar12[lVar10] = bVar2 >> 7;
              bVar2 = bVar2 * '\x02';
              lVar10 = lVar10 + 1;
            } while ((uVar9 & 7) != (uint)lVar10);
          }
          pbVar11 = pbVar11 + param_2[2];
          pbVar5 = pbVar5 + param_3[2];
        }
        break;
      case 2:
      case 5:
      case 6:
        iVar4 = param_2[1];
        *(undefined2 *)(param_3 + 6) = 0x100;
        for (iVar6 = *param_2; iVar3 = local_4c, iVar6 != 0; iVar6 = iVar6 + -1) {
          FUN_1401c5180(pbVar5,pbVar11,iVar4);
          pbVar11 = pbVar11 + param_2[2];
          pbVar5 = pbVar5 + param_3[2];
        }
        break;
      case 3:
        *(undefined2 *)(param_3 + 6) = 4;
        for (iVar4 = *param_2; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar9 = param_2[1];
          uVar8 = uVar9 >> 2;
          pbVar12 = pbVar5;
          pbVar7 = pbVar11;
          if (uVar8 != 0) {
            do {
              bVar2 = *pbVar7;
              *pbVar12 = bVar2 >> 6;
              pbVar12[1] = bVar2 >> 4 & 3;
              pbVar12[2] = bVar2 >> 2 & 3;
              pbVar12[3] = bVar2 & 3;
              pbVar7 = pbVar7 + 1;
              pbVar12 = pbVar12 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            uVar9 = param_2[1];
          }
          if ((uVar9 & 3) != 0) {
            bVar2 = *pbVar7;
            lVar10 = 0;
            do {
              pbVar12[lVar10] = bVar2 >> 6;
              bVar2 = bVar2 << 2;
              lVar10 = lVar10 + 1;
            } while ((uVar9 & 3) != (uint)lVar10);
          }
          pbVar11 = pbVar11 + param_2[2];
          pbVar5 = pbVar5 + param_3[2];
        }
        break;
      case 4:
        *(undefined2 *)(param_3 + 6) = 0x10;
        for (iVar4 = *param_2; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar9 = param_2[1];
          uVar8 = uVar9 >> 1;
          pbVar12 = pbVar5;
          pbVar7 = pbVar11;
          if (uVar8 != 0) {
            do {
              bVar2 = *pbVar7;
              *pbVar12 = bVar2 >> 4;
              pbVar12[1] = bVar2 & 0xf;
              pbVar7 = pbVar7 + 1;
              pbVar12 = pbVar12 + 2;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            uVar9 = param_2[1];
          }
          if ((uVar9 & 1) != 0) {
            *pbVar12 = *pbVar7 >> 4;
          }
          pbVar11 = pbVar11 + param_2[2];
          pbVar5 = pbVar5 + param_3[2];
        }
        break;
      case 7:
        *(undefined2 *)(param_3 + 6) = 0x100;
        for (iVar6 = *param_2; iVar3 = local_4c, iVar6 != 0; iVar6 = iVar6 + -1) {
          iVar3 = param_2[1];
          if (iVar3 != 0) {
            lVar10 = 0;
            pbVar12 = pbVar11;
            do {
              bVar2 = FUN_140183fa1(pbVar12);
              pbVar5[lVar10] = bVar2;
              pbVar12 = pbVar12 + 4;
              lVar10 = lVar10 + 1;
            } while (iVar3 != (int)lVar10);
            iVar4 = param_3[2];
          }
          pbVar11 = pbVar11 + param_2[2];
          pbVar5 = pbVar5 + iVar4;
        }
      }
    }
  }
switchD_1401839d2_default:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar3;
}

