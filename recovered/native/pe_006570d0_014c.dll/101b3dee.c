/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b3dee */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3dee(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  undefined4 uVar5;
  float10 fVar6;
  float fVar7;
  double local_58;
  float local_50;
  double local_4c;
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_58;
  cVar3 = FUN_10147d77();
  if (cVar3 != '\0') {
    FUN_101032c6();
    cVar3 = FUN_10147d77();
    if (cVar3 != '\0') {
      FUN_101032c6();
      local_24 = _DAT_103029c0;
      uStack_20 = _UNK_103029c4;
      uStack_1c = _UNK_103029c8;
      uStack_18 = _UNK_103029cc;
      FUN_1012d147(&local_24,&DAT_10336c8d);
      local_24 = _DAT_103027c0;
      uStack_20 = _UNK_103027c4;
      uStack_1c = _UNK_103027c8;
      uStack_18 = _UNK_103027cc;
      FUN_1012d147(&local_24,"Yellow");
      FUN_1012d1be();
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10149387();
    }
    cVar3 = FUN_10147d77();
    if (cVar3 != '\0') {
      FUN_101032c6();
      pfVar4 = (float *)FUN_100fcb2d();
      local_58 = (double)CONCAT44(local_58._4_4_,pfVar4[2] * pfVar4[1]);
      FUN_1012d08c();
      FUN_1012d08c();
      FUN_1012d08c();
      FUN_10111f20();
      FUN_1012d08c();
      FUN_10132656();
      FUN_1013d285("custom_size",&DAT_1038abd0,0x41200000,0x42c80000,&DAT_10338657,0);
      FUN_1012d08c();
      FUN_10112cf6(0,DAT_1038abd0);
      local_58 = (double)DAT_1038abd0;
      fVar6 = (float10)FUN_10111f20();
      FUN_1012d08c("FontSize = %.2f (== %.2f * global_scale)",(double)fVar6,local_58);
      FUN_10112e00();
      FUN_10132656();
      FUN_1013d285("custom_scale",&DAT_1038abd4,0x3f000000,0x40800000,"%.2f",0);
      FUN_1012d08c();
      FUN_10112cf6(0,*pfVar4 * _DAT_1038abd4);
      local_58 = (double)_DAT_1038abd4;
      fVar6 = (float10)FUN_10111f20();
      FUN_1012d08c("FontSize = %.2f (== style.FontSizeBase * %.2f * global_scale)",(double)fVar6,
                   local_58);
      FUN_10112e00();
      FUN_10132656();
      fVar7 = DAT_102b70e0;
      do {
        local_58 = (double)CONCAT44(local_58._4_4_,fVar7);
        FUN_10112cf6(0,*pfVar4 * fVar7);
        local_4c = (double)local_58._0_4_;
        fVar6 = (float10)FUN_10111f20();
        FUN_1012d08c("FontSize = %.2f (== style.FontSizeBase * %.2f * global_scale)",(double)fVar6);
        FUN_10112e00();
        fVar7 = local_58._0_4_ + DAT_102b70e0;
      } while (fVar7 <= DAT_102b8cb0);
      FUN_10149387();
    }
    cVar3 = FUN_10147d77();
    if (cVar3 != '\0') {
      FUN_101032c6();
      FUN_1012d238();
      FUN_10131d29();
      FUN_1013d285("Wrap width",&DAT_1038abd8,0xc1a00000,0x44160000,&DAT_10338657,0);
      uVar5 = 0;
      FUN_10111ef5();
      bVar2 = true;
      do {
        bVar1 = bVar2;
        FUN_1012d08c("Test paragraph %d:",uVar5);
        FUN_10114f9f();
        local_58 = (double)CONCAT44(local_58._4_4_,uStack_20);
        local_2c = local_24 + _DAT_1038abd8;
        local_28 = uStack_20;
        fVar6 = (float10)FUN_10111f20();
        local_50 = (float)fVar6;
        local_30 = local_58._0_4_ + local_50;
        local_34 = local_24 + _DAT_1038abd8 + DAT_102b710c;
        FUN_10114ff4();
        FUN_101119c9();
        if (bVar1) {
          FUN_1012d08c();
        }
        else {
          FUN_1012d08c();
        }
        FUN_1010c049();
        FUN_1010c032();
        FUN_1018b762(local_44,local_3c,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,_UNK_102b8bcc);
        FUN_1018b85a(&local_2c,&local_34,0xffff00ff,0,0);
        FUN_10111a82();
        uVar5 = 1;
        bVar2 = false;
      } while (bVar1);
      FUN_10149387();
    }
    cVar3 = FUN_10147d77();
    if (cVar3 != '\0') {
      FUN_101032c6();
      FUN_1012d238();
      FUN_1012d08c();
      FUN_1012d08c();
      FUN_10141729("UTF-8 input",&DAT_1038abdc,DAT_10302814,0,0,0);
      FUN_10149387();
    }
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

