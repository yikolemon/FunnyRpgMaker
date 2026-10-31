/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095b6d */

undefined8 FUN_140095b6d(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  
  lVar3 = DAT_140f2a910;
  if ((param_1 & 0x10) == 0) {
    lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608);
    iVar6 = *(int *)(DAT_140f2a910 + 0x1fe0);
    if (iVar6 == 0) {
      if ((*(char *)(DAT_140f2a910 + 0x120) != '\0') && (*(char *)(lVar2 + 0x10e) == '\0')) {
        if ((*(byte *)(DAT_140f2a910 + 0x1fe8) & 1) == 0) {
          if (*(int *)(DAT_140f2a910 + 0x167c) != 0) {
            if ((param_1 & 8) == 0) {
              return 0;
            }
            if (*(longlong *)(DAT_140f2a910 + 0x16a0) != lVar2) {
              return 0;
            }
LAB_140095d65:
            lVar1 = DAT_140f2a910 + 0x1fec;
            iVar6 = FUN_140091240(lVar2,lVar1);
            *(int *)(lVar3 + 0x1fe0) = iVar6;
            FUN_140081bc7(iVar6);
            cVar5 = FUN_140080b88(lVar1,iVar6,*(undefined4 *)(lVar3 + 0x1fe4));
            if ((cVar5 != '\0') && (*(char *)(lVar3 + 0xb50) == '\x01')) {
              FUN_140080508(iVar6,lVar2);
              FUN_140081404(lVar2,0);
            }
            uVar7 = 0;
            if (*(int *)(lVar3 + 0x167c) != iVar6) {
              return 0;
            }
            goto LAB_140095be9;
          }
        }
        else if ((param_1 & 8) != 0) goto LAB_140095d65;
      }
    }
    else {
      if (*(int *)(DAT_140f2a910 + 0x167c) != iVar6) {
        return 0;
      }
      cVar4 = *(char *)(DAT_140f2a910 + 0x168f);
      if (cVar4 == -1) {
        cVar4 = '\0';
      }
      if (*(char *)(DAT_140f2a910 + 0x120 + (longlong)cVar4) == '\0') {
        return 0;
      }
      cVar5 = '\0';
      if (*(char *)(lVar2 + 0x10e) != '\0') {
        return 0;
      }
      uVar7 = (ulonglong)(uint)(int)cVar4;
LAB_140095be9:
      *(char *)(lVar3 + 0x1689) = cVar5;
      uVar10 = *(undefined4 *)
                (*(longlong *)(lVar2 + 0x150) + -4 + (longlong)*(int *)(lVar2 + 0x148) * 4);
      cVar5 = FUN_1400816f9(uVar7,DAT_1401c86a4);
      FUN_1400815f4();
      if (cVar5 != '\0') goto LAB_140095c56;
    }
    uVar8 = 0;
  }
  else {
    uVar10 = 0;
    iVar6 = FUN_140077ff5("#SourceExtern",0,0);
    uVar7 = (ulonglong)-(*(byte *)(lVar3 + 0x120) ^ 1);
    FUN_140081bc7(iVar6);
    FUN_140080508(iVar6,0);
LAB_140095c56:
    if (*(char *)(lVar3 + 0x2428) == '\0') {
      FUN_14008470a();
      if ((*(byte *)(lVar3 + 0x2acc) & 2) != 0) {
        pcVar9 = " (EXTERN)";
        if ((param_1 & 0x10) == 0) {
          pcVar9 = "";
        }
        FUN_1400772a6("[dragdrop] BeginDragDropSource() DragDropActive = true, source_id = 0x%08X%s\n"
                      ,iVar6,pcVar9);
      }
      *(int *)(lVar3 + 0x2444) = iVar6;
      *(undefined4 *)(lVar3 + 0x2448) = uVar10;
      *(undefined1 *)(lVar3 + 0x2428) = 1;
      *(uint *)(lVar3 + 0x242c) = param_1;
      *(int *)(lVar3 + 0x2434) = (int)uVar7;
      if (iVar6 == *(int *)(lVar3 + 0x167c)) {
        *(undefined1 *)(lVar3 + 0x168a) = 1;
      }
    }
    *(undefined4 *)(lVar3 + 0x2430) = *(undefined4 *)(lVar3 + 4);
    *(undefined1 *)(lVar3 + 0x2429) = 1;
    if ((param_1 & 1) == 0) {
      if ((*(int *)(lVar3 + 0x24b0) == 0) || ((*(byte *)(lVar3 + 0x24a5) & 0x10) == 0)) {
        FUN_140093bd3();
      }
      else {
        FUN_140095b35();
      }
    }
    uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
    if ((param_1 & 0x12) == 0) {
      *(byte *)(lVar3 + 0x1fe8) = *(byte *)(lVar3 + 0x1fe8) & 0xfe;
    }
  }
  return uVar8;
}

