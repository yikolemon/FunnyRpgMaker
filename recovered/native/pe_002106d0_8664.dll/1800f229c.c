/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f229c */

longlong * FUN_1800f229c(longlong *param_1,longlong *param_2,int *param_3)

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
  longlong local_68;
  uint local_60;
  int *local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_39;
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
    if (param_1[1] == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
      FUN_180053f28();
    }
    local_58 = param_3;
    FUN_1800f23cc(local_50,param_1,lVar3,&DAT_1802b2a08,&local_58,&local_39);
    uVar5 = local_48;
    local_48 = 0;
    FUN_1800f247a(local_50);
    local_68 = lVar8;
    local_60 = uVar9;
    lVar6 = FUN_180053dd8(param_1,&local_68,uVar5);
    uVar7 = 1;
  }
  *param_2 = lVar6;
  *(undefined1 *)(param_2 + 1) = uVar7;
  return param_2;
}

