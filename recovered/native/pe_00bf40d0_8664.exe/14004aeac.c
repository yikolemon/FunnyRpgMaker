/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004aeac */

int FUN_14004aeac(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  ushort local_52;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  lVar8 = param_1[4];
  plVar2 = (longlong *)param_1[0x12];
  local_4c = 0;
  if (*(char *)((longlong)param_1 + 0xb4) == '\0') {
    pcVar10 = (char *)param_1[0x13];
    pcVar9 = pcVar10 + *(uint *)(param_1 + 0x14);
    *param_1 = (longlong)pcVar10;
    param_1[2] = (longlong)pcVar9;
    iVar6 = 3;
    if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
      do {
        if ((((pcVar10 + 9 < pcVar9 && *pcVar10 == 'e') && (pcVar10[1] == 'e')) &&
            (pcVar10[2] == 'x')) && ((pcVar10[3] == 'e' && (pcVar10[4] == 'c')))) {
          param_1[2] = (ulonglong)*(uint *)(param_1 + 0x14) + param_1[0x13];
          (*(code *)param_1[8])(param_1);
          pbVar15 = (byte *)*param_1;
          pbVar3 = (byte *)param_1[2];
          pcVar9 = FUN_1400b33b0((char *)pbVar15,10,(char *)(pbVar3 + -(longlong)pbVar15));
          if (pcVar9 == (char *)0x0) {
            bVar4 = true;
          }
          else {
            pcVar10 = FUN_1400b33b0((char *)pbVar15,0xd,(char *)(pbVar3 + -(longlong)pbVar15));
            bVar4 = pcVar10 < pcVar9;
          }
          if (pbVar15 < pbVar3) {
            uVar13 = (ulonglong)pbVar15 & 0xffffffff;
            goto LAB_14004b19d;
          }
          break;
        }
        (*(code *)param_1[8])(param_1);
        if ((int)param_1[3] != 0) break;
        (*(code *)param_1[7])(param_1);
        pcVar10 = (char *)*param_1;
      } while (pcVar10 < pcVar9);
    }
  }
  else {
    uVar5 = FUN_140020f72((longlong)plVar2);
    *(undefined4 *)(param_1 + 0x16) = 0;
    while (iVar6 = FUN_14004b4c0(plVar2,&local_52,&local_50), iVar6 == 0) {
      if (local_52 != 0x8002) {
        if ((int)param_1[0x16] == 0) {
          iVar6 = 3;
        }
        else {
          uVar7 = FUN_140020a41((longlong)plVar2,uVar5);
          iVar6 = (int)uVar7;
          local_4c = iVar6;
          if (iVar6 == 0) {
            lVar8 = FUN_14001e961(lVar8,(int)param_1[0x16],&local_4c);
            param_1[0x15] = lVar8;
            iVar6 = local_4c;
            if (local_4c == 0) {
              *(undefined4 *)(param_1 + 0x16) = 0;
              iVar6 = FUN_14004b4c0(plVar2,&local_52,&local_50);
              if ((iVar6 != 0) || (local_52 != 0x8002)) goto LAB_14004b0bf;
              goto LAB_14004b06d;
            }
          }
        }
        break;
      }
      *(uint *)(param_1 + 0x16) = (int)param_1[0x16] + local_50;
      uVar7 = FUN_140020a93((longlong)plVar2,local_50);
      iVar6 = (int)uVar7;
      local_4c = iVar6;
      if (iVar6 != 0) break;
    }
  }
  goto LAB_14004afdd;
  while( true ) {
    pbVar15 = pbVar15 + 1;
    uVar13 = (ulonglong)(iVar12 + 1);
    if (pbVar15 == pbVar3) break;
LAB_14004b19d:
    bVar1 = *pbVar15;
    iVar12 = (int)uVar13;
    if (((bVar1 != 9) && (bVar1 != 0x20)) && ((bVar1 != 10 && (!(bool)(bVar1 == 0xd & bVar4))))) {
      puVar11 = (undefined8 *)param_1[0x13];
      uVar5 = ((int)puVar11 + (int)param_1[0x14]) - iVar12;
      if (*(char *)((longlong)param_1 + 0xb5) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
        param_1[0x15] = (longlong)puVar11;
        *(uint *)(param_1 + 0x16) = uVar5;
        param_1[0x13] = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else {
        puVar11 = (undefined8 *)
                  FUN_14001e961(lVar8,(((int)param_1[0x14] + (int)puVar11) - iVar12) + 1,&local_4c);
        param_1[0x15] = (longlong)puVar11;
        iVar6 = local_4c;
        if (local_4c != 0) break;
        *(uint *)(param_1 + 0x16) = uVar5;
      }
      if ((((pbVar15 + 3 < pbVar3) &&
           (((byte)(*pbVar15 - 0x30) < 10 ||
            ((uVar14 = *pbVar15 - 0x41, uVar14 < 0x26 &&
             ((0x3f0000003fU >> ((ulonglong)uVar14 & 0x3f) & 1) != 0)))))) &&
          (((byte)(pbVar15[1] - 0x30) < 10 ||
           ((uVar14 = pbVar15[1] - 0x41, uVar14 < 0x26 &&
            ((0x3f0000003fU >> ((ulonglong)uVar14 & 0x3f) & 1) != 0)))))) &&
         ((((byte)(pbVar15[2] - 0x30) < 10 ||
           ((uVar14 = pbVar15[2] - 0x41, uVar14 < 0x26 &&
            ((0x3f0000003fU >> ((ulonglong)uVar14 & 0x3f) & 1) != 0)))) &&
          ((bVar1 = pbVar15[3], (byte)(bVar1 - 0x30) < 10 ||
           ((uVar14 = bVar1 - 0x41, uVar14 < 0x26 &&
            ((0x3f0000003fU >> ((ulonglong)uVar14 & 0x3f) & 1) != 0)))))))) {
        *param_1 = (longlong)pbVar15;
        local_68 = 0;
        (**(code **)(*(longlong *)(param_2 + 8) + 0x30))(param_1,puVar11,uVar5,&local_50);
        *(uint *)(param_1 + 0x16) = local_50;
        *(undefined1 *)(param_1[0x15] + (ulonglong)local_50) = 0;
      }
      else {
        FUN_1400b3550(puVar11,(undefined8 *)pbVar15,(ulonglong)uVar5);
      }
      goto LAB_14004b0c7;
    }
  }
  goto LAB_14004afdd;
  while( true ) {
    *(uint *)(param_1 + 0x16) = (int)param_1[0x16] + uVar5;
    iVar6 = FUN_14004b4c0(plVar2,&local_52,&local_50);
    if ((iVar6 != 0) || (local_52 != 0x8002)) break;
LAB_14004b06d:
    uVar5 = local_50;
    local_4c = 0;
    iVar6 = FUN_140020a85(plVar2,(undefined8 *)
                                 ((ulonglong)*(uint *)(param_1 + 0x16) + param_1[0x15]),local_50);
    local_4c = iVar6;
    if (iVar6 != 0) goto LAB_14004afdd;
  }
LAB_14004b0bf:
  local_4c = 0;
LAB_14004b0c7:
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
LAB_14004afdd:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar6;
}

