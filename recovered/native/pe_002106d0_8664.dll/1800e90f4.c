/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e90f4 */

longlong * FUN_1800e90f4(longlong *param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong local_68;
  uint local_60;
  uint *local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  lVar7 = *(longlong *)(lVar2 + 8);
  uVar8 = 0;
  lVar5 = lVar2;
  if (*(char *)(lVar7 + 0x19) == '\0') {
    uVar8 = *param_3;
    lVar3 = lVar7;
    do {
      lVar7 = lVar3;
      uVar1 = *(uint *)(lVar7 + 0x20);
      if (uVar1 >= uVar8) {
        lVar5 = lVar7;
      }
      lVar3 = *(longlong *)(lVar7 + (ulonglong)(uVar1 < uVar8) * 0x10);
    } while (*(char *)(lVar3 + 0x19) == '\0');
    uVar8 = (uint)(uVar8 <= uVar1);
  }
  if ((*(char *)(lVar5 + 0x19) == '\0') && (*(uint *)(lVar5 + 0x20) <= *param_3)) {
    uVar6 = 0;
  }
  else {
    if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_180053f28();
    }
    local_58 = param_3;
    FUN_1800e9224(local_50,param_1,lVar2,&DAT_1802b2a08,&local_58,&local_39);
    uVar4 = local_48;
    local_48 = 0;
    FUN_1800673aa(local_50);
    local_68 = lVar7;
    local_60 = uVar8;
    lVar5 = FUN_180053dd8(param_1,&local_68,uVar4);
    uVar6 = 1;
  }
  *param_2 = lVar5;
  *(undefined1 *)(param_2 + 1) = uVar6;
  return param_2;
}

