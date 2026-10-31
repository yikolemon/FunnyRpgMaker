/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00489989 */

void __fastcall FUN_00489989(__uint64 *param_1)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  __uint64 *p_Var5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  __uint64 *p_Var13;
  __uint64 *extraout_ECX;
  int iVar14;
  undefined2 uVar15;
  int iVar16;
  bool bVar17;
  byte bVar18;
  int local_30;
  int *local_28;
  __uint64 *local_24;
  undefined4 local_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004a73bd;
  local_10 = ExceptionList;
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = *(ushort *)((int)param_1 + 0x2e);
  iVar14 = 0;
  if (uVar2 < 0x65) {
    if (uVar2 == 100) {
LAB_00489a61:
      *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x10;
LAB_00489a65:
      uVar11 = FUN_0048a97f(param_1,0);
      cVar8 = (char)uVar11;
    }
    else if (uVar2 < 0x54) {
      if (uVar2 == 0x53) {
LAB_00489a8e:
        uVar9 = FUN_00489fb8((undefined4 *)param_1);
        cVar8 = (char)uVar9;
      }
      else {
        if (uVar2 != 0x41) {
          if (uVar2 == 0x43) {
LAB_00489a1b:
            uVar9 = FUN_00489e9f(param_1);
            cVar8 = (char)uVar9;
            goto LAB_00489a9e;
          }
          if (((uVar2 != 0x45) && (uVar2 != 0x46)) && (uVar2 != 0x47)) goto LAB_00489e80;
        }
LAB_004899fa:
        uVar9 = FUN_0048a0f3((uint *)param_1);
        cVar8 = (char)uVar9;
      }
    }
    else if (uVar2 == 0x58) {
      bVar18 = 1;
LAB_00489a30:
      uVar11 = FUN_0048a65b(param_1,bVar18);
      cVar8 = (char)uVar11;
    }
    else {
      if (uVar2 != 0x5a) {
        if (uVar2 != 0x61) {
          if (uVar2 != 99) goto LAB_00489e80;
          goto LAB_00489a1b;
        }
        goto LAB_004899fa;
      }
      uVar9 = FUN_00489f44(param_1);
      cVar8 = (char)uVar9;
    }
  }
  else if (uVar2 < 0x70) {
    if (uVar2 == 0x6f) {
      cVar8 = FUN_0048a2c0(param_1);
    }
    else {
      if (((uVar2 == 0x65) || (uVar2 == 0x66)) || (uVar2 == 0x67)) goto LAB_004899fa;
      if (uVar2 == 0x69) goto LAB_00489a61;
      if (uVar2 != 0x6e) goto LAB_00489e80;
      uVar11 = FUN_0048a2f3((int)param_1);
      cVar8 = (char)uVar11;
    }
  }
  else {
    if (uVar2 != 0x70) {
      if (uVar2 == 0x73) goto LAB_00489a8e;
      if (uVar2 != 0x75) {
        if (uVar2 != 0x78) goto LAB_00489e80;
        bVar18 = 0;
        goto LAB_00489a30;
      }
      goto LAB_00489a65;
    }
    cVar8 = FUN_0048a2dd(param_1);
  }
LAB_00489a9e:
  if ((cVar8 == '\0') || (*(char *)((int)param_1 + 0x2c) != '\0')) goto LAB_00489e80;
  pbVar12 = (byte *)0x0;
  uVar7 = local_1c & 0xffff000000000000;
  local_20 = (byte *)0x0;
  if ((*(uint *)((int)param_1 + 0x1c) >> 4 & 1) != 0) {
    local_1c._2_6_ = (undefined6)(uVar7 >> 0x10);
    if ((*(uint *)((int)param_1 + 0x1c) >> 6 & 1) == 0) {
      if ((*(byte *)((int)param_1 + 0x1c) & 1) == 0) {
        if ((*(uint *)((int)param_1 + 0x1c) >> 1 & 1) != 0) {
          local_1c = CONCAT62(local_1c._2_6_,0x20);
          pbVar12 = (byte *)0x1;
          local_20 = (byte *)0x1;
          uVar7 = local_1c;
        }
        goto LAB_00489b01;
      }
      uVar15 = 0x2b;
    }
    else {
      uVar15 = 0x2d;
    }
    local_1c = CONCAT62(local_1c._2_6_,uVar15);
    local_20 = (byte *)0x1;
    pbVar12 = (byte *)0x1;
    uVar7 = local_1c;
  }
