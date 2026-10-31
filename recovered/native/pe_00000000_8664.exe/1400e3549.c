/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e3549 */

void FUN_1400e3549(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  FUN_1400e528c(&local_48,param_1);
  FUN_1400e12aa(param_1);
  FUN_1400e455b(param_1,local_48,local_44);
  FUN_1400e2083(param_1);
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x80);
    lVar3 = (longlong)*(int *)(param_1 + 0x78) * 0xa0;
    do {
      FUN_1400e2412(param_1,lVar5);
      lVar5 = lVar5 + 0xa0;
      lVar3 = lVar3 + -0xa0;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x70);
    plVar1 = plVar4 + *(int *)(param_1 + 0x68);
    do {
      lVar5 = *plVar4;
      iVar2 = *(int *)(lVar5 + 0x20);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(lVar5 + 0x28);
        lVar6 = 0;
        do {
          FUN_1400e2468(param_1,lVar5,*(undefined8 *)(lVar3 + lVar6));
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar2 * 8 != lVar6);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_68);
}

