/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400813c0 */

int FUN_1400813c0(longlong *param_1,uint *param_2,uint *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  local_4c = 0;
  if (param_1 == (longlong *)0x0) {
    iVar4 = 0x21;
  }
  else {
    iVar4 = 6;
    if (param_3 != (uint *)0x0 && param_2 != (uint *)0x0) {
      if ((byte)(*(char *)((longlong)param_2 + 0x1a) - 1U) < 7) {
        if ((param_3[2] == 0) && ((int)param_2[2] < 0)) {
          bVar1 = 1;
        }
        else {
          bVar1 = (byte)(param_3[2] >> 0x1f);
        }
        lVar8 = *param_1;
        uVar2 = param_2[1];
        FUN_1400817e3(param_1,(undefined8 *)param_3);
        *(undefined1 *)((longlong)param_3 + 0x1a) = 2;
        uVar6 = *param_2;
        *param_3 = uVar6;
        param_3[1] = param_2[1];
        uVar7 = uVar2;
        if ((param_4 != 0) && (iVar4 = (int)uVar2 % param_4, iVar4 != 0)) {
          uVar7 = uVar2 - (iVar4 + param_4);
          if (0 < param_4) {
            uVar7 = (uVar2 + param_4) - iVar4;
          }
        }
        pbVar3 = (byte *)FUN_14001f231(lVar8,uVar7,0,uVar6,0,&local_4c);
        *(byte **)(param_3 + 4) = pbVar3;
        iVar4 = local_4c;
        if (local_4c != 0) goto switchD_140081517_default;
        uVar2 = -uVar7;
        if (bVar1 == 0) {
          uVar2 = uVar7;
        }
        param_3[2] = uVar2;
      }
      else {
        local_4c = 6;
        pbVar3 = *(byte **)(param_3 + 4);
      }
      pbVar9 = *(byte **)(param_2 + 4);
      if ((int)param_2[2] < 0) {
        pbVar9 = pbVar9 + -(longlong)(int)((*param_2 - 1) * param_2[2]);
      }
      uVar2 = param_3[2];
      if ((int)uVar2 < 0) {
        pbVar3 = pbVar3 + -(longlong)(int)((*param_3 - 1) * uVar2);
      }
      iVar4 = local_4c;
      switch(*(undefined1 *)((longlong)param_2 + 0x1a)) {
      case 1:
        *(undefined2 *)(param_3 + 6) = 2;
        for (uVar2 = *param_2; uVar2 != 0; uVar2 = uVar2 - 1) {
          uVar6 = param_2[1];
          uVar7 = uVar6 >> 3;
          pbVar10 = pbVar3;
          pbVar5 = pbVar9;
          if (uVar7 != 0) {
            do {
              bVar1 = *pbVar5;
              *pbVar10 = bVar1 >> 7;
              pbVar10[1] = bVar1 >> 6 & 1;
              pbVar10[2] = bVar1 >> 5 & 1;
              pbVar10[3] = bVar1 >> 4 & 1;
              pbVar10[4] = bVar1 >> 3 & 1;
              pbVar10[5] = bVar1 >> 2 & 1;
              pbVar10[6] = bVar1 >> 1 & 1;
              pbVar10[7] = bVar1 & 1;
              pbVar10 = pbVar10 + 8;
              pbVar5 = pbVar5 + 1;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            uVar6 = param_2[1];
          }
          if ((uVar6 & 7) != 0) {
            bVar1 = *pbVar5;
            lVar8 = 0;
            do {
              pbVar10[lVar8] = bVar1 >> 7;
              bVar1 = bVar1 * '\x02';
              lVar8 = lVar8 + 1;
            } while ((uVar6 & 7) != (uint)lVar8);
          }
          pbVar9 = pbVar9 + (int)param_2[2];
          pbVar3 = pbVar3 + (int)param_3[2];
        }
        break;
      case 2:
      case 5:
      case 6:
        uVar2 = param_2[1];
        *(undefined2 *)(param_3 + 6) = 0x100;
        for (uVar6 = *param_2; iVar4 = local_4c, uVar6 != 0; uVar6 = uVar6 - 1) {
          FUN_1400b3550((undefined8 *)pbVar3,(undefined8 *)pbVar9,(ulonglong)uVar2);
          pbVar9 = pbVar9 + (int)param_2[2];
          pbVar3 = pbVar3 + (int)param_3[2];
        }
        break;
      case 3:
        *(undefined2 *)(param_3 + 6) = 4;
        for (uVar2 = *param_2; uVar2 != 0; uVar2 = uVar2 - 1) {
          uVar6 = param_2[1];
          uVar7 = uVar6 >> 2;
          pbVar10 = pbVar3;
          pbVar5 = pbVar9;
          if (uVar7 != 0) {
            do {
              bVar1 = *pbVar5;
              *pbVar10 = bVar1 >> 6;
              pbVar10[1] = bVar1 >> 4 & 3;
              pbVar10[2] = bVar1 >> 2 & 3;
              pbVar10[3] = bVar1 & 3;
              pbVar5 = pbVar5 + 1;
              pbVar10 = pbVar10 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            uVar6 = param_2[1];
          }
          if ((uVar6 & 3) != 0) {
            bVar1 = *pbVar5;
            lVar8 = 0;
            do {
              pbVar10[lVar8] = bVar1 >> 6;
              bVar1 = bVar1 << 2;
              lVar8 = lVar8 + 1;
            } while ((uVar6 & 3) != (uint)lVar8);
          }
          pbVar9 = pbVar9 + (int)param_2[2];
          pbVar3 = pbVar3 + (int)param_3[2];
        }
        break;
      case 4:
        *(undefined2 *)(param_3 + 6) = 0x10;
        for (uVar2 = *param_2; uVar2 != 0; uVar2 = uVar2 - 1) {
          uVar6 = param_2[1];
          uVar7 = uVar6 >> 1;
          pbVar10 = pbVar3;
          pbVar5 = pbVar9;
          if (uVar7 != 0) {
            do {
              bVar1 = *pbVar5;
              *pbVar10 = bVar1 >> 4;
              pbVar10[1] = bVar1 & 0xf;
              pbVar5 = pbVar5 + 1;
              pbVar10 = pbVar10 + 2;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            uVar6 = param_2[1];
          }
          if ((uVar6 & 1) != 0) {
            *pbVar10 = *pbVar5 >> 4;
          }
          pbVar9 = pbVar9 + (int)param_2[2];
          pbVar3 = pbVar3 + (int)param_3[2];
        }
        break;
      case 7:
        *(undefined2 *)(param_3 + 6) = 0x100;
        for (uVar6 = *param_2; iVar4 = local_4c, uVar6 != 0; uVar6 = uVar6 - 1) {
          uVar7 = param_2[1];
          if (uVar7 != 0) {
            lVar8 = 0;
            pbVar10 = pbVar9;
            do {
              bVar1 = FUN_140081829(pbVar10);
              pbVar3[lVar8] = bVar1;
              pbVar10 = pbVar10 + 4;
              lVar8 = lVar8 + 1;
            } while (uVar7 != (uint)lVar8);
            uVar2 = param_3[2];
          }
          pbVar9 = pbVar9 + (int)param_2[2];
          pbVar3 = pbVar3 + (int)uVar2;
        }
      }
    }
  }
switchD_140081517_default:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return iVar4;
}

