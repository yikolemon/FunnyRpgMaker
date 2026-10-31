/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001f677 */

int FUN_14001f677(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStackY_98 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  lVar6 = *(longlong *)(param_2 + 8);
  local_50 = 0;
  if (((*(byte *)(*(longlong *)(param_2 + 0xf0) + 0x32) & 0x10) != 0) &&
     (*(int *)(param_2 + 0x60) == 0x6f75746c)) {
    uVar1 = *(uint *)(param_2 + 0x18);
    local_58 = 0;
    uVar5 = FUN_14001f856(lVar6,uVar1,&local_64,&local_68,local_60);
    if ((char)uVar5 != '\0') {
      iVar3 = FUN_14001d5a4(lVar6,(undefined8 *)0x0);
      if (iVar3 == 0) {
        lVar2 = *(longlong *)(lVar6 + 0x2d0);
        do {
          iVar3 = FUN_14001d8c9(lVar6,local_64,
                                *(uint *)(*(longlong *)(param_2 + 0xf0) + 0x30) & 0xffeffff3 | 0xc);
          if ((iVar3 != 0) ||
             (iVar3 = (**(code **)(lVar2 + 0x148))
                                (lVar6,local_68,param_2,*(undefined8 *)(lVar6 + 0x78)), iVar3 != 0))
          {
            FUN_14001d842(*(longlong *)(lVar6 + 0x78));
            goto LAB_14001f793;
          }
          uVar5 = FUN_14001f856(lVar6,uVar1,&local_64,&local_68,local_60);
        } while ((char)uVar5 != '\0');
        *(undefined4 *)(param_2 + 0x60) = 0x62697473;
        FUN_14001d842(*(longlong *)(lVar6 + 0x78));
        iVar3 = 0;
        goto LAB_14001f820;
      }
LAB_14001f793:
      *(undefined4 *)(param_2 + 0x60) = 0x6f75746c;
    }
  }
  if (*(int *)(param_2 + 0x60) == 0x6f75746c) {
    local_50 = *(longlong *)(param_1 + 0x118);
    lVar6 = *(longlong *)(param_1 + 0x128);
  }
  else {
    lVar6 = FUN_14001f633(param_1,*(int *)(param_2 + 0x60),&local_50);
  }
  if (lVar6 == 0) {
    iVar4 = 0x13;
  }
  else {
    do {
      iVar4 = (**(code **)(lVar6 + 0x70))(lVar6,param_2,param_3,0);
      iVar3 = 0;
      if (iVar4 == 0) goto LAB_14001f820;
    } while (((char)iVar4 == '\x13') &&
            (lVar6 = FUN_14001f633(param_1,*(int *)(param_2 + 0x60),&local_50), lVar6 != 0));
    iVar3 = iVar4;
    if ((char)iVar4 != '\x13') goto LAB_14001f820;
  }
  iVar3 = 0;
  if (*(int *)(param_2 + 0x60) != 0x62697473) {
    iVar3 = iVar4;
  }
LAB_14001f820:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return iVar3;
}