LAB_00489b01:
  local_1c = uVar7;
  sVar3 = *(short *)((int)param_1 + 0x2e);
  if (((sVar3 != 0x78) && (sVar3 != 0x58)) ||
     (bVar17 = true, (*(uint *)((int)param_1 + 0x1c) >> 5 & 1) == 0)) {
    bVar17 = false;
  }
  if ((sVar3 == 0x61) || (bVar6 = false, sVar3 == 0x41)) {
    bVar6 = true;
  }
  local_24 = (__uint64 *)0x30;
  if ((bVar17) || (bVar6)) {
    *(undefined2 *)((int)&local_1c + (int)pbVar12 * 2) = 0x30;
    if ((sVar3 == 0x58) || (uVar15 = 0x78, sVar3 == 0x41)) {
      uVar15 = 0x58;
    }
    *(undefined2 *)((int)&local_1c + (int)pbVar12 * 2 + 2) = uVar15;
    pbVar12 = pbVar12 + 2;
    local_20 = pbVar12;
  }
  iVar10 = ((int)param_1[4] - *(int *)((int)param_1 + 0x34)) - (int)pbVar12;
  if (((*(byte *)((int)param_1 + 0x1c) & 0xc) == 0) && (0 < iVar10)) {
    iVar16 = *(int *)((int)param_1 + 0x14);
    do {
      iVar4 = (int)param_1[0x89];
      if (*(int *)(iVar4 + 8) == *(int *)(iVar4 + 4)) {
        if (*(char *)(iVar4 + 0xc) == '\0') {
          iVar16 = -1;
        }
        else {
          iVar16 = iVar16 + 1;
        }
        *(int *)((int)param_1 + 0x14) = iVar16;
      }
      else {
        *(int *)((int)param_1 + 0x14) = iVar16 + 1;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        *(undefined2 *)**(undefined4 **)(param_1 + 0x89) = 0x20;
        **(int **)(param_1 + 0x89) = **(int **)(param_1 + 0x89) + 2;
      }
      iVar16 = *(int *)((int)param_1 + 0x14);
      pbVar12 = local_20;
    } while ((iVar16 != -1) && (iVar14 = iVar14 + 1, iVar14 < iVar10));
  }
  iVar14 = 0;
  piVar1 = (int *)((int)param_1 + 0x14);
  FUN_00489464(param_1 + 0x89,(uint *)&local_1c,(uint)pbVar12,piVar1);
  p_Var13 = *(__uint64 **)((int)param_1 + 0x1c);
  if ((((uint)p_Var13 >> 3 & 1) != 0) &&
     ((p_Var13 = (__uint64 *)((uint)p_Var13 >> 2), ((uint)p_Var13 & 1) == 0 &&
      (local_28 = (int *)0x0, 0 < iVar10)))) {
    iVar16 = *piVar1;
    do {
      p_Var13 = *(__uint64 **)(param_1 + 0x89);
      if ((int)p_Var13[1] == *(int *)((int)p_Var13 + 4)) {
        if (*(char *)((int)p_Var13 + 0xc) == '\0') {
          iVar16 = -1;
        }
        else {
          iVar16 = iVar16 + 1;
        }
        *piVar1 = iVar16;
      }
      else {
        *piVar1 = iVar16 + 1;
        *(int *)(p_Var13 + 1) = (int)p_Var13[1] + 1;
        *(short *)**(undefined4 **)(param_1 + 0x89) = (short)local_24;
        **(int **)(param_1 + 0x89) = **(int **)(param_1 + 0x89) + 2;
        p_Var13 = local_24;
      }
      iVar16 = *piVar1;
    } while ((iVar16 != -1) && (iVar14 = iVar14 + 1, iVar14 < iVar10));
  }
  iVar14 = 0;
  local_8 = 0;
  if (((char)param_1[7] == '\0') && (0 < *(int *)((int)param_1 + 0x34))) {
    local_28 = *(int **)(param_1 + 1);
    if ((char)local_28[5] == '\0') {
      FUN_00488f30(local_28);
      p_Var13 = extraout_ECX;
    }
    if (*(int *)(local_28[3] + 8) == 0xfde9) {
      local_28 = *(int **)(param_1 + 6);
      local_1c = 0;
      local_24 = (__uint64 *)0x0;
      if (*(int *)((int)param_1 + 0x34) != 0) {
        do {
          local_20 = (byte *)0x0;
          iVar16 = FUN_0049976e(p_Var13,(ushort *)&local_20,&local_28,2,(uint *)&local_1c,
                                (int)param_1[1]);
          if (iVar16 == -1) goto LAB_00489dfe;
          p_Var5 = *(__uint64 **)(param_1 + 0x89);
          p_Var13 = (__uint64 *)((uint)local_20 & 0xffff);
          if ((int)p_Var5[1] == *(int *)((int)p_Var5 + 4)) {
            p_Var13 = p_Var5;
            if (*(char *)((int)p_Var5 + 0xc) == '\0') {
              *piVar1 = -1;
            }
            else {
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            *piVar1 = *piVar1 + 1;
            *(int *)(p_Var5 + 1) = (int)p_Var5[1] + 1;
            *(ushort *)**(undefined4 **)(param_1 + 0x89) = (ushort)local_20;
            **(int **)(param_1 + 0x89) = **(int **)(param_1 + 0x89) + 2;
          }
          if (iVar16 == 2) {
            p_Var13 = *(__uint64 **)(param_1 + 0x89);
            if ((int)p_Var13[1] == *(int *)((int)p_Var13 + 4)) {
              if (*(char *)((int)p_Var13 + 0xc) == '\0') {
                *piVar1 = -1;
              }
              else {
                *piVar1 = *piVar1 + 1;
              }
            }
            else {
              *piVar1 = *piVar1 + 1;
              *(int *)(p_Var13 + 1) = (int)p_Var13[1] + 1;
              p_Var13 = param_1 + 0x89;
              *(undefined2 *)**(undefined4 **)p_Var13 = local_20._2_2_;
              **(int **)p_Var13 = **(int **)p_Var13 + 2;
            }
            local_24 = (__uint64 *)((int)local_24 + 1);
          }
          local_24 = (__uint64 *)((int)local_24 + 1);
        } while (local_24 != *(__uint64 **)((int)param_1 + 0x34));
      }
    }
    else {
      local_28 = *(int **)(param_1 + 1);
      if ((char)local_28[5] == '\0') {
        FUN_00488f30(local_28);
      }
      local_20 = *(byte **)(param_1 + 6);
      local_30 = 0;
      bVar17 = *(int *)((int)param_1 + 0x34) == 0;
      while (!bVar17) {
        local_24 = (__uint64 *)((uint)local_24 & 0xffff0000);
        uVar11 = FUN_00499356((LPWSTR)&local_24,local_20,*(uint *)(local_28[3] + 4),
                              *(int **)(param_1 + 1));
        local_1c = CONCAT44(uVar11,(uint)local_1c);
        if ((int)uVar11 < 1) goto LAB_00489dfe;
        p_Var13 = param_1 + 0x89;
        iVar16 = (int)*p_Var13;
        if (*(int *)(iVar16 + 8) == *(int *)(iVar16 + 4)) {
          if (*(char *)(iVar16 + 0xc) == '\0') {
            *piVar1 = -1;
          }
          else {
            *piVar1 = *piVar1 + 1;
          }
        }
        else {
          *piVar1 = *piVar1 + 1;
          *(int *)(iVar16 + 8) = *(int *)(iVar16 + 8) + 1;
          *(short *)**(undefined4 **)p_Var13 = (short)local_24;
          **(int **)p_Var13 = **(int **)p_Var13 + 2;
        }
        local_20 = local_20 + uVar11;
        local_30 = local_30 + 1;
        bVar17 = local_30 == *(int *)((int)param_1 + 0x34);
      }
    }
  }
  else {
    FUN_00489464(param_1 + 0x89,*(uint **)(param_1 + 6),*(uint *)((int)param_1 + 0x34),piVar1);
  }
  goto LAB_00489e18;
LAB_00489dfe:
  *piVar1 = -1;
LAB_00489e18:
  iVar16 = *(int *)((int)param_1 + 0x14);
  if (((-1 < iVar16) && ((*(uint *)((int)param_1 + 0x1c) >> 2 & 1) != 0)) &&
     (piVar1 = (int *)((int)param_1 + 0x14), 0 < iVar10)) {
    do {
      iVar4 = (int)param_1[0x89];
      if (*(int *)(iVar4 + 8) == *(int *)(iVar4 + 4)) {
        if (*(char *)(iVar4 + 0xc) == '\0') {
          iVar16 = -1;
        }
        else {
          iVar16 = iVar16 + 1;
        }
        *piVar1 = iVar16;
      }
      else {
        *piVar1 = iVar16 + 1;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        *(undefined2 *)**(undefined4 **)(param_1 + 0x89) = 0x20;
        **(int **)(param_1 + 0x89) = **(int **)(param_1 + 0x89) + 2;
      }
      iVar16 = *piVar1;
    } while ((iVar16 != -1) && (iVar14 = iVar14 + 1, iVar14 < iVar10));
  }
LAB_00489e80:
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffffc);
}

