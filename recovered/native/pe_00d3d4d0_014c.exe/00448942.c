/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00448942 */

int __fastcall FUN_00448942(int *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar12;
  uint uVar11;
  uint uVar13;
  uint *local_2c;
  int local_28;
  int local_24;
  ushort local_1e;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_2c;
  local_24 = param_1[4];
  piVar3 = (int *)param_1[0x12];
  local_18 = 0;
  if ((char)param_1[0x17] == '\0') {
    pcVar7 = (char *)param_1[0x13];
    pcVar1 = pcVar7 + param_1[0x14];
    *param_1 = (int)pcVar7;
    param_1[2] = (int)pcVar1;
    iVar6 = 3;
    iVar4 = param_2;
    if (param_1[0x14] != 0) {
      do {
        local_28 = iVar4;
        if ((((pcVar7 + 9 < pcVar1 && *pcVar7 == 'e') && (pcVar7[1] == 'e')) && (pcVar7[2] == 'x'))
           && ((pcVar7[3] == 'e' && (pcVar7[4] == 'c')))) {
          param_1[2] = param_1[0x13] + param_1[0x14];
          (*(code *)param_1[8])(param_1);
          puVar10 = (uint *)*param_1;
          local_2c = (uint *)param_1[2];
          uVar13 = (int)local_2c - (int)puVar10;
          puVar8 = FUN_00485b20(puVar10,10,uVar13);
          if (puVar8 == (uint *)0x0) {
            bVar5 = true;
          }
          else {
            puVar9 = FUN_00485b20(puVar10,0xd,uVar13);
            bVar5 = puVar9 < puVar8;
          }
          puVar8 = puVar10;
          if (puVar10 < local_2c) goto LAB_00448b97;
          break;
        }
        (*(code *)param_1[8])(param_1);
        if (param_1[3] != 0) break;
        (*(code *)param_1[7])(param_1);
        pcVar7 = (char *)*param_1;
        iVar4 = local_28;
      } while (pcVar7 < pcVar1);
    }
  }
  else {
    local_28 = param_2;
    local_2c = (uint *)FUN_00420b00((int)piVar3);
    param_1[0x16] = 0;
    while (iVar6 = FUN_00448e31(piVar3,&local_1e,&local_1c), iVar6 == 0) {
      if (local_1e != 0x8002) {
        if (param_1[0x16] == 0) {
          iVar6 = 3;
        }
        else {
          iVar6 = FUN_00420696((int)piVar3,(uint)local_2c);
          local_18 = iVar6;
          if (iVar6 == 0) {
            iVar6 = FUN_0041e773(local_24,param_1[0x16],&local_18);
            param_1[0x15] = iVar6;
            iVar6 = local_18;
            if (local_18 == 0) {
              param_1[0x16] = 0;
              goto LAB_00448aa0;
            }
          }
        }
        break;
      }
      param_1[0x16] = param_1[0x16] + local_1c;
      iVar6 = FUN_004206ea((int)piVar3,local_1c);
      local_18 = iVar6;
      if (iVar6 != 0) break;
    }
  }
LAB_00448a51:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_2c);
  }
  return iVar6;
  while( true ) {
    puVar8 = (uint *)((int)puVar8 + 1);
    puVar10 = (uint *)((int)puVar10 + 1);
    if (puVar8 == local_2c) break;
LAB_00448b97:
    cVar2 = (char)*puVar8;
    if (((cVar2 != '\t') && (cVar2 != ' ')) && ((cVar2 != '\n' && (!(bool)(cVar2 == '\r' & bVar5))))
       ) {
      puVar9 = (uint *)param_1[0x13];
      uVar13 = (int)puVar9 + (param_1[0x14] - (int)puVar10);
      if (*(char *)((int)param_1 + 0x5d) == '\0') {
        *(undefined1 *)((int)param_1 + 0x5e) = 1;
        param_1[0x15] = (int)puVar9;
        param_1[0x16] = uVar13;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
      }
      else {
        puVar9 = (uint *)FUN_0041e773(local_24,uVar13 + 1,&local_18);
        param_1[0x15] = (int)puVar9;
        iVar6 = local_18;
        if (local_18 != 0) break;
        param_1[0x16] = uVar13;
      }
      if (((((uint *)((int)puVar8 + 3U) < local_2c) &&
           (((bVar12 = (char)*puVar8 - 0x30, bVar12 < 10 ||
             (uVar11 = CONCAT11(bVar12,(char)*puVar8) & 0xff, uVar11 - 0x61 < 6)) ||
            (uVar11 - 0x41 < 6)))) &&
          (((bVar12 = *(char *)((int)puVar8 + 1) - 0x30, bVar12 < 10 ||
            (uVar11 = CONCAT11(bVar12,*(char *)((int)puVar8 + 1)) & 0xff, uVar11 - 0x61 < 6)) ||
           (uVar11 - 0x41 < 6)))) &&
         ((((bVar12 = *(char *)((int)puVar8 + 2) - 0x30, bVar12 < 10 ||
            (uVar11 = CONCAT11(bVar12,*(char *)((int)puVar8 + 2)) & 0xff, uVar11 - 0x61 < 6)) ||
           (uVar11 - 0x41 < 6)) &&
          (((bVar12 = *(byte *)((int)puVar8 + 3U), (byte)(bVar12 - 0x30) < 10 || (bVar12 - 0x61 < 6)
            ) || (bVar12 - 0x41 < 6)))))) {
        *param_1 = (int)puVar8;
        (**(code **)(*(int *)(local_28 + 4) + 0x18))(param_1,puVar9,uVar13,&local_1c,0);
        param_1[0x16] = local_1c;
        *(undefined1 *)(param_1[0x15] + local_1c) = 0;
      }
      else {
        FUN_004878c0(puVar9,puVar8,uVar13);
      }
      goto LAB_00448af5;
    }
  }
  goto LAB_00448a51;
LAB_00448aa0:
  local_18 = FUN_00448e31(piVar3,&local_1e,&local_1c);
  uVar13 = local_1c;
  if ((local_18 != 0) || (local_1e != 0x8002)) goto LAB_00448aed;
  iVar6 = FUN_004206d1(piVar3,(uint *)(param_1[0x15] + param_1[0x16]),local_1c);
  local_18 = iVar6;
  if (iVar6 != 0) goto LAB_00448a51;
  param_1[0x16] = param_1[0x16] + uVar13;
  local_18 = 0;
  goto LAB_00448aa0;
LAB_00448aed:
  local_18 = 0;
LAB_00448af5:
  (**(code **)(local_28 + 0x10))(param_1[0x15],param_1[0x16],0xd971);
  iVar6 = 3;
  if (3 < (uint)param_1[0x16]) {
    *(undefined1 *)param_1[0x15] = 0x20;
    *(undefined1 *)(param_1[0x15] + 1) = 0x20;
    *(undefined1 *)(param_1[0x15] + 2) = 0x20;
    *(undefined1 *)(param_1[0x15] + 3) = 0x20;
    iVar6 = param_1[0x15];
    param_1[1] = iVar6;
    *param_1 = iVar6;
    param_1[2] = iVar6 + param_1[0x16];
    iVar6 = local_18;
  }
  goto LAB_00448a51;
}

