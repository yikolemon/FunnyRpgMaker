/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013323b */

undefined4 FUN_1013323b(undefined4 param_1,float *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fVar6;
  undefined8 local_4c;
  undefined1 local_44 [8];
  undefined8 local_3c;
  undefined1 local_2c [8];
  ulonglong local_24 [2];
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  cVar2 = FUN_10103f84(param_1,0);
  if (cVar2 == '\0') {
    *(undefined4 *)(iVar1 + 0x1ed0) = 0;
    uVar4 = 0;
    goto LAB_1013343f;
  }
  fVar6 = param_2[2] - *param_2;
  if ((*(uint *)(iVar1 + 0x1ed0) & 0x10) == 0) {
    local_24[0] = 0;
    local_3c = DAT_102b8950;
    if ((*(uint *)(iVar1 + 0x1ed0) & 2) == 0) {
      local_24[0] = (ulonglong)(uint)fVar6;
LAB_10133325:
      FUN_10133464();
      local_3c = CONCAT44(fVar6,(undefined4)local_3c);
    }
    else {
      if (*(float *)(iVar1 + 0x1ef4) <= 0.0) {
        local_24[0] = (ulonglong)(uint)fVar6;
      }
      if (*(float *)(iVar1 + 0x1ef8) <= 0.0) goto LAB_10133325;
    }
    FUN_10111da2(local_24,&local_3c,0,0);
  }
  else {
    fVar5 = (float10)FUN_100fdbca(*(undefined4 *)(iVar1 + 0x1f18),fVar6);
    *(float *)(iVar1 + 0x1f18) = (float)fVar5;
  }
  FUN_100fa4b1(local_24,0x10,"##Combo_%02d",*(undefined4 *)(iVar1 + 0x255c));
  iVar3 = FUN_1010cbda(local_24);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0xfa) == '\x01')) {
    FUN_1010cbf4(local_2c,iVar3);
    *(uint *)(iVar3 + 0x114) = (uint)((param_3 & 1) == 0) * 3;
    FUN_10116e8e(&local_3c,iVar3);
    local_4c = CONCAT44(param_2[3],*param_2);
    FUN_10116acd(local_44,&local_4c,local_2c,iVar3 + 0x114,&local_3c,param_2,1);
    local_4c = 0;
    FUN_10111d56(local_44,0,&local_4c);
  }
  FUN_100fd1ac(2,*(undefined4 *)(iVar1 + 0xd0c));
  uVar4 = FUN_10107d2b(local_24,0,0x4000147);
  FUN_100fd4c4(1);
  if ((char)uVar4 == '\0') {
    FUN_101165cb();
  }
  else {
    *(int *)(iVar1 + 0x255c) = *(int *)(iVar1 + 0x255c) + 1;
  }
LAB_1013343f:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar4;
}

