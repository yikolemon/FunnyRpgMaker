/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10149544 */

undefined4 FUN_10149544(undefined4 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float local_84;
  undefined4 *local_80;
  undefined4 local_7c;
  float10 local_78;
  float local_6c;
  float local_68;
  undefined4 local_64 [20];
  uint local_14;
  
  iVar5 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_84;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar5 + 0x14cc) + 0xfe) == '\0') {
    if (param_2 == (char *)0x0) {
      uVar2 = 0x1a;
    }
    else {
      uVar2 = 0x1000001e;
      if (*param_2 != '\x01') goto LAB_1014958d;
    }
    local_7c = FUN_101021d4(param_1,0);
    uVar6 = FUN_10147db9(local_7c,param_3 | uVar2,param_1,0);
    iVar5 = DAT_1039d74c;
    if (param_2 != (char *)0x0) {
      local_80 = (undefined4 *)(DAT_1039d74c + 0x1e80);
      puVar7 = local_80;
      puVar8 = local_64;
      for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_78 = (float10)FUN_100fdbca(*(undefined4 *)(DAT_1039d74c + 0x1e8c),
                                       (*(float *)(DAT_1039d74c + 0x1e94) -
                                       *(float *)(DAT_1039d74c + 0xd0c)) -
                                       *(float *)(DAT_1039d74c + 0x1228));
      local_84 = *(float *)(iVar5 + 0x1e90) + *(float *)(iVar5 + 0xd10);
      uVar3 = FUN_101134c2("#CLOSE",0,local_7c);
      local_6c = (float)local_78;
      local_68 = local_84;
      cVar1 = FUN_1012e639(uVar3,&local_6c);
      if (cVar1 != '\0') {
        *param_2 = '\0';
      }
      puVar7 = local_64;
      puVar8 = local_80;
      for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
  }
  else {
LAB_1014958d:
    uVar6 = 0;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_84)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

