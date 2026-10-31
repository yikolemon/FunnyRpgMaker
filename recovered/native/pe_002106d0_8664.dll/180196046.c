/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180196046 */

void FUN_180196046(longlong param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  *(char *)(param_1 + 0x51) = param_3;
  if (((param_3 == '\0') ||
      ((*(undefined1 *)(param_1 + 0x52) = 1, *(longlong *)(param_1 + 0x2b0) == 0 &&
       (FUN_1801962d0(param_1), *(char *)(param_1 + 0x51) == '\0')))) &&
     (*(char *)(param_1 + 0x52) == '\0')) {
    FUN_180101698(
                 "Backend does not support ImGuiBackendFlags_RendererHasTextures, and font atlas is not built! Update backend OR make sure you called ImGui_ImplXXXX_NewFrame() function for renderer backend, which should call io.Fonts->GetTexDataAsRGBA32() / GetTexDataAsAlpha8()."
                 );
  }
  if (((*(char *)(param_1 + 0x52) == '\x01') &&
      (*(char *)(*(longlong *)(param_1 + 0x2b0) + 0xb9) == '\x01')) &&
     (*(char *)(param_1 + 0x51) != '\0')) {
    FUN_180101698(
                 "Called ImFontAtlas::Build() before ImGuiBackendFlags_RendererHasTextures got set! With new backends: you don\'t need to call Build()."
                 );
  }
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  *(undefined4 *)(lVar2 + 0xa4) = param_2;
  iVar4 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x70);
    lVar7 = 0;
    do {
      **(undefined8 **)(lVar6 + lVar7) = 0;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar4 * 8 != lVar7);
  }
  iVar4 = *(int *)(lVar2 + 0xe8);
  if (0 < iVar4) {
    iVar5 = *(int *)(lVar2 + 0xc0);
    if (0 < iVar5) {
      iVar4 = 0;
      uVar8 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0xd0) + (ulonglong)(uVar8 >> 5) * 8);
        lVar7 = (ulonglong)(uVar8 & 0x1f) * 0x68;
        if ((*(byte *)(lVar6 + 0x4f + lVar7) & 4) == 0) {
          puVar9 = (undefined8 *)(lVar6 + lVar7);
          iVar1 = iVar4 + 1;
          iVar11 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar11 = iVar4;
          }
          puVar12 = (undefined8 *)
                    ((longlong)(iVar4 % 0x20) * 0x68 +
                    *(longlong *)(*(longlong *)(lVar2 + 0xd0) + (longlong)(iVar11 >> 5) * 8));
          iVar4 = iVar1;
          if (puVar12 != puVar9) {
            puVar10 = puVar12;
            for (lVar6 = 0xd; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            FUN_1800ffa88(lVar2 + 0xd8,*(undefined4 *)((longlong)puVar12 + 0x54));
            iVar5 = *(int *)(lVar2 + 0xc0);
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar5);
      iVar4 = *(int *)(lVar2 + 0xe8);
    }
    *(int *)(lVar2 + 0xc0) = iVar5 - iVar4;
    *(undefined4 *)(lVar2 + 0xe8) = 0;
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar4 = 0;
    do {
      uVar13 = (ulonglong)iVar4;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + uVar13 * 8);
      iVar5 = *(int *)(lVar2 + 4);
      if (iVar5 == 0) {
        iVar5 = 0;
        if (*(int *)(lVar2 + 0x44) < 0) {
          uVar3 = FUN_1800fe7f8(0);
          if (*(longlong *)(lVar2 + 0x48) != 0) {
            FUN_1802a82f0(uVar3,*(longlong *)(lVar2 + 0x48),(longlong)*(int *)(lVar2 + 0x40) << 3);
            FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x48));
          }
          *(undefined8 *)(lVar2 + 0x48) = uVar3;
          *(undefined4 *)(lVar2 + 0x44) = 0;
          iVar5 = *(int *)(lVar2 + 4);
        }
        *(undefined4 *)(lVar2 + 0x40) = 0;
        *(undefined8 *)(lVar2 + 0x38) = 0xffffffff;
      }
      if (*(char *)(lVar2 + 0x57) == '\x01') {
        if (iVar5 != 1) {
          if (iVar5 != 4) {
            *(undefined4 *)(lVar2 + 4) = 4;
          }
LAB_18019624e:
          if ((*(longlong *)(lVar2 + 0x10) != 0) || (*(longlong *)(lVar2 + 8) != 0)) {
            *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
            goto LAB_1801962b4;
          }
          *(undefined4 *)(lVar2 + 4) = 1;
        }
LAB_180196268:
        if (*(char *)(lVar2 + 0x57) == '\0') {
          *(undefined4 *)(lVar2 + 4) = 2;
        }
        else {
          FUN_180195b26(lVar2);
          FUN_180196333(lVar2);
          FUN_1802a82f0(*(longlong *)(param_1 + 0x48) + uVar13 * 8,
                        *(longlong *)(param_1 + 0x48) + uVar13 * 8 + 8,
                        (~uVar13 + (longlong)*(int *)(param_1 + 0x40)) * 8);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          iVar4 = iVar4 + -1;
        }
      }
      else {
        if (iVar5 == 1) goto LAB_180196268;
        if (iVar5 == 4) goto LAB_18019624e;
      }
LAB_1801962b4:
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x40));
  }
  return;
}

