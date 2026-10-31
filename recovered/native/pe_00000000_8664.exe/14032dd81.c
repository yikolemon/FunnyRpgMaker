/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032dd81 */

undefined8 FUN_14032dd81(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined4 uVar10;
  
  lVar3 = DAT_14062a630;
  if ((param_1 & 0x10) == 0) {
    lVar2 = *(longlong *)(DAT_14062a630 + 0x1608);
    iVar6 = *(int *)(DAT_14062a630 + 0x1fe0);
    if (iVar6 == 0) {
      if ((*(char *)(DAT_14062a630 + 0x120) != '\0') && (*(char *)(lVar2 + 0x10e) == '\0')) {
        if ((*(byte *)(DAT_14062a630 + 0x1fe8) & 1) == 0) {
          if (*(int *)(DAT_14062a630 + 0x167c) != 0) {
            if ((param_1 & 8) == 0) {
              return 0;
            }
            if (*(longlong *)(DAT_14062a630 + 0x16a0) != lVar2) {
              return 0;
            }
LAB_14032df79:
            lVar1 = DAT_14062a630 + 0x1fec;
            iVar6 = FUN_1403293f8(lVar2,lVar1);
            *(int *)(lVar3 + 0x1fe0) = iVar6;
            FUN_140319d7f(iVar6);
            cVar5 = FUN_140318d40(lVar1,iVar6,*(undefined4 *)(lVar3 + 0x1fe4));
            if ((cVar5 != '\0') && (*(char *)(lVar3 + 0xb50) == '\x01')) {
              FUN_1403186c0(iVar6,lVar2);
              FUN_1403195bc(lVar2,0);
            }
            uVar7 = 0;
            if (*(int *)(lVar3 + 0x167c) != iVar6) {
              return 0;
            }
            goto LAB_14032ddfd;
          }
        }
        else if ((param_1 & 8) != 0) goto LAB_14032df79;
      }
    }
    else {
      if (*(int *)(DAT_14062a630 + 0x167c) != iVar6) {
        return 0;
      }
      cVar4 = *(char *)(DAT_14062a630 + 0x168f);
      if (cVar4 == -1) {
        cVar4 = '\0';
      }
      if (*(char *)(DAT_14062a630 + 0x120 + (longlong)cVar4) == '\0') {
        return 0;
      }
      cVar5 = '\0';
      if (*(char *)(lVar2 + 0x10e) != '\0') {
        return 0;
      }
      uVar7 = (ulonglong)(uint)(int)cVar4;
LAB_14032ddfd:
      *(char *)(lVar3 + 0x1689) = cVar5;
      uVar10 = *(undefined4 *)
                (*(longlong *)(lVar2 + 0x150) + -4 + (longlong)*(int *)(lVar2 + 0x148) * 4);
      cVar5 = FUN_1403198b1(uVar7,DAT_1404ccdb0);
      FUN_1403197ac();
      if (cVar5 != '\0') goto LAB_14032de6a;
    }
    uVar8 = 0;
  }
  else {
    uVar10 = 0;
    iVar6 = FUN_140310209("NodeFlags_DrawLinesFull",0,0);
    uVar7 = (ulonglong)-(*(byte *)(lVar3 + 0x120) ^ 1);
    FUN_140319d7f(iVar6);
    FUN_1403186c0(iVar6,0);
LAB_14032de6a:
    if (*(char *)(lVar3 + 0x2428) == '\0') {
      FUN_14031c8c2();
      if ((*(byte *)(lVar3 + 0x2acc) & 2) != 0) {
        pwVar9 = L"(\"error\")";
        if ((param_1 & 0x10) == 0) {
          pwVar9 = L"pNonPic";
        }
        FUN_14030f4ba("meDataFn(): WantVisible: %d, InputPos (%.2f,%.2f) for Viewport 0x%08X\n",
                      iVar6,pwVar9);
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
        FUN_14032bde7();
      }
      else {
        FUN_14032dd49();
      }
    }
    uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
    if ((param_1 & 0x12) == 0) {
      *(byte *)(lVar3 + 0x1fe8) = *(byte *)(lVar3 + 0x1fe8) & 0xfe;
    }
  }
  return uVar8;
}

