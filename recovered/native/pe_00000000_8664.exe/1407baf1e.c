/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407baf1e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407baf1e(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong unaff_RBP;
  ulonglong uVar9;
  float10 in_ST0;
  double *pdVar8;
  
  uVar2 = _DAT_2308a88b1039d74c;
  uVar7 = (int)&stack0xffffffffffffffe0 - 0x6c;
  pdVar8 = (double *)(ulonglong)uVar7;
  *(char *)(ulonglong)_DAT_2308a88b1039d74c =
       *(char *)(ulonglong)_DAT_2308a88b1039d74c + (char)_DAT_2308a88b1039d74c;
  iVar5 = (int)unaff_RBP;
  if (iVar5 == 0) {
    *(undefined4 *)pdVar8 = 0x1034b30b;
    pdVar8[-1] = 2.6564996086463e-314;
    FUN_140754dc5();
    if (_DAT_150b44581 == (*(uint *)(pdVar8 + 0xd) ^ uVar7)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdVar8[-1] = (double)FUN_1407bb89e;
    FUN_1408802b0(*(uint *)(pdVar8 + 0xd) ^ uVar7);
  }
  *(uint *)(pdVar8 + 6) = uVar2;
  if (*(char *)(unaff_RBP + 0x1ed) == '\0') {
    *(int *)pdVar8 = iVar5;
    pdVar8[-1] = 2.6564995439237e-314;
    FUN_1407b9056();
  }
  uVar2 = *(uint *)(unaff_RBP + 4);
  *(int *)((longlong)pdVar8 + 0x1c) = *(int *)(unaff_RBP + 0xc);
  uVar7 = *(uint *)(unaff_RBP + 0x158);
  uVar9 = (ulonglong)uVar7;
  uVar3 = *(uint *)(unaff_RBP + 0x154);
  if (*(char *)(unaff_RBP + 0x1ee) == '\x01') {
    *(int *)pdVar8 = iVar5;
    pdVar8[-1] = 2.65649956319226e-314;
    FUN_1407bb89e();
  }
  if (((uVar2 & 0x20) != 0) && (*(short *)(unaff_RBP + 0x1be) != -1)) {
    pdVar8[-1] = 2.65649957307357e-314;
    cVar4 = FUN_140763e8b();
    if (cVar4 == '\0') {
      *(undefined4 *)pdVar8 = 1;
      pdVar8[-1] = 2.65649958097862e-314;
      cVar4 = FUN_14076be03();
      if (cVar4 != '\0') {
        *(int *)pdVar8 = (int)*(short *)(unaff_RBP + 0x1be);
        pdVar8[-1] = 2.65649959036587e-314;
        FUN_1407bbea1();
      }
    }
  }
  if (*(short *)(unaff_RBP + 0x4c) == 0) {
    iVar5 = iVar5 + 0x16c;
  }
  else {
    iVar5 = *(int *)(unaff_RBP + 0x18c) + *(short *)(unaff_RBP + 0x4c) * 0x18 + -0x18;
  }
  *(int *)((longlong)pdVar8 + 0x2c) = iVar5;
  uVar6 = (ulonglong)*(uint *)((longlong)pdVar8 + 0x1c);
  *(undefined8 *)(uVar9 + 0x174) = *(undefined8 *)(uVar6 + 0x58);
  *(undefined8 *)(uVar9 + 0x16c) = *(undefined8 *)(uVar6 + 0x60);
  *(undefined8 *)(uVar9 + 0x15c) = *(undefined8 *)(uVar6 + 0x68);
  *pdVar8 = (double)*(float *)(unaff_RBP + 0x54);
  pdVar8[-1] = 2.65649964619529e-314;
  FUN_1408c5280();
  *(float *)((longlong)pdVar8 + 0x5c) = (float)in_ST0;
  *(int *)((longlong)pdVar8 + 0x24) = *(int *)((longlong)pdVar8 + 0x5c);
  if (uVar7 == uVar3) {
    if ((uVar2 >> 0x11 & 1) == 0) {
      uVar1 = *(undefined4 *)(unaff_RBP + 0xd0);
      *(int *)((longlong)pdVar8 + 4) = *(int *)((longlong)pdVar8 + 0x24);
      *(undefined4 *)pdVar8 = uVar1;
                    /* WARNING: Subroutine does not return */
      pdVar8[-1] = (double)&UNK_1407bb069;
      FUN_140755a9a();
    }
  }
  else {
    *(int *)(uVar9 + 0x160) = *(int *)((longlong)pdVar8 + 0x5c);
  }
  uVar1 = *(undefined4 *)(unaff_RBP + 0xf0);
  *(int *)((longlong)pdVar8 + 4) = *(int *)(unaff_RBP + 0xd0);
  *(undefined4 *)pdVar8 = uVar1;
                    /* WARNING: Subroutine does not return */
  pdVar8[-1] = (double)&UNK_1407bb0a3;
  FUN_140755a9a();
}

