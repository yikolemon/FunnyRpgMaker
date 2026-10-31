/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ccfbc */

longlong * FUN_1400ccfbc(longlong *param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong local_58;
  uint local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar4 = *param_1;
  lVar6 = *(longlong *)(lVar4 + 8);
  uVar7 = 0;
  if (*(char *)(lVar6 + 0x19) == '\0') {
    uVar7 = *param_3;
    lVar2 = lVar6;
    do {
      lVar6 = lVar2;
      uVar1 = *(uint *)(lVar6 + 0x1c);
      if (uVar1 >= uVar7) {
        lVar4 = lVar6;
      }
      lVar2 = *(longlong *)(lVar6 + (ulonglong)(uVar1 < uVar7) * 0x10);
    } while (*(char *)(lVar2 + 0x19) == '\0');
    uVar7 = (uint)(uVar7 <= uVar1);
  }
  if ((*(char *)(lVar4 + 0x19) == '\0') && (*(uint *)(lVar4 + 0x1c) <= *param_3)) {
    uVar5 = 0;
  }
  else {
    if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_14000fcec();
    }
    FUN_1400cd0d0(local_48,param_1);
    uVar3 = local_40;
    local_40 = 0;
    FUN_1400cd168(local_48);
    local_58 = lVar6;
    local_50 = uVar7;
    lVar4 = FUN_14000fb9c(param_1,&local_58,uVar3);
    uVar5 = 1;
  }
  *param_2 = lVar4;
  *(undefined1 *)(param_2 + 1) = uVar5;
  return param_2;
}

