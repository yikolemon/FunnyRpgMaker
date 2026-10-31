/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223228 */

int FUN_10223228(undefined4 *param_1,uint *param_2,uint *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  local_18 = 0;
  pbVar6 = local_20;
  uVar9 = local_1c;
  if (param_1 == (undefined4 *)0x0) {
    iVar7 = 0x21;
  }
  else {
    iVar7 = 6;
    if (param_3 != (uint *)0x0 && param_2 != (uint *)0x0) {
      if ((byte)(*(char *)((int)param_2 + 0x12) - 1U) < 7) {
        if ((param_3[2] == 0) && ((int)param_2[2] < 0)) {
          local_1c = 1;
        }
        else {
          local_1c = param_3[2] >> 0x1f;
        }
        local_20 = (byte *)*param_1;
        uVar9 = param_2[1];
        FUN_102235e6(param_1,param_3);
        *(undefined1 *)((int)param_3 + 0x12) = 2;
        uVar4 = *param_2;
        *param_3 = uVar4;
        param_3[1] = param_2[1];
        uVar10 = uVar9;
        if ((param_4 != 0) && (iVar7 = (int)uVar9 % param_4, iVar7 != 0)) {
          uVar10 = uVar9 - (iVar7 + param_4);
          if (0 < param_4) {
            uVar10 = (uVar9 + param_4) - iVar7;
          }
        }
        pbVar3 = (byte *)FUN_101c2a50(local_20,uVar10,0,uVar4,0,&local_18);
        param_3[3] = (uint)pbVar3;
        iVar7 = local_18;
        pbVar6 = local_20;
        uVar9 = local_1c;
        if (local_18 != 0) goto LAB_102235bc;
        uVar9 = -uVar10;
        if ((char)local_1c == '\0') {
          uVar9 = uVar10;
        }
        param_3[2] = uVar9;
      }
      else {
        local_18 = 6;
        pbVar3 = (byte *)param_3[3];
      }
      pbVar11 = (byte *)param_2[3];
      if ((int)param_2[2] < 0) {
        pbVar11 = pbVar11 + (1 - *param_2) * param_2[2];
      }
      uVar4 = param_3[2];
      if ((int)uVar4 < 0) {
        pbVar3 = pbVar3 + (1 - *param_3) * uVar4;
      }
      iVar7 = local_18;
      pbVar6 = pbVar11;
      uVar9 = local_1c;
      switch(*(undefined1 *)((int)param_2 + 0x12)) {
      case 1:
        *(undefined2 *)(param_3 + 4) = 2;
        uVar9 = *param_2;
        while (pbVar5 = pbVar11, uVar4 = uVar9, uVar9 = local_1c, uVar4 != 0) {
          uVar9 = param_2[1];
          uVar10 = uVar9 >> 3;
          pbVar6 = pbVar3;
          pbVar11 = pbVar5;
          if (uVar10 != 0) {
            do {
              bVar1 = *pbVar11;
              *pbVar6 = bVar1 >> 7;
              uVar2 = CONCAT11(bVar1 >> 6,bVar1) & 0x1ff;
              pbVar6[1] = (byte)(uVar2 >> 8);
              bVar1 = (byte)uVar2;
              uVar2 = CONCAT11(bVar1 >> 5,bVar1) & 0x1ff;
              pbVar6[2] = (byte)(uVar2 >> 8);
              bVar1 = (byte)uVar2;
              uVar2 = CONCAT11(bVar1 >> 4,bVar1) & 0x1ff;
              pbVar6[3] = (byte)(uVar2 >> 8);
              bVar1 = (byte)uVar2;
              uVar2 = CONCAT11(bVar1 >> 3,bVar1) & 0x1ff;
              pbVar6[4] = (byte)(uVar2 >> 8);
              bVar1 = (byte)uVar2;
              uVar2 = CONCAT11(bVar1 >> 2,bVar1) & 0x1ff;
              pbVar6[5] = (byte)(uVar2 >> 8);
              bVar1 = (byte)uVar2;
              uVar2 = CONCAT11(bVar1 >> 1,bVar1) & 0x1ff;
              pbVar6[6] = (byte)(uVar2 >> 8);
              pbVar6[7] = (byte)uVar2 & 1;
              pbVar6 = pbVar6 + 8;
              pbVar11 = pbVar11 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
            uVar9 = param_2[1];
          }
          if ((uVar9 & 7) != 0) {
            bVar1 = *pbVar11;
            uVar10 = 0;
            do {
              pbVar6[uVar10] = bVar1 >> 7;
              bVar1 = bVar1 * '\x02';
              uVar10 = uVar10 + 1;
            } while ((uVar9 & 7) != uVar10);
          }
          pbVar3 = pbVar3 + param_3[2];
          pbVar11 = pbVar5 + param_2[2];
          pbVar6 = pbVar5;
          local_1c = uVar4;
          uVar9 = uVar4 - 1;
        }
        break;
      case 2:
      case 5:
      case 6:
        uVar4 = param_2[1];
        *(undefined2 *)(param_3 + 4) = 0x100;
        local_20 = pbVar11;
        for (uVar10 = *param_2; iVar7 = local_18, pbVar6 = local_20, uVar9 = local_1c, uVar10 != 0;
            uVar10 = uVar10 - 1) {
          FUN_1025b2d0(pbVar3,pbVar11,uVar4);
          pbVar11 = pbVar11 + param_2[2];
          pbVar3 = pbVar3 + param_3[2];
        }
        break;
      case 3:
        *(undefined2 *)(param_3 + 4) = 4;
        for (uVar4 = *param_2; pbVar5 = pbVar11, uVar4 != 0; uVar4 = uVar4 - 1) {
          uVar10 = param_2[1];
          uVar12 = uVar10 >> 2;
          pbVar6 = pbVar3;
          pbVar11 = pbVar5;
          if (uVar12 != 0) {
            do {
              bVar1 = *pbVar11;
              *pbVar6 = bVar1 >> 6;
              uVar2 = CONCAT11(bVar1 >> 4,bVar1) & 0x3ff;
              pbVar6[1] = (byte)(uVar2 >> 8);
              bVar1 = (byte)uVar2;
              uVar2 = CONCAT11(bVar1 >> 2,bVar1) & 0x3ff;
              pbVar6[2] = (byte)(uVar2 >> 8);
              pbVar6[3] = (byte)uVar2 & 3;
              pbVar11 = pbVar11 + 1;
              pbVar6 = pbVar6 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
            uVar10 = param_2[1];
          }
          if ((uVar10 & 3) != 0) {
            bVar1 = *pbVar11;
            uVar12 = 0;
            do {
              pbVar6[uVar12] = bVar1 >> 6;
              bVar1 = bVar1 << 2;
              uVar12 = uVar12 + 1;
            } while ((uVar10 & 3) != uVar12);
          }
          pbVar3 = pbVar3 + param_3[2];
          pbVar11 = pbVar5 + param_2[2];
          pbVar6 = pbVar5;
        }
        break;
      case 4:
        *(undefined2 *)(param_3 + 4) = 0x10;
        for (uVar4 = *param_2; uVar4 != 0; uVar4 = uVar4 - 1) {
          uVar10 = param_2[1];
          uVar12 = uVar10 >> 1;
          pbVar5 = pbVar3;
          pbVar8 = pbVar11;
          if (uVar12 != 0) {
            do {
              bVar1 = *pbVar8;
              *pbVar5 = bVar1 >> 4;
              pbVar5[1] = bVar1 & 0xf;
              pbVar8 = pbVar8 + 1;
              pbVar5 = pbVar5 + 2;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
            uVar10 = param_2[1];
          }
          if ((uVar10 & 1) != 0) {
            *pbVar5 = *pbVar8 >> 4;
          }
          pbVar11 = pbVar11 + param_2[2];
          pbVar3 = pbVar3 + param_3[2];
        }
        break;
      case 7:
        *(undefined2 *)(param_3 + 4) = 0x100;
        uVar10 = *param_2;
        while (local_20 = pbVar11, local_1c = uVar10, iVar7 = local_18, local_1c != 0) {
          uVar10 = param_2[1];
          uVar12 = local_1c;
          if (uVar10 != 0) {
            uVar9 = 0;
            do {
              bVar1 = FUN_102238c3();
              pbVar3[uVar9] = bVar1;
              uVar9 = uVar9 + 1;
            } while (uVar10 != uVar9);
            uVar4 = param_3[2];
            uVar12 = local_1c;
            uVar9 = local_1c;
          }
          local_1c = uVar9;
          pbVar3 = pbVar3 + uVar4;
          pbVar11 = local_20 + param_2[2];
          pbVar6 = local_20;
          uVar9 = local_1c;
          uVar10 = uVar12 - 1;
        }
      }
    }
  }
LAB_102235bc:
  local_1c = uVar9;
  local_20 = pbVar6;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

