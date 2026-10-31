/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10133528 */

uint FUN_10133528(undefined4 param_1,int *param_2,code *param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  char *pcVar1;
  undefined1 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int in_XMM0_Da;
  int local_70;
  char *local_6c;
  uint local_68;
  int local_64;
  undefined8 local_60;
  int local_58;
  int local_54;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_101561d0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  iVar5 = *param_2;
  uVar6 = 0;
  local_64 = DAT_1039d74c;
  puVar2 = &stack0xfffffffc;
  piVar3 = &local_70;
  if (iVar5 < param_5 && -1 < iVar5) {
    uVar6 = (*param_3)(param_4,iVar5);
    puVar2 = local_28;
    piVar3 = (int *)local_24;
  }
  local_24 = (undefined1 *)piVar3;
  local_28 = puVar2;
  if ((param_6 != -1) && ((*(byte *)(local_64 + 0x1ed0) & 0x10) == 0)) {
    FUN_10133464();
    local_58 = 0x7f7fffff;
    local_60 = 0;
    local_54 = in_XMM0_Da;
    FUN_10111da2(&local_60,&local_58,0,0);
  }
  cVar4 = FUN_10132c48(param_1,uVar6,0);
  if (cVar4 == '\0') {
    local_68 = 0;
  }
  else {
    FUN_100fbc78();
    local_18 = 0;
    FUN_100fbd22(param_5,0xbf800000);
    FUN_100fc09e(*param_2,*param_2 + 1);
    local_68 = 0;
    while (cVar4 = FUN_100fc2ca(), iVar5 = local_58, cVar4 != '\0') {
      while (iVar5 < local_54) {
        local_70 = iVar5;
        local_6c = (char *)(*param_3)(param_4,iVar5);
        FUN_10113358(local_70);
        if (local_6c == (char *)0x0) {
          local_6c = "*Unknown item*";
        }
        local_60 = 0;
        pcVar1 = local_6c;
        local_6c = (char *)*param_2;
        cVar4 = FUN_10133727(pcVar1,local_70 == *param_2,0,&local_60);
        if ((cVar4 != '\0') && (*param_2 != local_70)) {
          *param_2 = local_70;
          local_68 = CONCAT31((int3)((uint)param_2 >> 8),1);
        }
        if ((char *)local_70 == local_6c) {
          FUN_1011262c();
        }
        FUN_10113568();
        iVar5 = local_70 + 1;
      }
    }
    FUN_101334a7();
    if ((local_68 & 1) != 0) {
      FUN_10102913(*(undefined4 *)(local_64 + 0x1e80));
    }
    local_18 = 0xffffffff;
    thunk_FUN_100fbc90();
  }
  *unaff_FS_OFFSET = local_20;
  return local_68 & 0xffffff01;
}

