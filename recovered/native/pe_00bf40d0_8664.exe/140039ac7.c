/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140039ac7 */

int FUN_140039ac7(longlong param_1,char *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  iVar1 = strcmp(param_2,"glyph-to-script-map");
  if (iVar1 == 0) {
    iVar1 = FUN_140039c2f(*param_3,&local_28,param_1);
    if (iVar1 == 0) {
      param_3[1] = *(longlong *)(local_28 + 0x10);
    }
    goto LAB_140039bb3;
  }
  iVar1 = strcmp(param_2,"fallback-script");
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)((&PTR_DAT_1400f0f40)[*(uint *)(param_1 + 0x18)] + 8);
LAB_140039baf:
    *(undefined4 *)param_3 = uVar3;
  }
  else {
    iVar1 = strcmp(param_2,"default-script");
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      goto LAB_140039baf;
    }
    iVar1 = strcmp(param_2,"increase-x-height");
    if (iVar1 == 0) {
      iVar1 = FUN_140039c2f(*param_3,&local_28,param_1);
      if (iVar1 == 0) {
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(local_28 + 0x40);
      }
      goto LAB_140039bb3;
    }
    iVar1 = strcmp(param_2,"darkening-parameters");
    if (iVar1 == 0) {
      *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)((longlong)param_3 + 4) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      iVar2 = strcmp(param_2,"no-stem-darkening");
      iVar1 = 0xc;
      if (iVar2 != 0) goto LAB_140039bb3;
      *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x20);
    }
  }
  iVar1 = 0;
LAB_140039bb3:
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_48);
}

