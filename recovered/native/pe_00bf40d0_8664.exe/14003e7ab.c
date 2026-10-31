/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003e7ab */

int FUN_14003e7ab(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(param_1 + 0x408);
  if (puVar6 == (uint *)0x0) {
    iVar3 = FUN_14003dd65(param_1,(undefined8 *)0x0);
    if (iVar3 != 0) {
      return iVar3;
    }
    puVar6 = *(uint **)(param_1 + 0x408);
  }
  if ((*(longlong *)(puVar6 + 2) != 0) ||
     (iVar3 = FUN_14003f73e(param_1,0,(undefined8 *)0x0,'\x01'), iVar3 == 0)) {
    uVar1 = *puVar6;
    if (uVar1 < param_2) {
      FUN_1400b3c00((undefined1 (*) [32])(param_3 + (ulonglong)uVar1 * 4),0,
                    (ulonglong)(param_2 - uVar1) << 2);
      param_2 = *puVar6;
    }
    if (*(char *)(param_1 + 0x401) == '\0') {
      if (param_2 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(puVar6 + 6) + 0x10);
        lVar5 = 0;
        do {
          *(undefined4 *)(param_3 + lVar5) = *(undefined4 *)(lVar2 + 0xc + lVar5 * 8);
          lVar5 = lVar5 + 4;
        } while ((ulonglong)param_2 << 2 != lVar5);
        return 0;
      }
    }
    else if (param_2 != 0) {
      uVar4 = 0;
      do {
        *(undefined4 *)(param_3 + uVar4 * 4) =
             *(undefined4 *)(*(longlong *)(puVar6 + 2) + uVar4 * 4);
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
      return 0;
    }
    iVar3 = 0;
  }
  return iVar3;
}

