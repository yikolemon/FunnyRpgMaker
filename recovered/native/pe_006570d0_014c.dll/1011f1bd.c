/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011f1bd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f1bd(undefined4 *param_1,undefined4 param_2,uint *param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_84;
  undefined4 uStack_74;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_18;
  
  iVar4 = DAT_1039d74c;
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_10113358(param_2);
  cVar5 = FUN_10147bc2(&DAT_10356101,"Texture #%03d (%dx%d pixels)",*param_1,param_1[7],param_1[8]);
  if (cVar5 != '\0') {
    pcVar1 = (char *)(iVar4 + 0x2808);
    FUN_1012ff1a("Show used rect",pcVar1);
    fVar9 = (float10)FUN_100fdbca(0x3f800000,*(undefined4 *)(iVar4 + 0xd60));
    FUN_100fd0a3(0x18,(float)fVar9);
    FUN_10114f9f(&local_40);
    if (*(char *)((int)param_1 + 0x4f) == '\x01') {
      local_38 = CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_1 + 7) >> 0x20),
                          (float)(int)*(undefined8 *)(param_1 + 7));
      FUN_10131d8e(&local_38);
    }
    else {
      local_38 = CONCAT44(_UNK_102b8a14,_DAT_102b8a10);
      uStack_30 = CONCAT44(_UNK_102b8a1c,_UNK_102b8a18);
      local_50 = CONCAT44(_UNK_102b8f24,_DAT_102b8f20);
      uStack_48 = CONCAT44(_UNK_102b8f2c,_UNK_102b8f28);
      local_58 = CONCAT44(DAT_102b70a0._4_4_,(float)DAT_102b70a0);
      local_60 = 0;
      local_68 = CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_1 + 7) >> 0x20),
                          (float)(int)*(undefined8 *)(param_1 + 7));
      FUN_1012f842(param_1,uStack_74,0,0,&local_68,&local_60,&local_58,&local_50,&local_38);
    }
    if (*pcVar1 == '\x01') {
      FUN_10111ef5();
      fVar10 = (float)(param_1[0xb] & 0xffff) + (float)local_40;
      fVar11 = (float)((uint)param_1[0xb] >> 0x10) + (float)((ulonglong)local_40 >> 0x20);
      local_50 = CONCAT44(fVar11,fVar10);
      local_38 = CONCAT44((float)((uint)param_1[0xc] >> 0x10) + fVar11,
                          (float)(param_1[0xc] & 0xffff) + fVar10);
      FUN_1018b762(&local_50,&local_38,_DAT_102b8dc0,_UNK_102b8dc4,_UNK_102b8dc8,_UNK_102b8dcc);
    }
    if (param_3 != (uint *)0x0) {
      fVar10 = (float)((ulonglong)local_40 >> 0x20);
      uStack_30 = CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_1 + 7) >> 0x20) + fVar10,
                           (float)(int)*(undefined8 *)(param_1 + 7) + (float)local_40);
      local_38 = local_40;
      fVar11 = (float)(*param_3 & 0xffff) + (float)local_40;
      fVar10 = (float)(*param_3 >> 0x10) + fVar10;
      local_50 = CONCAT44(fVar10,fVar11);
      uStack_48 = CONCAT44((float)(param_3[1] >> 0x10) + fVar10,
                           (float)(param_3[1] & 0xffff) + fVar11);
      uVar6 = FUN_10111ef5();
      FUN_10194ac6(uVar6,&local_38,&local_50,0x64000000,0);
      FUN_10111ef5();
      local_58 = CONCAT44((float)((ulonglong)uStack_48 >> 0x20) + DAT_102b70a0._4_4_,
                          (float)uStack_48 + (float)DAT_102b70a0);
      local_60 = CONCAT44((float)((ulonglong)local_50 >> 0x20) + DAT_102b89a0._4_4_,
                          (float)local_50 + (float)DAT_102b89a0);
      FUN_1018b762(&local_60,&local_58,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,_UNK_102b8bcc);
    }
    FUN_100fd4c4(1);
    uVar2 = *(undefined1 *)((int)param_1 + 0x4e);
    uVar6 = param_1[6];
    uVar7 = FUN_1018e325(uVar6);
    uVar3 = param_1[1];
    uVar8 = FUN_1018e30f(uVar3,uVar7);
    FUN_1012d08c("Status = %s (%d), Format = %s (%d), UseColors = %d",uVar8,uVar3,uVar7,uVar6,uVar2)
    ;
    uVar6 = param_1[2];
    FUN_1011f4be(param_1,uStack_84,0,0);
    FUN_1012d08c("TexRef = %s, BackendUserData = %p",&local_38,uVar6);
    FUN_10149387();
  }
  FUN_10113568();
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

