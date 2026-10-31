/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041f34b */

int __cdecl FUN_0041f34b(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 local_2c;
  int local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_2c;
  iVar5 = *(int *)(param_2 + 4);
  local_18 = 0;
  if (((*(byte *)(*(int *)(param_2 + 0x9c) + 0x2a) & 0x10) != 0) &&
     (*(int *)(param_2 + 0x48) == 0x6f75746c)) {
    uVar1 = *(uint *)(param_2 + 0xc);
    local_1c = 0;
    uVar2 = FUN_0041f4f6(&local_2c,iVar5,uVar1,(int)&local_28,CONCAT44(local_24,&local_2c));
    if ((char)uVar2 != '\0') {
      iVar3 = FUN_0041d4ff(iVar5,(undefined4 *)0x0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar5 + 0x21c);
        do {
          iVar4 = FUN_0041d7a9(iVar5,local_28,
                               *(uint *)(*(int *)(param_2 + 0x9c) + 0x28) & 0xffeffff3 | 0xc);
          if (iVar4 != 0) {
LAB_0041f43c:
            FUN_0041d744(*(int *)(iVar5 + 0x54));
            goto LAB_0041f447;
          }
          iVar4 = (**(code **)(iVar3 + 0xa4))(iVar5,local_2c,param_2,*(undefined4 *)(iVar5 + 0x54));
          if (iVar4 != 0) goto LAB_0041f43c;
          uVar2 = FUN_0041f4f6(extraout_ECX,iVar5,uVar1,(int)&local_28,CONCAT44(local_24,&local_2c))
          ;
        } while ((char)uVar2 != '\0');
        *(undefined4 *)(param_2 + 0x48) = 0x62697473;
        FUN_0041d744(*(int *)(iVar5 + 0x54));
LAB_0041f435:
        iVar5 = 0;
        goto LAB_0041f4d1;
      }
LAB_0041f447:
      *(undefined4 *)(param_2 + 0x48) = 0x6f75746c;
    }
  }
  if (*(int *)(param_2 + 0x48) == 0x6f75746c) {
    local_18 = *(int *)(param_1 + 0x94);
    iVar5 = *(int *)(param_1 + 0x9c);
  }
  else {
    iVar5 = FUN_0041f302(param_1,*(int *)(param_2 + 0x48),&local_18);
  }
  if (iVar5 == 0) {
    iVar3 = 0x13;
  }
  else {
    do {
      iVar3 = (**(code **)(iVar5 + 0x3c))(iVar5,param_2,param_3,0);
      if (iVar3 == 0) goto LAB_0041f435;
    } while (((char)iVar3 == '\x13') &&
            (iVar5 = FUN_0041f302(param_1,*(int *)(param_2 + 0x48),&local_18), iVar5 != 0));
    iVar5 = iVar3;
    if ((char)iVar3 != '\x13') goto LAB_0041f4d1;
  }
  iVar5 = 0;
  if (*(int *)(param_2 + 0x48) != 0x62697473) {
    iVar5 = iVar3;
  }
LAB_0041f4d1:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_2c);
  }
  return iVar5;
}

