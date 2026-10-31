/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101223c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101223c6(void)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined4 uVar10;
  float fStack_34;
  undefined1 *puStack_30;
  float fStack_2c;
  float local_28;
  undefined8 local_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&fStack_34;
  if ((*(byte *)(DAT_1039d74c + 0x1ed0) & 2) == 0) {
    fVar9 = (float10)FUN_10111f20();
    local_28 = (float)fVar9;
    local_24 = (ulonglong)(uint)(local_28 * DAT_102b8f18) << 0x20;
    FUN_10107cf6(&local_24,4);
  }
  cVar3 = FUN_10107d2b();
  iVar8 = DAT_1039d74c;
  if ((cVar3 == '\0') ||
     (*(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1,
     1 < *(short *)(*(int *)(iVar8 + 0x14cc) + 0x108))) {
    if (DAT_10388d00 == (local_14 ^ (uint)&fStack_34)) {
      FUN_1010ad44();
      return;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x2850) = *(undefined4 *)(iVar1 + 4);
    puStack_30 = (undefined1 *)FUN_10125a9e();
    FUN_1012d08c("0x%08X",*(undefined4 *)(iVar1 + 0x2820));
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    fStack_34 = (float)*(double *)(iVar1 + 0x18) - *(float *)(iVar1 + 0x2854);
    FUN_100fd2b4(0xb,0);
    FUN_1012ff1a("Hex-encode non-ASCII",iVar1 + 0x284c);
    FUN_10114a0e(0,0xbf800000);
    FUN_1012ff1a("Ctrl+C: copy path",(char *)(iVar1 + 0x284d));
    FUN_100fd4c4();
    FUN_10114a0e(0,0xbf800000);
    fVar9 = (float10)FUN_1026dec0((double)fStack_34,DAT_102b8f88);
    fStack_2c = (float)fVar9;
    if (((fStack_34 < 0.0) || (DAT_102b8d14 <= fStack_34)) ||
       (uVar5 = _DAT_102b8fa0, uVar10 = _UNK_102b8fa4, uStack_1c = _UNK_102b8fa8,
       uStack_18 = _UNK_102b8fac, DAT_102b8f90 <= fStack_2c)) {
      uVar5 = 0;
      uVar10 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
    }
    local_24 = CONCAT44(uVar10,uVar5);
    FUN_1012d147(&local_24,"*COPIED*");
    puVar2 = puStack_30;
    if ((*(char *)(iVar1 + 0x284d) == '\x01') &&
       (cVar3 = FUN_10110653(0x1224,0x5000), cVar3 != '\0')) {
      *(float *)(iVar1 + 0x2854) = (float)*(double *)(iVar1 + 0x18);
      FUN_101032f2();
    }
    puVar4 = &DAT_10356101;
    if (*(char *)(iVar1 + 0x2825) != '\0') {
      puVar4 = puVar2;
    }
    FUN_1012d08c("- Path \"%s\"",puVar4);
    FUN_10132188();
    if (0 < *(int *)(iVar1 + 0x2828)) {
      local_24 = 0;
      cVar3 = FUN_1015f834("##table",3,0x780,&local_24,0);
      if (cVar3 != '\0') {
        iVar8 = 0;
        FUN_100fdb2e(&local_24,"0xDDDDDDDD",0,0,0xbf800000);
        fStack_34 = (float)local_24;
        FUN_10164e8b(&DAT_1033a875,0x10,(float)local_24,0);
        FUN_10164e8b("PushID",8,0,0);
        FUN_10164e8b("Result",0x10,fStack_34,0);
        FUN_1016601f();
        if (0 < *(int *)(iVar1 + 0x2828)) {
          iVar7 = 0;
          do {
            FUN_101657a1();
            if (iVar8 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x2830) + -0xc + iVar7);
            }
            FUN_1012d08c("0x%08X",uVar5);
            FUN_101657a1();
            FUN_10125bcd();
            FUN_1012d079(*(undefined4 *)(iVar1 + 0x29a8));
            FUN_101657a1();
            FUN_1012d08c();
            iVar6 = *(int *)(iVar1 + 0x2828);
            if (iVar8 == iVar6 + -1) {
              FUN_100fcb39(0x19);
              FUN_10165294();
              iVar6 = *(int *)(iVar1 + 0x2828);
            }
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar8 < iVar6);
        }
        FUN_1016304e();
      }
    }
    FUN_1010ad44();
    if (DAT_10388d00 == (local_14 ^ (uint)&fStack_34)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

