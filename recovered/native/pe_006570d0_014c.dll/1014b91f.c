/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014b91f */

uint FUN_1014b91f(undefined4 param_1,float *param_2,code *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  float fVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  undefined1 auStack_a0 [8];
  uint local_98;
  char *local_94;
  float local_90;
  int local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  float local_60;
  int local_5c;
  undefined4 local_30;
  float local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_a0;
  local_18 = 0xffffffff;
  local_1c = &LAB_10156230;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  iVar1 = DAT_1039d74c;
  puVar3 = &stack0xfffffffc;
  puVar4 = auStack_a0;
  if (param_6 < 0) {
    param_6 = FUN_100fa683(param_5,7);
    puVar3 = local_28;
    puVar4 = local_24;
  }
  local_24 = puVar4;
  local_28 = puVar3;
  local_90 = (float)param_6 + DAT_102b9570;
  fVar7 = (float10)FUN_101155d9();
  local_6c = (float)fVar7;
  local_74 = iVar1;
  fVar6 = *(float *)(iVar1 + 0xd10);
  local_2c = (float)(int)(local_90 * local_6c + fVar6 + fVar6);
  local_30 = 0;
  cVar5 = FUN_1014b5db(param_1,&local_30);
  if (cVar5 == '\0') {
    local_98 = 0;
  }
  else {
    FUN_100fbc78();
    local_18 = 0;
    fVar7 = (float10)FUN_101155d9();
    local_70 = (float)fVar7;
    FUN_100fbd22(param_5,local_70);
    FUN_100fc09e(*param_2,(int)*param_2 + 1);
    local_98 = 0;
    while (cVar5 = FUN_100fc2ca(), fVar6 = local_60, cVar5 != '\0') {
      while ((int)fVar6 < local_5c) {
        local_90 = fVar6;
        local_94 = (char *)(*param_3)(param_4,fVar6);
        FUN_10113358(local_90);
        if (local_94 == (char *)0x0) {
          local_94 = "*Unknown item*";
        }
        local_68 = 0;
        pcVar2 = local_94;
        local_94 = (char *)*param_2;
        cVar5 = FUN_10133727(pcVar2,local_90 == *param_2,0,&local_68);
        if (cVar5 != '\0') {
          *param_2 = local_90;
          local_98 = CONCAT31((int3)((uint)param_2 >> 8),1);
        }
        if ((char *)local_90 == local_94) {
          FUN_1011262c();
        }
        FUN_10113568();
        fVar6 = (float)((int)local_90 + 1);
      }
    }
    FUN_1014b8f3();
    if ((local_98 & 1) != 0) {
      FUN_10102913(*(undefined4 *)(local_74 + 0x1e80));
    }
    local_18 = 0xffffffff;
    thunk_FUN_100fbc90();
  }
  *unaff_FS_OFFSET = local_20;
  return local_98 & 0xffffff01;
}

