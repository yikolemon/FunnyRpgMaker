/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180127c81 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180127c81(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  lVar2 = DAT_180419160;
  local_70 = DAT_180402640 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(DAT_180419160 + 0x2030) & 2) == 0) {
    fVar10 = (float)FUN_180116c08();
    local_88 = (ulonglong)(uint)(fVar10 * DAT_1802de98c) << 0x20;
    FUN_18010ca41(&local_88,4);
  }
  cVar3 = FUN_18010ca66("Dear ImGui ID Stack Tool",param_1,0);
  lVar9 = DAT_180419160;
  if ((cVar3 == '\0') ||
     (*(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1,
     1 < *(short *)(*(longlong *)(lVar9 + 0x1608) + 0x118))) {
    if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_b8)) {
      FUN_18010f900();
      return;
    }
  }
  else {
    *(undefined4 *)(lVar2 + 0x2b84) = *(undefined4 *)(lVar2 + 4);
    puVar6 = (undefined1 *)FUN_18012b96d(lVar2 + 0x2b48,*(undefined1 *)(lVar2 + 0x2b80));
    FUN_1801330a5("0x%08X",*(undefined4 *)(lVar2 + 0x2b48));
    uVar11 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "Hover an item with the mouse to display elements of the ID Stack leading to the item\'s final ID.\nEach level of the stack correspond to a PushID() call.\nAll levels of the stack are hashed together to make the final ID of a widget (ID displayed at the bottom level of the stack).\nRead FAQ entry about the ID stack for details."
                 );
    fVar12 = (float)*(double *)(lVar2 + 0x18) - *(float *)(lVar2 + 0x2b88);
    FUN_180101aa6(0xb,0);
    FUN_180135c3a("Hex-encode non-ASCII",lVar2 + 0x2b80);
    FUN_180119893(0,uVar11);
    FUN_180135c3a("Ctrl+C: copy path",(char *)(lVar2 + 0x2b81));
    FUN_180101ccb(1);
    FUN_180119893(0,uVar11);
    fVar10 = (float)FUN_180285540(fVar12,DAT_1802de728);
    if (((fVar12 < 0.0) || (DAT_1802de824 <= fVar12)) ||
       (uVar11 = _DAT_1802de9d0, uVar4 = _UNK_1802de9d4, uStack_80 = _UNK_1802de9d8,
       uStack_7c = _UNK_1802de9dc, DAT_1802de9c0 <= fVar10)) {
      uVar11 = 0;
      uVar4 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
    }
    local_88 = CONCAT44(uVar4,uVar11);
    FUN_18013318b(&local_88,"*COPIED*");
    if ((*(char *)(lVar2 + 0x2b81) == '\x01') &&
       (cVar3 = FUN_1801152ff(0x1224,0x5000), cVar3 != '\0')) {
      *(float *)(lVar2 + 0x2b88) = (float)*(double *)(lVar2 + 0x18);
      FUN_180107ece(puVar6);
    }
    puVar7 = &DAT_1803861e4;
    if (*(char *)(lVar2 + 0x2b4d) != '\0') {
      puVar7 = puVar6;
    }
    FUN_1801330a5("- Path \"%s\"",puVar7);
    FUN_180137ca1();
    if (0 < *(int *)(lVar2 + 0x2b50)) {
      local_88 = 0;
      local_98 = local_98 & 0xffffffff00000000;
      cVar3 = FUN_180164c18("##table",3,0x780);
      if (cVar3 != '\0') {
        local_98 = CONCAT44(local_98._4_4_,0xbf800000);
        FUN_1801023ca(&local_88,"0xDDDDDDDD",0,0);
        uVar11 = (undefined4)local_88;
        FUN_18016a158(&DAT_18036a99f,0x10,(undefined4)local_88,0);
        FUN_18016a158("PushID",8,0,0);
        FUN_18016a158("Result",0x10,uVar11,0);
        FUN_18016b3e4();
        uVar11 = DAT_1802ac570;
        if (0 < *(int *)(lVar2 + 0x2b50)) {
          uVar8 = 0;
          lVar9 = 0;
          do {
            lVar1 = *(longlong *)(lVar2 + 0x2b58);
            FUN_18016ab34();
            uVar4 = 0;
            if (lVar9 != 0) {
              uVar4 = *(undefined4 *)(*(longlong *)(lVar2 + 0x2b58) + -0xc + lVar9);
            }
            FUN_1801330a5("0x%08X",uVar4);
            FUN_18016ab34();
            local_98 = (ulonglong)*(int *)(lVar2 + 0x2cd8);
            FUN_18012badd(lVar2 + 0x2b48,uVar8 & 0xffffffff,1,*(undefined8 *)(lVar2 + 0x2ce0));
            FUN_18013309a(*(undefined8 *)(lVar2 + 0x2ce0),0);
            FUN_18016ab34();
            FUN_1801330a5("0x%08X",*(undefined4 *)(lVar1 + lVar9));
            iVar5 = *(int *)(lVar2 + 0x2b50);
            if (uVar8 == iVar5 - 1) {
              uVar4 = FUN_18010129b(0x19,uVar11);
              FUN_18016a5a7(3,uVar4,0xffffffff);
              iVar5 = *(int *)(lVar2 + 0x2b50);
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 0xc;
          } while ((longlong)uVar8 < (longlong)iVar5);
        }
        FUN_180168430();
      }
    }
    FUN_18010f900();
    if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_b8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_b8);
}

