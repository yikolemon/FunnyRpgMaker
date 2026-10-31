/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012af53 */

void FUN_18012af53(undefined8 param_1,longlong param_2,uint param_3)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  int local_e8;
  char *local_e0;
  ulonglong local_d8;
  undefined8 local_c8;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  ulonglong local_a0;
  
  local_a0 = DAT_180402640 ^ (ulonglong)auStack_108;
  local_c8 = param_1;
  uVar3 = FUN_180116bd5();
  local_bc = FUN_18010129b(0,DAT_1802ac570);
  fVar1 = *(float *)(param_2 + 0x14);
  lVar4 = FUN_18010128e();
  fVar15 = *(float *)(lVar4 + 0x60) + fVar1;
  fVar16 = DAT_1802de7b0 * fVar15;
  uVar12 = 0;
  do {
    if ((uVar12 & 0x1fff) == 0) {
      cVar2 = FUN_18019a618(local_c8,uVar12,uVar12 | 0x1fff);
      if (cVar2 == '\0') goto LAB_18012b027;
      uVar12 = uVar12 | 0x1f00;
    }
    else {
LAB_18012b027:
      iVar9 = 0;
      iVar7 = 0;
      do {
        cVar2 = FUN_180197bf8(param_2,uVar12 + iVar9);
        if (cVar2 != '\0') {
          puVar5 = (uint *)FUN_180197c14(param_2,uVar12 + iVar9);
          if (puVar5 != (uint *)0x0) {
            iVar7 = iVar7 + (uint)((param_3 >> (*puVar5 >> 2 & 0xf) & 1) != 0);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0x100);
      if (0 < iVar7) {
        local_e0 = "glyphs";
        if (iVar7 == 1) {
          local_e0 = "glyph";
        }
        local_e8 = iVar7;
        cVar2 = FUN_18014c1c1(uVar12,"U+%04X..U+%04X (%d %s)",uVar12,uVar12 + 0xff);
        if (cVar2 != '\0') {
          FUN_180119e05(local_a8);
          uVar11 = 0;
          fVar17 = local_a8._0_4_;
          fVar18 = local_a8._4_4_;
          do {
            uVar10 = (uint)uVar11;
            fVar13 = (float)(uVar10 & 0xf) * fVar15 + fVar17;
            fVar14 = (float)(int)(uVar11 >> 4) * fVar15 + fVar18;
            local_b0 = CONCAT44(fVar14,fVar13);
            local_b8 = CONCAT44(fVar14 + fVar1,fVar13 + fVar1);
            iVar7 = uVar12 + uVar10;
            cVar2 = FUN_180197bf8(param_2,iVar7);
            if (cVar2 == '\0') {
              local_d8 = local_d8 & 0xffffffff00000000;
              local_e8 = 0;
              local_e0 = (char *)CONCAT44(local_e0._4_4_,0x3f800000);
              FUN_180192c0a(uVar3,&local_b0,&local_b8,0x32ffffff);
            }
            else {
              pbVar6 = (byte *)FUN_180197c14(param_2,iVar7);
              uVar8 = 0x64ffffff;
              if (pbVar6 == (byte *)0x0) {
                uVar8 = 0x32ffffff;
              }
              local_d8 = local_d8 & 0xffffffff00000000;
              local_e8 = 0;
              local_e0 = (char *)CONCAT44(local_e0._4_4_,0x3f800000);
              FUN_180192c0a(uVar3,&local_b0,&local_b8,uVar8);
              if ((pbVar6 != (byte *)0x0) && ((param_3 >> (*pbVar6 >> 2 & 0xf) & 1) != 0)) {
                local_e0 = (char *)CONCAT62(local_e0._2_6_,(short)iVar7);
                local_e8 = local_bc;
                local_d8 = 0;
                FUN_18019b4ea(local_c8,uVar3,fVar1,&local_b0);
                cVar2 = FUN_180107af4(&local_b0,&local_b8,1);
                if (cVar2 != '\0') {
                  FUN_18011a917();
                  FUN_18012b28f(local_c8,pbVar6);
                  thunk_FUN_18010f900();
                }
              }
            }
            uVar11 = (ulonglong)(uVar10 + 1);
          } while (uVar10 + 1 != 0x100);
          local_b0 = CONCAT44(fVar16,fVar16);
          FUN_18013783d(&local_b0);
          FUN_18014d7a9();
        }
      }
    }
    uVar12 = uVar12 + 0x100;
    if (0xffff < uVar12) {
      if (DAT_180402640 == (local_a0 ^ (ulonglong)auStack_108)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_a0 ^ (ulonglong)auStack_108);
    }
  } while( true );
}

