/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011eb0c */

void FUN_1011eb0c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  int local_38;
  int local_34;
  uint local_30;
  float local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined1 local_19 [5];
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  if (*(int *)(param_1 + 0x18) == 0) {
    pcVar6 = "<unknown>";
  }
  else {
    pcVar6 = (char *)**(undefined4 **)(param_1 + 0x20);
  }
  local_38 = *(int *)(param_1 + 4);
  cVar1 = FUN_10147c9d(param_1,"Font: \"%s\": %d sources(s)",pcVar6,*(int *)(param_1 + 0x18));
  if (cVar1 == '\0') {
    FUN_10115158();
  }
  FUN_10115158();
  if (*(char *)(iVar2 + 0x281c) == '\x01') {
    FUN_10112cf6(param_1,0);
    FUN_1012d08c();
    FUN_10112e00();
  }
  if (cVar1 == '\0') {
    FUN_101151af();
  }
  else {
    cVar1 = FUN_1012e1ca();
    if (cVar1 != '\0') {
      iVar2 = FUN_1010330d();
      *(int *)(iVar2 + 0x30) = param_1;
    }
    FUN_10114a0e(0,0xbf800000);
    FUN_10111871();
    cVar1 = FUN_1012e1ca();
    if (cVar1 != '\0') {
      FUN_1018fc74();
    }
    FUN_10111961();
    FUN_10114a0e(0,0xbf800000);
    cVar1 = FUN_1012e1ca();
    if (cVar1 != '\0') {
      FUN_1018f4da();
    }
    FUN_10114a0e(0,0xbf800000);
    cVar1 = FUN_1012e1ca();
    if (cVar1 != '\0') {
      FUN_1018f4da();
    }
    fVar12 = (float10)FUN_10111f20();
    local_2c = (float)fVar12;
    FUN_100fb68f();
    FUN_10137f3c("Font scale",param_1 + 0x38,0x3ba3d70a,0x3e99999a,0x40000000,&DAT_1033863a,0);
    FUN_100faa51(local_19,*(undefined2 *)(param_1 + 0x26));
    FUN_1012d08c();
    FUN_100faa51(local_19,*(undefined2 *)(param_1 + 0x24));
    FUN_1012d08c();
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar2 = 0;
      do {
        iVar7 = *(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4);
        cVar1 = FUN_10147c9d(iVar7,
                             "Input %d: \'%s\' [%d], Oversample: %d,%d, PixelSnapH: %d, Offset: (%.1f,%.1f)"
                             ,iVar2,iVar7,*(undefined4 *)(iVar7 + 0x58),(int)*(char *)(iVar7 + 0x33)
                             ,(int)*(char *)(iVar7 + 0x34),*(undefined1 *)(iVar7 + 0x32),
                             (double)*(float *)(iVar7 + 0x44),(double)*(float *)(iVar7 + 0x48));
        if (cVar1 != '\0') {
          puVar8 = *(undefined4 **)(iVar7 + 0x74);
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = *(undefined4 **)(local_38 + 0x294);
          }
          FUN_1012d08c("Loader: \'%s\'");
          if (((char *)*puVar8 != (char *)0x0) &&
             (iVar3 = _strcmp((char *)*puVar8,"FreeType"), iVar3 == 0)) {
            local_24 = CONCAT44(local_24._4_4_,*(undefined4 *)(iVar7 + 0x5c));
            FUN_1012d08c("FreeType Loader Flags: 0x%08X",*(undefined4 *)(iVar7 + 0x5c));
            cVar1 = FUN_10197045();
            iVar3 = local_38;
            if (cVar1 != '\0') {
              FUN_1018e667(local_38,param_1);
              *(undefined4 *)(iVar7 + 0x5c) = (undefined4)local_24;
              FUN_101908d5(iVar3,param_1);
            }
          }
          FUN_10149387();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x18));
      if ((1 < *(int *)(param_1 + 0x18)) && (cVar1 = FUN_10147d77(), cVar1 != '\0')) {
        FUN_1012d238();
        local_24 = 0;
        uVar9 = 0;
        cVar1 = FUN_1015f834();
        if (cVar1 != '\0') {
          do {
            uVar4 = FUN_101250ef();
            uVar10 = uVar9;
            uVar11 = uVar9;
            if (uVar4 != 0) {
              do {
                uVar10 = uVar11;
                if (uVar10 == 0xffff) {
                  uVar11 = 0x10000;
                  break;
                }
                uVar11 = uVar10 + 1;
                uVar5 = FUN_101250ef();
              } while (uVar5 == uVar4);
              cVar1 = FUN_101657a1();
              if (cVar1 != '\0') {
                iVar2 = 0;
                uVar5 = uVar4;
                do {
                  iVar2 = iVar2 + 1;
                  uVar5 = uVar5 - 1 & uVar5;
                } while (uVar5 != 0);
                cVar1 = FUN_10147c9d(uVar9,"U+%04X-U+%04X: %d codepoints in %d inputs",uVar9,uVar10,
                                     uVar11 - uVar9,iVar2);
                if (cVar1 != '\0') {
                  if (uVar9 <= uVar10) {
                    do {
                      FUN_100faa51(&local_24);
                      FUN_1012d551();
                      uVar9 = uVar9 + 1;
                    } while (uVar10 + 1 != uVar9);
                  }
                  FUN_10149387();
                }
              }
              FUN_101657a1();
              iVar2 = *(int *)(param_1 + 0x18);
              if (0 < iVar2) {
                uVar9 = 0;
                do {
                  if ((uVar4 >> (uVar9 & 0x1f) & 1) != 0) {
                    FUN_1012d08c(&DAT_1034ba98);
                    FUN_10114a0e(0);
                    iVar2 = *(int *)(param_1 + 0x18);
                  }
                  uVar9 = uVar9 + 1;
                } while ((int)uVar9 < iVar2);
              }
            }
            uVar9 = uVar10 + 1;
          } while (uVar9 < 0x10000);
          FUN_1016304e();
        }
        FUN_10149387();
      }
    }
    iVar2 = *(int *)(local_38 + 0x290);
    if (0 < *(int *)(iVar2 + 0xac)) {
      uVar9 = 0;
      do {
        iVar7 = *(int *)(*(int *)(iVar2 + 0xbc) + (uVar9 >> 5) * 4);
        iVar3 = (uVar9 & 0x1f) * 0x50;
        if (*(int *)(iVar7 + 0x48 + iVar3) == param_1) {
          iVar7 = iVar7 + iVar3;
          FUN_10113358();
          local_34 = iVar7;
          cVar1 = FUN_10147bc2("Glyphs","Baked at { %.2fpx, d.%.2f }: %d glyphs%s",
                               (double)*(float *)(iVar7 + 0x10),(double)*(float *)(iVar7 + 0x14),
                               *(undefined4 *)(iVar7 + 0x24));
          if (cVar1 != '\0') {
            local_30 = uVar9;
            cVar1 = FUN_1012e1ca();
            iVar2 = local_34;
            if (cVar1 != '\0') {
              iVar7 = 0;
              do {
                FUN_101902dc();
                iVar7 = iVar7 + 1;
              } while (iVar7 != 0x10000);
            }
            uVar9 = *(uint *)(iVar2 + 0x3c);
            FUN_1012d08c("Ascent: %f, Descent: %f, Ascent-Descent: %f",
                         (double)*(float *)(iVar2 + 0x34),(double)*(float *)(iVar2 + 0x38),
                         (double)(*(float *)(iVar2 + 0x34) - *(float *)(iVar2 + 0x38)));
            FUN_1012d08c("Texture Area: about %d px ~%dx%d px",*(uint *)(iVar2 + 0x3c) & 0x3ffffff,
                         (int)SQRT((float)(uVar9 & 0x3ffffff)));
            if (0 < *(int *)(param_1 + 0x18)) {
              iVar2 = 0;
              do {
                iVar7 = *(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4);
                FUN_10190880(iVar7,local_34,&local_24,&local_28);
                FUN_1012d551("Input %d: \'%s\', Oversample: (%d=>%d,%d=>%d), PixelSnapH: %d, Offset: (%.1f,%.1f)"
                             ,iVar2,iVar7,(int)*(char *)(iVar7 + 0x33),(undefined4)local_24,
                             (int)*(char *)(iVar7 + 0x34),local_28,*(undefined1 *)(iVar7 + 0x32));
                iVar2 = iVar2 + 1;
              } while (iVar2 < *(int *)(param_1 + 0x18));
            }
            FUN_10125169();
            FUN_10149387();
            uVar9 = local_30;
          }
          FUN_10113568();
          iVar2 = *(int *)(local_38 + 0x290);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < *(int *)(iVar2 + 0xac));
    }
    FUN_10149387();
  }
  FUN_101151af();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

