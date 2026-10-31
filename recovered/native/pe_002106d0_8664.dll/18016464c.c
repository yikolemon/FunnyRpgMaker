/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016464c */

longlong *
FUN_18016464c(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_180164766(local_40,param_1,*param_1,param_3,param_4);
  lVar3 = local_38 + 0x20;
  FUN_180053c44(param_1,&local_70,lVar3);
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  if (*(char *)(local_60 + 0x19) == '\0') {
    iVar2 = FUN_18001b9c8(lVar3,local_60 + 0x20);
    if (-1 < iVar2) {
      *param_2 = local_60;
      *(undefined1 *)(param_2 + 1) = 0;
      bVar1 = true;
      goto LAB_1801646f5;
    }
  }
  lVar3 = local_38;
  if (param_1[1] == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_180053f28();
  }
  local_38 = 0;
  bVar1 = false;
LAB_1801646f5:
  FUN_180067022(local_40);
  if (!bVar1) {
    local_88 = local_58;
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
    lVar3 = FUN_180053dd8(param_1,&local_88,lVar3);
    *param_2 = lVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}

