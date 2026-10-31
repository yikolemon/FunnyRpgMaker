/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007939d */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1007939d(int *param_1,int *param_2)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *******pppppppuVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  byte bVar12;
  uint uVar10;
  undefined4 *******pppppppuVar11;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  int *unaff_FS_OFFSET;
  bool bVar18;
  int local_1e4 [2];
  code *local_1dc;
  undefined4 **local_1d8;
  undefined4 *******local_1d4;
  undefined1 auStack_1d0 [4];
  byte *local_1cc;
  undefined1 *local_1c8;
  int *local_1c4;
  uint local_1c0;
  uint local_1bc;
  undefined4 *local_1b4;
  undefined1 *local_1b0;
  undefined4 *******local_1ac;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  int local_19c [6];
  uint local_184;
  int local_180;
  undefined4 local_17c;
  undefined4 *******local_178 [5];
  uint local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  byte local_148 [12];
  byte abStack_13c [4];
  undefined4 local_138;
  undefined4 local_134;
  byte abStack_12c [4];
  undefined4 local_128;
  uint local_124;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78 [4];
  undefined4 *local_68 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_1d0;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c2cb0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  pbVar2 = (byte *)*param_1;
  if ((uint)(param_1[1] - (int)pbVar2) < 0x8f) {
    local_1d4 = (undefined4 *******)0x10336824;
    local_1d8 = (undefined4 **)&PTR_DAT_10389c80;
    local_1dc = (code *)0x10079404;
    local_28 = &stack0xfffffffc;
    local_24 = auStack_1d0;
    local_1d4 = (undefined4 *******)FUN_10079c1d();
    local_1d8 = (undefined4 **)0x1007940d;
    FUN_10079ebc();
    uVar4 = 0;
  }
  else if ((pbVar2[1] == 0x50) && (0x56 < pbVar2[5])) {
    uVar8 = (uint)pbVar2[(uint)(*param_2 == 0) * 5 + 3] << 8 | (uint)*pbVar2 << 0x10;
    uVar8 = (uVar8 + pbVar2[(uint)(*param_2 != 0) * 3 + 6]) * 0x800 ^
            pbVar2[(uint)(*param_2 != 0) * 3 + 6] + uVar8 + 0xb000000;
    uVar8 = uVar8 >> 0x13 ^ uVar8;
    uVar8 = uVar8 << 7 ^ uVar8;
    uVar16 = 10;
    _DAT_1039cbcc = uVar8;
    do {
      local_1cc = pbVar2;
      uVar14 = (int)(uVar8 << 0xf ^ uVar8) >> 0x15 ^ uVar8;
      uVar8 = uVar8 << 0xf ^ uVar14;
      uVar8 = uVar8 << 9 ^ uVar8;
      local_1cc[uVar16] =
           local_1cc[uVar16] ^
           (char)uVar14 +
           ((char)(uint)((ulonglong)((longlong)(int)uVar8 * 0x83993053) >> 0x27) -
           (char)((longlong)(int)uVar8 * 0x83993053 >> 0x3f)) * '\a';
      uVar16 = uVar16 + 1;
      pbVar2 = (byte *)*param_1;
    } while (uVar16 < (uint)(param_1[1] - (int)pbVar2));
    local_1d4 = (undefined4 *******)(uint)pbVar2[0xc];
    local_18 = 0xffffffff;
    local_1d8 = (undefined4 **)0x100794fe;
    FUN_1026ff3c();
    puVar15 = (undefined1 *)((param_1[1] - *param_1) - 0x14);
    local_1d4 = (undefined4 *******)0x10079511;
    iVar5 = FUN_1026ff4e();
    local_1b0 = puVar15;
    if ((undefined1 *)(iVar5 % 0x7e + 200U) <= puVar15) {
      local_1d4 = (undefined4 *******)0x10079545;
      iVar5 = FUN_1026ff4e();
      puVar17 = (undefined1 *)(iVar5 % 0x7e + 200);
      if (puVar17 <= puVar15) {
        local_1b0 = puVar17;
      }
    }
    local_1bc = 0;
    local_1c0 = 0;
    local_1d4 = (undefined4 *******)param_2;
    local_1d8 = (undefined4 **)0x10079583;
    local_1b4 = (undefined4 *)FUN_10079ee6();
    iVar5 = *param_1;
    if ((uint)(param_1[1] - iVar5) < 0x11) {
      local_1d4 = (undefined4 *******)0x10338819;
      local_1d8 = (undefined4 **)0x10079ae2;
      FUN_1000648a();
      local_1d4 = (undefined4 *******)&DAT_10367d98;
                    /* WARNING: Subroutine does not return */
      local_1dc = Unwind_10079aed;
      local_1d8 = (undefined4 **)&local_138;
      FUN_102586e0();
    }
    bVar12 = *(byte *)(iVar5 + 7);
    local_1cc = (byte *)(uint)*(byte *)(iVar5 + 0xb);
    bVar13 = *(byte *)(iVar5 + 0xc) ^ bVar12;
    bVar7 = *(byte *)(iVar5 + 0xe) ^ *(byte *)(iVar5 + 0xd);
    bVar3 = (bVar12 - *(byte *)(iVar5 + 0xb)) + *(byte *)(iVar5 + 0xd);
    bVar12 = (byte)(((uint)bVar12 + (int)local_1cc * 2) % 0xf6);
    local_17c = CONCAT13((bVar3 < UNK_102945a3) * UNK_102945a3 | (bVar3 >= UNK_102945a3) * bVar3,
                         CONCAT12((bVar13 < UNK_102945a2) * UNK_102945a2 |
                                  (bVar13 >= UNK_102945a2) * bVar13,
                                  CONCAT11((bVar7 < UNK_102945a1) * UNK_102945a1 |
                                           (bVar7 >= UNK_102945a1) * bVar7,
                                           (bVar12 < DAT_102945a0) * DAT_102945a0 |
                                           (bVar12 >= DAT_102945a0) * bVar12)));
    local_1d4 = (undefined4 *******)&DAT_10356101;
    local_1d8 = (undefined4 **)0x1007960c;
    FUN_10001f66();
    local_18 = 0;
    local_68[0] = &local_138;
    if (0xf < local_124) {
      local_68[0] = local_138;
    }
    local_19c[2] = 0;
    local_19c[3] = 0;
    local_19c[4] = 0;
    local_1d8 = local_68;
    local_178[0] = (undefined4 *******)((int)local_68[0] + local_128);
    local_1d4 = local_178;
    local_1dc = (code *)local_128;
    local_1e4[1] = 0x10079653;
    local_1ac = local_1d4;
    FUN_10044618();
    local_18 = 1;
    local_1d8 = (undefined4 **)&local_17c;
    local_1d4 = (undefined4 *******)0x4;
    local_1dc = (code *)local_19c[3];
    local_1e4[1] = 0x1007966f;
    FUN_1007a9e4();
    local_1d4 = (undefined4 *******)local_1b4[4];
    local_1d8 = (undefined4 **)local_1b4;
    if (0xf < (uint)local_1b4[5]) {
      local_1d8 = (undefined4 **)*local_1b4;
    }
    local_1dc = (code *)local_19c[3];
    local_1e4[1] = 0x1007968e;
    FUN_1007a9e4();
    local_18 = 0xffffffff;
    local_1d4 = (undefined4 *******)0x100796a6;
    FUN_10001fee();
    local_18 = 2;
    local_1c8 = (undefined1 *)(local_19c[3] - local_19c[2]);
    local_184 = (uint)local_1c8 >> 0x1d;
    local_19c[5] = (int)local_1c8 * 8;
    uVar8 = (int)local_1c8 * -8 + 0x37fU & 0x3ff;
    uVar16 = uVar8 + local_19c[5];
    local_1c0 = (local_184 + CARRY4(uVar8,local_19c[5]) + (uint)(0xffffff7e < uVar16)) * 0x400000 |
                uVar16 + 0x81 >> 10;
    local_1bc = 0;
    local_134 = 0;
    local_138 = (undefined4 *)0x0;
    local_1a0 = 0;
    local_19c[0] = 0;
    local_19c[1] = 0;
    local_1d8 = (undefined4 **)(local_1c0 << 4);
    local_1dc = (code *)0x10079712;
    local_1d4 = (undefined4 *******)&local_138;
    FUN_1007ad02();
    if ((local_1bc & 0xfffffff) != 0 || local_1c0 != 0) {
      local_1a4 = 0;
      local_1c4 = (int *)local_1c8;
      local_1a8 = 0;
      iVar5 = 0;
      do {
        local_180 = local_19c[2] + iVar5;
        uVar16 = 0;
        uVar14 = 0;
        uVar8 = 0;
        do {
          uVar10 = uVar8 << 8;
          if (iVar5 + uVar16 < local_1c8) {
            uVar10 = uVar10 | *(byte *)(local_180 + uVar16);
          }
          else if (local_1c4 == (int *)uVar16) {
            uVar10 = uVar10 | 0x80;
          }
          uVar14 = uVar14 << 8 | uVar8 >> 0x18;
          uVar16 = uVar16 + 1;
          uVar8 = uVar10;
        } while (uVar16 != 8);
        *(uint *)(local_1a0 + local_1a8 * 8) = uVar10;
        iVar5 = iVar5 + 8;
        *(uint *)(local_1a0 + 4 + local_1a8 * 8) = uVar14;
        bVar18 = 0xfffffffe < local_1a8;
        local_1a8 = local_1a8 + 1;
        local_1a4 = local_1a4 + bVar18;
        uVar8 = local_1bc << 4 | local_1c0 >> 0x1c;
        local_1c4 = (int *)((int)local_1c4 - 8);
      } while (local_1a4 < uVar8 || local_1a4 - uVar8 < (uint)(local_1a8 < local_1c0 << 4));
    }
    *(undefined4 *)(local_19c[0] + -0xc) = 0;
    *(undefined4 *)(local_19c[0] + -0x10) = 0;
    *(uint *)(local_19c[0] + -4) = local_184;
    *(int *)(local_19c[0] + -8) = local_19c[5];
    local_18 = 4;
    local_1d4 = (undefined4 *******)local_19c;
    local_24 = (undefined1 *)local_1e4;
    local_1cc = (byte *)local_1e4;
    local_1c4 = local_1e4 + 1;
    local_1e4[1] = 0;
    local_1dc = (code *)0x0;
    local_1d8 = (undefined4 **)0x0;
    local_1c8 = auStack_1d0;
    FUN_1007ae1e(local_19c[0] - local_1a0 >> 3,&local_1a0,local_1d4);
    pbVar2 = local_1cc;
    *(undefined4 ***)local_1cc = local_68;
    *(uint **)((int)pbVar2 + 0x10) = &local_1c0;
    local_18 = 4;
    FUN_10079f2c();
    puVar15 = local_1c8;
    local_24 = local_1c8;
    *(undefined4 ***)(local_1c8 + -4) = local_68;
    *(undefined4 *********)(puVar15 + -8) = local_178;
    *(undefined4 *)(puVar15 + -0xc) = 0x10079889;
    FUN_1007a40e();
    local_18 = 6;
    if (0xf < local_164) {
      local_1ac = local_178[0];
    }
    pppppppuVar6 = local_1ac + 3;
    pppppppuVar11 = local_1ac + 7;
    *(undefined4 **)(puVar15 + -4) = local_78;
    *(undefined4 ********)(puVar15 + -8) = pppppppuVar11;
    *(undefined4 ********)(puVar15 + -0xc) = pppppppuVar6;
    *(undefined4 *)(puVar15 + -0x10) = 0x100798bb;
    thunk_FUN_1000b6c9();
    pppppppuVar6 = local_178[0];
    if (local_164 < 0x10) {
      pppppppuVar6 = local_178;
    }
    *(byte **)(puVar15 + -4) = local_148;
    *(int *)(puVar15 + -8) = (int)pppppppuVar6 + 0x59;
    *(int *)(puVar15 + -0xc) = (int)pppppppuVar6 + 0x49;
    *(undefined4 *)(puVar15 + -0x10) = 0x100798e1;
    thunk_FUN_1000b6c9();
    iVar5 = 0;
    do {
      (&local_138)[iVar5] = local_78[iVar5];
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
    uVar8 = 4;
    do {
      bVar12 = abStack_13c[uVar8 * 4];
      bVar3 = abStack_13c[uVar8 * 4 + 1];
      bVar7 = abStack_13c[uVar8 * 4 + 2];
      bVar13 = abStack_13c[uVar8 * 4 + 3];
      if ((uVar8 & 3) == 0) {
        uVar16 = (uint)bVar12;
        bVar12 = (&UNK_1029540c)[uVar8 >> 2] ^ (&DAT_1029530c)[bVar3];
        bVar3 = (byte)(&DAT_1029530c)[CONCAT11(bVar12,bVar7) & 0xff] >> 4;
        bVar7 = ~(&DAT_1029530c)
                 [CONCAT11((&DAT_1029530c)[CONCAT11(bVar12,bVar7) & 0xff],bVar13) & 0xff];
        bVar13 = (&DAT_1029530c)[uVar16] << 1 | (char)(&DAT_1029530c)[uVar16] < '\0';
      }
      *(byte *)(&local_138 + uVar8) = bVar12 ^ local_148[uVar8 * 4];
      *(byte *)((int)&local_138 + uVar8 * 4 + 1) = bVar3 ^ local_148[uVar8 * 4 + 1];
      *(byte *)((int)&local_138 + uVar8 * 4 + 2) = bVar7 ^ local_148[uVar8 * 4 + 2];
      *(byte *)((int)&local_138 + uVar8 * 4 + 3) = bVar13 ^ local_148[uVar8 * 4 + 3];
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x2c);
    local_18 = 6;
    *(undefined4 **)(puVar15 + -4) = &local_88;
    *(undefined4 **)(puVar15 + -8) = &local_138;
    *(byte **)(puVar15 + -0xc) = local_148;
    *(undefined4 *)(puVar15 + -0x10) = 0x100799be;
    thunk_FUN_1000b6c9();
    piVar9 = (int *)*param_1;
    if (local_1b0 != (undefined1 *)0x0) {
      iVar5 = 0x10;
      puVar17 = (undefined1 *)0x0;
      local_1cc = (byte *)piVar9;
      do {
        if (iVar5 == 0x10) {
          local_160 = local_88;
          uStack_15c = uStack_84;
          uStack_158 = uStack_80;
          uStack_154 = uStack_7c;
          local_18 = 6;
          local_1c8 = puVar17;
          *(undefined4 **)(puVar15 + -4) = &local_138;
          *(undefined4 **)(puVar15 + -8) = &local_160;
          *(undefined4 *)(puVar15 + -0xc) = 0x10079a0d;
          FUN_100790ec();
          iVar5 = 0;
          do {
            cVar1 = *(char *)((int)local_78 + iVar5 + -1);
            if (cVar1 != -1) {
              *(char *)((int)local_78 + iVar5 + -1) = cVar1 + '\x01';
              break;
            }
            *(undefined1 *)((int)local_78 + iVar5 + -1) = 0;
            iVar5 = iVar5 + -1;
          } while (iVar5 != -0x10);
          iVar5 = 0;
          puVar17 = local_1c8;
        }
        *(byte *)((int)((int)local_1cc + 0x14) + (int)puVar17) =
             *(byte *)((int)((int)local_1cc + 0x14) + (int)puVar17) ^
             *(byte *)((int)&local_160 + iVar5);
        puVar17 = puVar17 + 1;
        iVar5 = iVar5 + 1;
      } while (puVar17 < local_1b0);
      piVar9 = (int *)*param_1;
      local_18 = 6;
    }
    *(int **)(puVar15 + -4) = piVar9;
    *(int *)(puVar15 + -8) = param_1[1];
    *(int *)(puVar15 + -0xc) = (int)piVar9 + 0x8f;
    *(undefined4 *)(puVar15 + -0x10) = 0x10079a79;
    iVar5 = thunk_FUN_1000b6c9();
    param_1[1] = iVar5;
    iVar5 = local_1b4[6];
    *(int *)(puVar15 + -4) = local_1b4[7] - iVar5;
    *(int *)(puVar15 + -8) = iVar5;
    *(int *)(puVar15 + -0xc) = *param_1;
    *(undefined4 *)(puVar15 + -0x10) = 0x10079a95;
    FUN_1007a9e4();
    local_18 = 0xffffffff;
    *(undefined4 *)(puVar15 + -4) = 0x10079aa8;
    FUN_10001fee();
    *(undefined4 *)(puVar15 + -4) = 0x10079ab0;
    FUN_10004eae();
    *(undefined4 *)(puVar15 + -4) = 0x10079ab8;
    FUN_10004eae();
    uVar4 = 1;
  }
  else {
    local_1d4 = (undefined4 *******)0x10335d1e;
    local_1d8 = (undefined4 **)&PTR_DAT_10389cd0;
    local_1dc = (code *)0x10079435;
    local_28 = &stack0xfffffffc;
    local_24 = auStack_1d0;
    local_1d4 = (undefined4 *******)FUN_10079c1d();
    local_1d8 = (undefined4 **)0x1007943e;
    FUN_10079ebc();
    uVar4 = 0;
  }
  *unaff_FS_OFFSET = local_20;
  return uVar4;
}

