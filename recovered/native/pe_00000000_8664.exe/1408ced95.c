/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408ced95 */

/* WARNING: Instruction at (ram,0x0001408ceee0) overlaps instruction at (ram,0x0001408ceedf)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408ced95(void)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong unaff_RBP;
  ulonglong *puVar12;
  longlong in_FS_OFFSET;
  bool bVar13;
  ulonglong auStack_18 [3];
  
  auStack_18[2] = 0x28;
  puVar11 = auStack_18 + 1;
  auStack_18[1] = 0x10382fc0;
  auStack_18[0] = 0x1408ceda1;
  FUN_1408d05b0();
  puVar12 = (ulonglong *)0x0;
  *(undefined4 *)(unaff_RBP + -0x28) = 0;
  *(undefined4 *)(unaff_RBP + -0x34) = 0;
  bVar3 = true;
  *(undefined1 *)(unaff_RBP + -0x19) = 1;
  uVar1 = *(uint *)(unaff_RBP + 8);
  if ((int)uVar1 < 0xc) {
    if (uVar1 == 0xb) {
LAB_1408cedcd:
      auStack_18[0] = 0x1408cedd2;
      uVar4 = FUN_1408cc2ee();
      puVar12 = (ulonglong *)(ulonglong)uVar4;
      *(uint *)(unaff_RBP + -0x28) = uVar4;
      if (uVar4 == 0) goto LAB_1408ceddb;
      auStack_18[0] = *puVar12;
      iVar5 = FUN_1408cefc9();
      if (iVar5 == 0) goto LAB_1408cedf1;
      iVar5 = iVar5 + 8;
      bVar3 = false;
      *(undefined1 *)(unaff_RBP + -0x19) = 0;
    }
    else {
      if (uVar1 != 2) {
        if (uVar1 != 4) {
          if (uVar1 == 6) goto LAB_1408cee1e;
          if (uVar1 != 8) goto LAB_1408cedf1;
        }
        goto LAB_1408cedcd;
      }
LAB_1408cee1e:
      auStack_18[0] = (ulonglong)uVar1;
      iVar5 = FUN_1408cef87();
      puVar11 = (ulonglong *)(ulonglong)((int)auStack_18 + 4);
    }
    *(int *)(unaff_RBP + -0x24) = iVar5;
    *(undefined4 *)(unaff_RBP + -0x30) = 0;
    if (bVar3) {
      puVar11[0xffffffffffffffff] = 3;
      puVar11[0xfffffffffffffffe] = 0x1408cee39;
      FUN_1408c1f00();
    }
    *(undefined4 *)(unaff_RBP + -0x2c) = 0;
    *(undefined1 *)(unaff_RBP + -0x1a) = 0;
    *(undefined4 *)(unaff_RBP + -4) = 0;
    uVar9 = (ulonglong)*(uint *)(ulonglong)*(uint *)(unaff_RBP + -0x24);
    *(uint *)(unaff_RBP + -0x20) = *(uint *)(ulonglong)*(uint *)(unaff_RBP + -0x24);
    if (bVar3) {
      puVar11[0xffffffffffffffff] = uVar9;
      puVar11[0xfffffffffffffffe] = 0x1408cee58;
      uVar4 = FUN_1408c04dd();
      uVar9 = (ulonglong)uVar4;
      *(uint *)(unaff_RBP + -0x20) = uVar4;
    }
    iVar5 = (int)uVar9;
    *(int *)(unaff_RBP + -0x2c) = iVar5;
    bVar13 = iVar5 == 1;
    *(bool *)(unaff_RBP + -0x1a) = bVar13;
    if (!bVar13) {
      if (iVar5 == 0) {
        if (bVar3) {
          puVar11[0xffffffffffffffff] = 3;
          puVar11[0xfffffffffffffffe] = 0x1408cef7e;
          FUN_1408c1f17();
          uVar9 = puVar11[0xffffffffffffffff];
        }
        puVar11[0xffffffffffffffff] = 3;
        puVar11[0xfffffffffffffffe] = 0x1408cef86;
        FUN_1408c051e(uVar9);
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return uVar8;
      }
      if (((uVar1 == 8) || (uVar1 == 0xb)) || (uVar1 == 4)) {
        *(int *)(unaff_RBP + -0x30) = *(int *)((longlong)puVar12 + 4);
        *(int *)((longlong)puVar12 + 4) = 0;
        if (uVar1 != 8) {
          halt_baddata();
        }
        puVar11[0xffffffffffffffff] = 0x1408cee99;
        lVar7 = FUN_1408cc29d();
        *(undefined4 *)(unaff_RBP + -0x34) = *(undefined4 *)(lVar7 + 8);
        puVar11[0xffffffffffffffff] = 0x1408ceea4;
        lVar7 = FUN_1408cc29d();
        *(undefined4 *)(lVar7 + 8) = 0x8c;
        uVar9 = (ulonglong)*(uint *)(unaff_RBP + -0x20);
      }
      if (uVar1 != 8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar4 = _DAT_150bf3c6e * 0xc + (int)*puVar12;
      uVar10 = _DAT_150bf3c7b * 0xc + uVar4;
      while( true ) {
        *(uint *)(unaff_RBP + -0x38) = uVar4;
        if (uVar4 == uVar10) break;
        *(undefined4 *)((ulonglong)uVar4 + 8) = 0;
        uVar4 = uVar4 + 0xc;
      }
    }
    *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
    puVar11[0xffffffffffffffff] = (ulonglong)&UNK_1408ceeeb;
    func_0x0001408cef1f(uVar9);
    if (!bVar13) {
      if (uVar1 == 8) {
        puVar11[0xffffffffffffffff] = (ulonglong)&UNK_1408ceef9;
        lVar7 = FUN_1408cc29d();
        puVar11[0xffffffffffffffff] = *(undefined8 *)(lVar7 + 8);
        puVar11[0xfffffffffffffffe] = 8;
        uVar4 = *(uint *)(unaff_RBP + -0x20);
        puVar11[0xfffffffffffffffd] = (ulonglong)&UNK_1408cef08;
        (*pcRam0000000150c2c718)((code *)(ulonglong)uVar4);
        puVar11[0xfffffffffffffffd] = (ulonglong)&UNK_1408cef0a;
        (*(code *)(ulonglong)uVar4)();
      }
      else {
        puVar11[0xffffffffffffffff] = (ulonglong)uVar1;
        puVar11[0xfffffffffffffffe] = (ulonglong)&UNK_1408cef36;
        (*pcRam0000000150c2c746)();
        uVar4 = *(uint *)(unaff_RBP + -0x20);
        puVar11[0xfffffffffffffffe] = (ulonglong)&UNK_1408cef3b;
        (*(code *)(ulonglong)uVar4)();
      }
      uVar8 = puVar11[0xffffffffffffffff];
      if ((((uVar1 == 8) || (uVar1 == 0xb)) || (uVar1 == 4)) &&
         (*(int *)((longlong)puVar12 + 4) = *(int *)(unaff_RBP + -0x30), uVar1 == 8)) {
        puVar11[0xffffffffffffffff] = (ulonglong)&UNK_1408cef5b;
        lVar7 = FUN_1408cc29d(uVar8);
        *(undefined4 *)(lVar7 + 8) = *(undefined4 *)(unaff_RBP + -0x34);
      }
    }
    uVar8 = 0;
  }
  else {
    if (((uVar1 == 0xf) || (uVar1 == 0x15)) || (uVar1 == 0x16)) goto LAB_1408cee1e;
LAB_1408cedf1:
    auStack_18[0] = 0x1408cedf6;
    puVar6 = (undefined4 *)FUN_1408c0ecd();
    *puVar6 = 0x16;
    auStack_18[0] = 0x1408cee01;
    FUN_1408cbd78();
LAB_1408ceddb:
    uVar8 = 0xffffffff;
  }
  *(undefined4 *)(in_FS_OFFSET + 0x1408cef6d) = *(undefined4 *)(unaff_RBP + -0x10);
  return uVar8;
}

