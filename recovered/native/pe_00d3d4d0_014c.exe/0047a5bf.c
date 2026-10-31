/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047a5bf */

int __cdecl FUN_0047a5bf(int *param_1,uint *param_2,uint *param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  local_18 = 0;
  uVar10 = local_1c;
  if (param_1 == (int *)0x0) {
    iVar8 = 0x21;
  }
  else {
    iVar8 = 6;
    if (param_3 != (uint *)0x0 && param_2 != (uint *)0x0) {
      if ((byte)(*(char *)((int)param_2 + 0x12) - 1U) < 7) {
        if ((param_3[2] == 0) && ((int)param_2[2] < 0)) {
          local_1c = 1;
        }
        else {
          local_1c = param_3[2] >> 0x1f;
        }
        local_20 = (uint *)*param_1;
        uVar10 = param_2[1];
        FUN_0047a97d(param_1,param_3);
        *(undefined1 *)((int)param_3 + 0x12) = 2;
        uVar4 = *param_2;
        *param_3 = uVar4;
        param_3[1] = param_2[1];
        uVar11 = uVar10;
        if ((param_4 != 0) && (iVar8 = (int)uVar10 % param_4, iVar8 != 0)) {
          uVar11 = uVar10 - (iVar8 + param_4);
          if (0 < param_4) {
            uVar11 = (uVar10 + param_4) - iVar8;
          }
        }
        puVar3 = (uint *)FUN_0041efcd((int)local_20,uVar11,0,uVar4,0,&local_18);
        param_3[3] = (uint)puVar3;
        iVar8 = local_18;
        uVar10 = local_1c;
        if (local_18 != 0) goto LAB_0047a953;
        uVar10 = -uVar11;
        if ((char)local_1c == '\0') {
          uVar10 = uVar11;
        }
        param_3[2] = uVar10;
      }
      else {
        local_18 = 6;
        puVar3 = (uint *)param_3[3];
      }
      local_20 = (uint *)param_2[3];
      if ((int)param_2[2] < 0) {
        local_20 = (uint *)((int)local_20 + (1 - *param_2) * param_2[2]);
      }
      uVar4 = param_3[2];
      if ((int)uVar4 < 0) {
        puVar3 = (uint *)((int)puVar3 + (1 - *param_3) * uVar4);
      }
      iVar8 = local_18;
      uVar10 = local_1c;
      switch(*(undefined1 *)((int)param_2 + 0x12)) {
      case 1:
        *(undefined2 *)(param_3 + 4) = 2;
        uVar10 = *param_2;
        puVar6 = local_20;
        while (puVar5 = puVar6, uVar4 = uVar10, uVar10 = local_1c, uVar4 != 0) {
          uVar10 = param_2[1];
          uVar11 = uVar10 >> 3;
          puVar6 = puVar3;
          puVar9 = puVar5;
          if (uVar11 != 0) {
            do {
              bVar7 = (byte)*puVar9;
              *(byte *)puVar6 = bVar7 >> 7;
              uVar2 = CONCAT11(bVar7 >> 6,bVar7) & 0x1ff;
              *(char *)((int)puVar6 + 1) = (char)(uVar2 >> 8);
              bVar7 = (byte)uVar2;
              uVar2 = CONCAT11(bVar7 >> 5,bVar7) & 0x1ff;
              *(char *)((int)puVar6 + 2) = (char)(uVar2 >> 8);
              bVar7 = (byte)uVar2;
              uVar2 = CONCAT11(bVar7 >> 4,bVar7) & 0x1ff;
              *(char *)((int)puVar6 + 3) = (char)(uVar2 >> 8);
              bVar7 = (byte)uVar2;
              uVar2 = CONCAT11(bVar7 >> 3,bVar7) & 0x1ff;
              *(char *)(puVar6 + 1) = (char)(uVar2 >> 8);
              bVar7 = (byte)uVar2;
              uVar2 = CONCAT11(bVar7 >> 2,bVar7) & 0x1ff;
              *(char *)((int)puVar6 + 5) = (char)(uVar2 >> 8);
              bVar7 = (byte)uVar2;
              uVar2 = CONCAT11(bVar7 >> 1,bVar7) & 0x1ff;
              *(char *)((int)puVar6 + 6) = (char)(uVar2 >> 8);
              *(byte *)((int)puVar6 + 7) = (byte)uVar2 & 1;
              puVar6 = puVar6 + 2;
              puVar9 = (uint *)((int)puVar9 + 1);
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            uVar10 = param_2[1];
          }
          if ((uVar10 & 7) != 0) {
            bVar7 = (byte)*puVar9;
            uVar11 = 0;
            do {
              *(byte *)((int)puVar6 + uVar11) = bVar7 >> 7;
              bVar7 = bVar7 * '\x02';
              uVar11 = uVar11 + 1;
            } while ((uVar10 & 7) != uVar11);
          }
          puVar3 = (uint *)((int)puVar3 + param_3[2]);
          puVar6 = (uint *)((int)puVar5 + param_2[2]);
          local_20 = puVar5;
          local_1c = uVar4;
          uVar10 = uVar4 - 1;
        }
        break;
      case 2:
      case 5:
      case 6:
        uVar4 = param_2[1];
        *(undefined2 *)(param_3 + 4) = 0x100;
        puVar6 = local_20;
        for (uVar11 = *param_2; iVar8 = local_18, uVar10 = local_1c, uVar11 != 0;
            uVar11 = uVar11 - 1) {
          FUN_004878c0(puVar3,puVar6,uVar4);
          puVar6 = (uint *)((int)puVar6 + param_2[2]);
          puVar3 = (uint *)((int)puVar3 + param_3[2]);
        }
        break;
      case 3:
        *(undefined2 *)(param_3 + 4) = 4;
        puVar6 = local_20;
        for (uVar4 = *param_2; puVar5 = puVar6, uVar4 != 0; uVar4 = uVar4 - 1) {
          uVar11 = param_2[1];
          uVar12 = uVar11 >> 2;
          puVar6 = puVar3;
          puVar9 = puVar5;
          if (uVar12 != 0) {
            do {
              bVar7 = (byte)*puVar9;
              *(byte *)puVar6 = bVar7 >> 6;
              uVar2 = CONCAT11(bVar7 >> 4,bVar7) & 0x3ff;
              *(char *)((int)puVar6 + 1) = (char)(uVar2 >> 8);
              bVar7 = (byte)uVar2;
              uVar2 = CONCAT11(bVar7 >> 2,bVar7) & 0x3ff;
              *(char *)((int)puVar6 + 2) = (char)(uVar2 >> 8);
              *(byte *)((int)puVar6 + 3) = (byte)uVar2 & 3;
              puVar9 = (uint *)((int)puVar9 + 1);
              puVar6 = puVar6 + 1;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
            uVar11 = param_2[1];
          }
          if ((uVar11 & 3) != 0) {
            bVar7 = (byte)*puVar9;
            uVar12 = 0;
            do {
              *(byte *)((int)puVar6 + uVar12) = bVar7 >> 6;
              bVar7 = bVar7 << 2;
              uVar12 = uVar12 + 1;
            } while ((uVar11 & 3) != uVar12);
          }
          puVar3 = (uint *)((int)puVar3 + param_3[2]);
          puVar6 = (uint *)((int)puVar5 + param_2[2]);
          local_20 = puVar5;
        }
        break;
      case 4:
        *(undefined2 *)(param_3 + 4) = 0x10;
        puVar6 = local_20;
        for (uVar4 = *param_2; uVar4 != 0; uVar4 = uVar4 - 1) {
          uVar11 = param_2[1];
          uVar12 = uVar11 >> 1;
          puVar5 = puVar3;
          puVar9 = puVar6;
          if (uVar12 != 0) {
            do {
              uVar11 = *puVar9;
              *(byte *)puVar5 = (byte)uVar11 >> 4;
              *(byte *)((int)puVar5 + 1) = (byte)uVar11 & 0xf;
              puVar9 = (uint *)((int)puVar9 + 1);
              puVar5 = (uint *)((int)puVar5 + 2);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
            uVar11 = param_2[1];
          }
          if ((uVar11 & 1) != 0) {
            *(byte *)puVar5 = (byte)*puVar9 >> 4;
          }
          puVar6 = (uint *)((int)puVar6 + param_2[2]);
          puVar3 = (uint *)((int)puVar3 + param_3[2]);
        }
        break;
      case 7:
        *(undefined2 *)(param_3 + 4) = 0x100;
        uVar11 = *param_2;
        puVar6 = local_20;
        while (local_1c = uVar11, iVar8 = local_18, local_1c != 0) {
          uVar11 = param_2[1];
          uVar12 = local_1c;
          local_20 = puVar6;
          if (uVar11 != 0) {
            uVar10 = 0;
            do {
              cVar1 = FUN_0047a9bb((byte *)puVar6);
              *(char *)((int)puVar3 + uVar10) = cVar1;
              puVar6 = puVar6 + 1;
              uVar10 = uVar10 + 1;
            } while (uVar11 != uVar10);
            uVar4 = param_3[2];
            uVar12 = local_1c;
            uVar10 = local_1c;
          }
          local_1c = uVar10;
          puVar6 = (uint *)((int)local_20 + param_2[2]);
          puVar3 = (uint *)((int)puVar3 + uVar4);
          uVar10 = local_1c;
          uVar11 = uVar12 - 1;
        }
      }
    }
  }
LAB_0047a953:
  local_1c = uVar10;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_20)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_20);
}

