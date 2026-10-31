/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031288e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14031288e(int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  lVar1 = DAT_14062a630;
  local_38 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  puVar2 = (undefined4 *)(DAT_14062a630 + 0xee8 + (longlong)param_1 * 0x10);
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  iVar3 = *(int *)(DAT_14062a630 + 0x20e8);
  if (iVar3 == *(int *)(DAT_14062a630 + 0x20ec)) {
    if (iVar3 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar3 / 2 + iVar3;
    }
    iVar6 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    lVar4 = FUN_14030fcc8((longlong)iVar6 * 0x14);
    if (*(longlong *)(lVar1 + 0x20f0) != 0) {
      FUN_1404b97c0(lVar4,*(longlong *)(lVar1 + 0x20f0),(longlong)*(int *)(lVar1 + 0x20e8) * 0x14);
      FUN_14030fda4(*(undefined8 *)(lVar1 + 0x20f0));
    }
    *(longlong *)(lVar1 + 0x20f0) = lVar4;
    *(int *)(lVar1 + 0x20ec) = iVar6;
    iVar3 = *(int *)(lVar1 + 0x20e8);
  }
  else {
    lVar4 = *(longlong *)(DAT_14062a630 + 0x20f0);
  }
  *(int *)(lVar4 + (longlong)iVar3 * 0x14) = param_1;
  puVar2 = (undefined4 *)(lVar4 + 4 + (longlong)iVar3 * 0x14);
  *puVar2 = local_48;
  puVar2[1] = uStack_44;
  puVar2[2] = uStack_40;
  puVar2[3] = uStack_3c;
  *(int *)(lVar1 + 0x20e8) = *(int *)(lVar1 + 0x20e8) + 1;
  if (*(int *)(lVar1 + 0x20e4) != param_1) {
    lVar1 = lVar1 + (longlong)param_1 * 0x10;
    FUN_14031085b(&local_58,param_2);
    *(undefined4 *)(lVar1 + 0xee8) = local_58;
    *(undefined4 *)(lVar1 + 0xeec) = uStack_54;
    *(undefined4 *)(lVar1 + 0xef0) = uStack_50;
    *(undefined4 *)(lVar1 + 0xef4) = uStack_4c;
  }
  if (ram0x000140613b10 == (local_38 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_38 ^ (ulonglong)auStack_78);
}

