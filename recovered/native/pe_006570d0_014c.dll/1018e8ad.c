/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e8ad */

void FUN_1018e8ad(int param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int local_18;
  
  *(char *)(param_1 + 0x41) = param_3;
  if (((param_3 == '\0') ||
      ((*(undefined1 *)(param_1 + 0x42) = 1, *(int *)(param_1 + 0x290) == 0 &&
       (FUN_1018eb1c(param_1), *(char *)(param_1 + 0x41) == '\0')))) &&
     (*(char *)(param_1 + 0x42) == '\0')) {
    FUN_100fcef5(
                "Backend does not support ImGuiBackendFlags_RendererHasTextures, and font atlas is not built! Update backend OR make sure you called ImGui_ImplXXXX_NewFrame() function for renderer backend, which should call io.Fonts->GetTexDataAsRGBA32() / GetTexDataAsAlpha8()."
                );
  }
  if (((*(char *)(param_1 + 0x42) == '\x01') &&
      (*(char *)(*(int *)(param_1 + 0x290) + 0xa9) == '\x01')) &&
     (*(char *)(param_1 + 0x41) != '\0')) {
    FUN_100fcef5(
                "Called ImFontAtlas::Build() before ImGuiBackendFlags_RendererHasTextures got set! With new backends: you don\'t need to call Build()."
                );
  }
  iVar2 = *(int *)(param_1 + 0x290);
  *(undefined4 *)(iVar2 + 0x94) = param_2;
  iVar6 = *(int *)(param_1 + 0x54);
  if (iVar6 != 0) {
    iVar10 = *(int *)(param_1 + 0x5c);
    iVar7 = 0;
    do {
      **(undefined4 **)(iVar10 + iVar7) = 0;
      iVar7 = iVar7 + 4;
    } while (iVar6 << 2 != iVar7);
  }
  iVar6 = *(int *)(iVar2 + 0xcc);
  if (0 < iVar6) {
    local_18 = *(int *)(iVar2 + 0xac);
    if (0 < local_18) {
      uVar3 = 0;
      uVar8 = 0;
      do {
        iVar6 = *(int *)(*(int *)(iVar2 + 0xbc) + (uVar8 >> 5) * 4);
        iVar10 = (uVar8 & 0x1f) * 0x50;
        if ((*(byte *)(iVar6 + 0x3f + iVar10) & 4) == 0) {
          puVar9 = (undefined4 *)(iVar6 + iVar10);
          uVar1 = uVar3 + 1;
          uVar11 = uVar3 + 0x1f;
          if (-1 < (int)uVar3) {
            uVar11 = uVar3;
          }
          puVar4 = (undefined4 *)
                   ((uVar3 - (uVar11 & 0xfffffe0)) * 0x50 +
                   *(int *)(*(int *)(iVar2 + 0xbc) + ((int)uVar11 >> 5) * 4));
          uVar3 = uVar1;
          if (puVar4 != puVar9) {
            puVar12 = puVar4;
            for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar12 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar12 = puVar12 + 1;
            }
            FUN_100fb37c(puVar4[0x11],puVar4);
            local_18 = *(int *)(iVar2 + 0xac);
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < local_18);
      iVar6 = *(int *)(iVar2 + 0xcc);
    }
    *(int *)(iVar2 + 0xac) = local_18 - iVar6;
    *(undefined4 *)(iVar2 + 0xcc) = 0;
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + uVar3 * 4);
      iVar6 = *(int *)(iVar2 + 4);
      if (iVar6 == 0) {
        iVar6 = 0;
        if (*(int *)(iVar2 + 0x40) < 0) {
          uVar5 = FUN_100fa1fa(0);
          if (*(int *)(iVar2 + 0x44) != 0) {
            FUN_1025b2d0(uVar5,*(int *)(iVar2 + 0x44),*(int *)(iVar2 + 0x3c) << 3);
            FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x44));
          }
          *(undefined4 *)(iVar2 + 0x44) = uVar5;
          *(undefined4 *)(iVar2 + 0x40) = 0;
          iVar6 = *(int *)(iVar2 + 4);
        }
        *(undefined4 *)(iVar2 + 0x3c) = 0;
        *(undefined8 *)(iVar2 + 0x34) = DAT_10294490;
      }
      if (*(char *)(iVar2 + 0x4f) == '\x01') {
        if (iVar6 != 1) {
          if (iVar6 != 4) {
            *(undefined4 *)(iVar2 + 4) = 4;
          }
LAB_1018eaae:
          if ((*(int *)(iVar2 + 0x10) != 0 || *(int *)(iVar2 + 0x14) != 0) ||
             (*(int *)(iVar2 + 8) != 0)) {
            *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
            goto LAB_1018eb0a;
          }
          *(undefined4 *)(iVar2 + 4) = 1;
        }
LAB_1018eac8:
        if (*(char *)(iVar2 + 0x4f) == '\0') {
          *(undefined4 *)(iVar2 + 4) = 2;
        }
        else {
          FUN_1018e3c0();
          FUN_1018eb76(iVar2);
          FUN_1025b2d0(*(int *)(param_1 + 0x3c) + uVar3 * 4,*(int *)(param_1 + 0x3c) + uVar3 * 4 + 4
                       ,(~uVar3 + *(int *)(param_1 + 0x34)) * 4);
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
          uVar3 = uVar3 - 1;
        }
      }
      else {
        if (iVar6 == 1) goto LAB_1018eac8;
        if (iVar6 == 4) goto LAB_1018eaae;
      }
LAB_1018eb0a:
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0x34));
  }
  return;
}

