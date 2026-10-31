/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180068836 */

longlong * FUN_180068836(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong local_58;
  uint local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  lVar8 = *(longlong *)(lVar3 + 8);
  uVar9 = 0;
  lVar6 = lVar3;
  if (*(char *)(lVar8 + 0x19) == '\0') {
    iVar1 = *param_3;
    lVar4 = lVar8;
    do {
      lVar8 = lVar4;
      iVar2 = *(int *)(lVar8 + 0x20);
      if (iVar1 <= iVar2) {
        lVar6 = lVar8;
      }
      lVar4 = *(longlong *)(lVar8 + (ulonglong)(iVar2 < iVar1) * 0x10);
    } while (*(char *)(lVar4 + 0x19) == '\0');
    uVar9 = (uint)(iVar1 <= iVar2);
  }
  if ((*(char *)(lVar6 + 0x19) == '\0') && (*(int *)(lVar6 + 0x20) <= *param_3)) {
    uVar7 = 0;
  }
  else {
    if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_180053f28();
    }
    FUN_180068792(local_48,param_1,lVar3,param_3,param_4);
    uVar5 = local_40;
    local_40 = 0;
    FUN_1800673aa(local_48);
    local_58 = lVar8;
    local_50 = uVar9;
    lVar6 = FUN_180053dd8(param_1,&local_58,uVar5);
    uVar7 = 1;
  }
  *param_2 = lVar6;
  *(undefined1 *)(param_2 + 1) = uVar7;
  return param_2;
}

