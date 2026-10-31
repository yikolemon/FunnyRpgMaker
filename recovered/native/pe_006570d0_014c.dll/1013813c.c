/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013813c */

byte FUN_1013813c(char *param_1,float *param_2,float *param_3,undefined4 param_4,char *param_5,
                 char *param_6,int param_7,int param_8,uint param_9)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  float10 fVar4;
  float fVar5;
  char *local_5c;
  float local_58;
  float *local_54;
  undefined4 local_50;
  float *local_4c;
  char **local_48;
  int local_44;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  char *local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_5c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x14cc) + 0xfe) == '\0') {
    local_5c = param_1;
    FUN_101131fa();
    FUN_10115649();
    fVar4 = (float10)FUN_10115533();
    local_58 = (float)fVar4;
    local_5c = (char *)0x2;
    FUN_101152df();
    local_18 = (float)(~-(uint)((float)param_6 <= (float)param_5) & (uint)param_5 |
                      DAT_102b89b0 & -(uint)((float)param_6 <= (float)param_5));
    local_1c = *param_3;
    fVar5 = local_18;
    if ((float)param_5 < (float)param_6) {
      local_5c = param_6;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      local_58 = local_1c;
      local_34 = local_18;
      fVar4 = (float10)FUN_100ea38a();
      local_1c = (float)fVar4;
      fVar5 = local_34;
      local_38 = local_1c;
    }
    local_48 = (char **)&local_1c;
    local_40 = (-(uint)(fVar5 == local_1c) & 1) << 0x15 | param_9;
    local_44 = param_7;
    local_4c = &local_18;
    local_50 = param_4;
    local_54 = param_2;
    local_58 = 1.12104e-44;
    local_5c = "##min";
    bVar2 = FUN_101375ae();
    FUN_101154f4();
    local_58 = *(float *)(iVar1 + 0xd24);
    local_5c = (char *)0x0;
    FUN_10114a0e();
    local_20 = *param_2;
    local_24 = DAT_102b89b4;
    if ((float)param_5 < (float)param_6) {
      local_5c = param_5;
      local_58 = local_20;
      fVar4 = (float10)FUN_100fdbca();
      local_20 = (float)fVar4;
      local_24 = param_6;
      local_3c = local_20;
    }
    local_4c = &local_20;
    local_48 = &local_24;
    local_40 = (-(uint)(local_20 == (float)local_24) & 1) << 0x15 | param_9;
    if (param_8 != 0) {
      param_7 = param_8;
    }
    local_50 = param_4;
    local_54 = param_3;
    local_58 = 1.12104e-44;
    local_5c = "##max";
    local_44 = param_7;
    bVar3 = FUN_101375ae();
    bVar2 = bVar2 | bVar3;
    FUN_101154f4();
    local_58 = *(float *)(iVar1 + 0xd24);
    local_5c = (char *)0x0;
    FUN_10114a0e();
    local_58 = 0.0;
    local_5c = param_1;
    local_58 = (float)FUN_100fd57d();
    local_54 = (float *)0x0;
    local_5c = param_1;
    FUN_1012cbcc();
    FUN_1011462f();
    FUN_10113568();
  }
  else {
    bVar2 = 0;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return bVar2;
}

