/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2dce */

int FUN_101c2dce(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  iVar5 = *(int *)(param_2 + 4);
  local_18 = 0;
  if (((*(byte *)(*(int *)(param_2 + 0x9c) + 0x2a) & 0x10) != 0) &&
     (*(int *)(param_2 + 0x48) == 0x6f75746c)) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    local_1c = 0;
    cVar2 = FUN_101c2f79(iVar5,uVar1,&local_28,&local_2c,local_24);
    if (cVar2 != '\0') {
      iVar3 = FUN_101c0f0f(iVar5,0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar5 + 0x21c);
        do {
          iVar4 = FUN_101c11b9(iVar5,local_28,
                               *(uint *)(*(int *)(param_2 + 0x9c) + 0x28) & 0xffeffff3 | 0xc);
          if (iVar4 != 0) {
LAB_101c2ebf:
            FUN_101c1154(*(undefined4 *)(iVar5 + 0x54));
            goto LAB_101c2eca;
          }
          iVar4 = (**(code **)(iVar3 + 0xa4))(iVar5,local_2c,param_2,*(undefined4 *)(iVar5 + 0x54));
          if (iVar4 != 0) goto LAB_101c2ebf;
          cVar2 = FUN_101c2f79(iVar5,uVar1,&local_28,&local_2c,local_24);
        } while (cVar2 != '\0');
        *(undefined4 *)(param_2 + 0x48) = 0x62697473;
        FUN_101c1154(*(undefined4 *)(iVar5 + 0x54));
LAB_101c2eb8:
        iVar5 = 0;
        goto LAB_101c2f54;
      }
LAB_101c2eca:
      *(undefined4 *)(param_2 + 0x48) = 0x6f75746c;
    }
  }
  if (*(int *)(param_2 + 0x48) == 0x6f75746c) {
    local_18 = *(undefined4 *)(param_1 + 0x94);
    iVar5 = *(int *)(param_1 + 0x9c);
  }
  else {
    iVar5 = FUN_101c2d85(param_1,*(int *)(param_2 + 0x48),&local_18);
  }
  if (iVar5 == 0) {
    iVar3 = 0x13;
  }
  else {
    do {
      iVar3 = (**(code **)(iVar5 + 0x3c))(iVar5,param_2,param_3,0);
      if (iVar3 == 0) goto LAB_101c2eb8;
    } while (((char)iVar3 == '\x13') &&
            (iVar5 = FUN_101c2d85(param_1,*(undefined4 *)(param_2 + 0x48),&local_18), iVar5 != 0));
    iVar5 = iVar3;
    if ((char)iVar3 != '\x13') goto LAB_101c2f54;
  }
  iVar5 = 0;
  if (*(int *)(param_2 + 0x48) != 0x62697473) {
    iVar5 = iVar3;
  }
LAB_101c2f54:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar5;
}

