/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a0bb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400a0bb0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  
  lVar2 = DAT_140f2a910;
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(DAT_140f2a910 + 0x2030) & 2) == 0) {
    fVar10 = (float)FUN_14008ff20();
    local_88 = (ulonglong)(uint)(fVar10 * DAT_1402116fc) << 0x20;
    FUN_140085d59(&local_88,4);
  }
  cVar3 = FUN_140085d7e("Dear ImGui ID Stack Tool",param_1,0);
  lVar9 = DAT_140f2a910;
  if ((cVar3 == '\0') ||
     (*(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1,
     1 < *(short *)(*(longlong *)(lVar9 + 0x1608) + 0x118))) {
    if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_b8)) {
      FUN_140088c18();
      return;
    }
  }
  else {
    *(undefined4 *)(lVar2 + 0x2b84) = *(undefined4 *)(lVar2 + 4);
    puVar6 = (undefined *)FUN_1400a489d(lVar2 + 0x2b48,*(undefined1 *)(lVar2 + 0x2b80));
    FUN_1400abfd5("0x%08X",*(undefined4 *)(lVar2 + 0x2b48));
    uVar11 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92(
                 "Hover an item with the mouse to display elements of the ID Stack leading to the item\'s final ID.\nEach level of the stack correspond to a PushID() call.\nAll levels of the stack are hashed together to make the final ID of a widget (ID displayed at the bottom level of the stack).\nRead FAQ entry about the ID stack for details."
                 );
    fVar12 = (float)*(double *)(lVar2 + 0x18) - *(float *)(lVar2 + 0x2b88);
    FUN_14007ad62(0xb,0);
    FUN_1400aeb6a("Hex-encode non-ASCII",lVar2 + 0x2b80);
    FUN_140092bab(0,uVar11);
    FUN_1400aeb6a("Ctrl+C: copy path",(char *)(lVar2 + 0x2b81));
    FUN_14007af87(1);
    FUN_140092bab(0,uVar11);
    fVar10 = (float)FUN_1401a3780(fVar12,DAT_140210020);
    if (((fVar12 < 0.0) || (DAT_140211584 <= fVar12)) ||
       (uVar11 = _DAT_140211740, uVar4 = _UNK_140211744, uStack_80 = _UNK_140211748,
       uStack_7c = _UNK_14021174c, DAT_140211730 <= fVar10)) {
      uVar11 = 0;
      uVar4 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
    }
    local_88 = CONCAT44(uVar4,uVar11);
    FUN_1400ac0bb(&local_88,"*COPIED*");
    if ((*(char *)(lVar2 + 0x2b81) == '\x01') &&
       (cVar3 = FUN_14008e617(0x1224,0x5000), cVar3 != '\0')) {
      *(float *)(lVar2 + 0x2b88) = (float)*(double *)(lVar2 + 0x18);
      FUN_1400811e6(puVar6);
    }
    puVar7 = &DAT_140edcdbf;
    if (*(char *)(lVar2 + 0x2b4d) != '\0') {
      puVar7 = puVar6;
    }
    FUN_1400abfd5("- Path \"%s\"",puVar7);
    FUN_1400b0bd1();
    if (0 < *(int *)(lVar2 + 0x2b50)) {
      local_88 = 0;
      local_98 = local_98 & 0xffffffff00000000;
      cVar3 = FUN_14010cbe8("##table",3,0x780);
      if (cVar3 != '\0') {
        local_98 = CONCAT44(local_98._4_4_,0xbf800000);
        FUN_14007b686(&local_88,"0xDDDDDDDD",0,0);
        uVar11 = (undefined4)local_88;
        FUN_140112128(&DAT_140ecb51e,0x10,(undefined4)local_88,0);
        FUN_140112128("PushID",8,0,0);
        FUN_140112128("Result",0x10,uVar11,0);
        FUN_1401133b4();
        uVar11 = DAT_1401c86c8;
        if (0 < *(int *)(lVar2 + 0x2b50)) {
          uVar8 = 0;
          lVar9 = 0;
          do {
            lVar1 = *(longlong *)(lVar2 + 0x2b58);
            FUN_140112b04();
            uVar4 = 0;
            if (lVar9 != 0) {
              uVar4 = *(undefined4 *)(*(longlong *)(lVar2 + 0x2b58) + -0xc + lVar9);
            }
            FUN_1400abfd5("0x%08X",uVar4);
            FUN_140112b04();
            local_98 = (ulonglong)*(int *)(lVar2 + 0x2cd8);
            FUN_1400a4a0d(lVar2 + 0x2b48,uVar8 & 0xffffffff,1,*(undefined8 *)(lVar2 + 0x2ce0));
            FUN_1400abfca(*(undefined8 *)(lVar2 + 0x2ce0),0);
            FUN_140112b04();
            FUN_1400abfd5("0x%08X",*(undefined4 *)(lVar1 + lVar9));
            iVar5 = *(int *)(lVar2 + 0x2b50);
            if (uVar8 == iVar5 - 1) {
              uVar4 = FUN_14007a557(0x19,uVar11);
              FUN_140112577(3,uVar4,0xffffffff);
              iVar5 = *(int *)(lVar2 + 0x2b50);
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 0xc;
          } while ((longlong)uVar8 < (longlong)iVar5);
        }
        FUN_140110400();
      }
    }
    FUN_140088c18();
    if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_b8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_b8);
}

