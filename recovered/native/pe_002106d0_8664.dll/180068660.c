/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180068660 */

longlong * FUN_180068660(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong local_60;
  uint local_58;
  undefined1 local_50 [8];
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_180068792(local_50,param_1,*param_1,param_3,param_4);
  lVar5 = local_48;
  lVar6 = *param_1;
  lVar7 = *(longlong *)(lVar6 + 8);
  uVar8 = 0;
  if (*(char *)(lVar7 + 0x19) == '\0') {
    iVar1 = *(int *)(local_48 + 0x20);
    lVar3 = lVar7;
    do {
      lVar7 = lVar3;
      iVar2 = *(int *)(lVar7 + 0x20);
      if (iVar1 <= iVar2) {
        lVar6 = lVar7;
      }
      lVar3 = *(longlong *)(lVar7 + (ulonglong)(iVar2 < iVar1) * 0x10);
    } while (*(char *)(lVar3 + 0x19) == '\0');
    uVar8 = (uint)(iVar1 <= iVar2);
  }
  if ((*(char *)(lVar6 + 0x19) == '\0') && (*(int *)(lVar6 + 0x20) <= *(int *)(local_48 + 0x20))) {
    *param_2 = lVar6;
    *(undefined1 *)(param_2 + 1) = 0;
    bVar4 = true;
  }
  else {
    if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_180053f28();
    }
    local_48 = 0;
    bVar4 = false;
  }
  FUN_1800673aa(local_50);
  if (!bVar4) {
    local_60 = lVar7;
    local_58 = uVar8;
    lVar6 = FUN_180053dd8(param_1,&local_60,lVar5);
    *param_2 = lVar6;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}

