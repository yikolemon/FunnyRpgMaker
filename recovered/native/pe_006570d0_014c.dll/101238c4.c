/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101238c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101238c4(int param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double local_12c;
  double local_124;
  double local_11c;
  undefined1 local_114 [256];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_12c;
  local_12c = (double)CONCAT44(local_12c._4_4_,&local_14);
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar3 = FUN_1010335d();
  local_11c = (double)CONCAT44(local_11c._4_4_,iVar5);
  local_124 = (double)CONCAT44(local_124._4_4_,iVar3 + -2);
  pcVar4 = " *Inactive*";
  if (iVar3 + -2 <= iVar5) {
    pcVar4 = "";
  }
  FUN_100fa4b1(local_114,0x100,"%s 0x%08X (%d tabs)%s  {",param_2,*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 4),pcVar4);
  iVar5 = FUN_100fa683(*(undefined4 *)(param_1 + 4),3);
  if (0 < iVar5) {
    iVar5 = 0;
    iVar3 = 0;
    do {
      FUN_1014f6a8(param_1,*(int *)(param_1 + 0xc) + iVar5);
      FUN_100fa4b1();
      iVar3 = iVar3 + 1;
      iVar6 = FUN_100fa683();
      iVar5 = iVar5 + 0x30;
    } while (iVar3 < iVar6);
  }
  FUN_100fa4b1();
  if (local_11c._0_4_ < local_124._0_4_) {
    uVar7 = FUN_100fcbfd();
    FUN_100fcd80(0,uVar7);
    cVar1 = FUN_10147bc2();
    FUN_100fce8e();
  }
  else {
    cVar1 = FUN_10147bc2();
    cVar2 = FUN_10102a1a();
    if (cVar2 != '\0') {
      FUN_100fe900();
      FUN_1018b762(param_1 + 0x30,param_1 + 0x38,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,
                   _UNK_102b8bcc);
      FUN_1018b5da();
      FUN_1018b5da();
    }
  }
  if (cVar1 != '\0') {
    if (0 < *(int *)(param_1 + 4)) {
      iVar3 = 0;
      iVar5 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0xc);
        FUN_101132aa();
        cVar1 = FUN_1012e1ca();
        if (cVar1 != '\0') {
          FUN_1014f8c9();
        }
        FUN_10114a0e(0,0x40000000);
        cVar1 = FUN_1012e1ca();
        if (cVar1 != '\0') {
          FUN_1014f8c9();
        }
        FUN_10114a0e(0,0xbf800000);
        local_12c = (double)*(float *)(iVar6 + 0x1c + iVar3);
        local_11c = (double)*(float *)(iVar6 + 0x18 + iVar3);
        local_124 = (double)*(float *)(iVar6 + 0x14 + iVar3);
        uVar7 = FUN_1014f6a8(param_1,iVar6 + iVar3);
        uVar8 = 0x20;
        if (*(int *)(iVar6 + iVar3) == *(int *)(param_1 + 0x18)) {
          uVar8 = 0x2a;
        }
        FUN_1012d08c("%02d%c Tab 0x%08X \'%s\' Offset: %.2f, Width: %.2f/%.2f",iVar5,uVar8,
                     *(int *)(iVar6 + iVar3),uVar7,local_124,local_11c,local_12c);
        FUN_10113568();
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x30;
      } while (iVar5 < *(int *)(param_1 + 4));
    }
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_12c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

