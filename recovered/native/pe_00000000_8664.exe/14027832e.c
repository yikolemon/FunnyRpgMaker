/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027832e */

longlong *
FUN_14027832e(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140278448(local_40,param_1,*param_1,param_3,param_4);
  lVar3 = local_38 + 0x20;
  FUN_140265114(param_1,&local_70,lVar3);
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  if (*(char *)(local_60 + 0x19) == '\0') {
    iVar2 = FUN_14022ce98(lVar3,local_60 + 0x20);
    if (-1 < iVar2) {
      *param_2 = local_60;
      *(undefined1 *)(param_2 + 1) = 0;
      bVar1 = true;
      goto LAB_1402783d7;
    }
  }
  lVar3 = local_38;
  if (param_1[1] == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1402653f8();
  }
  local_38 = 0;
  bVar1 = false;
LAB_1402783d7:
  FUN_1402784f2(local_40);
  if (!bVar1) {
    local_88 = local_58;
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
    lVar3 = FUN_1402652a8(param_1,&local_88,lVar3);
    *param_2 = lVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}

