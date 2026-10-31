/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10181c1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_10181c1a(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  float local_bc [8];
  float local_9c;
  float local_7c [8];
  float local_5c;
  float local_58;
  float local_54;
  int local_50 [6];
  int local_38;
  int local_34;
  char local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_bc;
  local_14 = 0xffffffff;
  local_18 = &LAB_10185fe0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_28 = FUN_100fbf7e();
  local_24 = param_1;
  if (local_28 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_1018218a();
    local_14 = 8;
    fVar4 = (float10)FUN_1026d3b0((double)((float)((double)((ulonglong)*(uint *)(local_28 + 0x1484)
                                                           | (ulonglong)DAT_1028f6c0) - DAT_1028f6b0
                                                  ) / local_bc[0]));
    local_5c = (float)fVar4;
    FUN_101832d8();
    FUN_1005c9b8();
    local_14 = 9;
    fVar4 = (float10)FUN_1026d3b0((double)((float)((double)((ulonglong)*(uint *)(local_28 + 0x1484)
                                                           | (ulonglong)DAT_1028f6c0) - DAT_1028f6b0
                                                  ) / local_9c));
    local_58 = (float)fVar4;
    FUN_1018371a();
    local_50[0] = 0;
    while( true ) {
      if (*(int *)(local_28 + 0x1484) <= local_50[0]) break;
      local_34 = *(int *)(*(int *)(local_28 + 0x148c) + local_50[0] * 4);
      if (local_34 != 0) {
        local_14 = 9;
        FUN_1018394c(local_7c,&local_34);
        FUN_101823ea(local_7c,&local_34,local_50);
      }
      local_50[0] = local_50[0] + 1;
    }
    local_14 = 9;
    FUN_1005c9b8();
    local_14 = 10;
    fVar4 = (float10)FUN_1026d3b0((double)((float)((double)((ulonglong)*(uint *)(local_28 + 0x1484)
                                                           | (ulonglong)DAT_1028f6c0) - DAT_1028f6b0
                                                  ) / local_7c[0]));
    local_54 = (float)fVar4;
    FUN_1018371a();
    *local_24 = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    local_14 = 0xb;
    FUN_10182552();
    for (local_2c = 0; local_2c < *(int *)(local_28 + 0x1484); local_2c = local_2c + 1) {
      local_50[5] = *(int *)(*(int *)(local_28 + 0x148c) + local_2c * 4);
      if (local_50[5] != 0) {
        local_14 = 0xb;
        local_38 = FUN_101825a7();
        local_50[0] = (local_24[1] - *local_24 >> 2) * -0x33333333;
        FUN_101823ea(&local_34,&local_38,local_50);
        if (local_30 == '\x01') {
          local_50[1] = 0;
          local_50[2] = 0;
          local_50[3] = 0;
          local_50[4] = 0xffffffff;
          local_14 = 0xc;
          local_50[0] = local_38;
          FUN_10183f9e();
          local_14 = 0xffffffff;
          FUN_10004eae();
        }
        iVar3 = *local_24 + *(int *)(local_34 + 0xc) * 0x14;
        piVar1 = *(int **)(iVar3 + 8);
        if (piVar1 == *(int **)(iVar3 + 0xc)) {
          local_14 = 0xb;
          FUN_10051662(piVar1,local_50 + 5);
        }
        else {
          *piVar1 = local_50[5];
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 4;
        }
      }
    }
    local_2c = local_24[1];
    iVar3 = *local_24;
    while (local_14 = 0xb, iVar3 != local_2c) {
      local_28 = iVar3;
      FUN_1018275b();
      puVar2 = (undefined4 *)FUN_1018315c();
      *(undefined4 *)(local_28 + 0x10) = *puVar2;
      iVar3 = local_28 + 0x14;
    }
    FUN_10185642();
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_10060eb6();
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_10060eb6();
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_101832a0();
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

