/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f1177 */

undefined8 FUN_1801f1177(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(param_1 + 0x408);
  if (puVar5 == (uint *)0x0) {
    uVar2 = FUN_1801f0731(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    puVar5 = *(uint **)(param_1 + 0x408);
  }
  if ((*(longlong *)(puVar5 + 2) != 0) || (uVar2 = FUN_1801f210a(param_1,0,0,1), (int)uVar2 == 0)) {
    if (*puVar5 < param_2) {
      FUN_1802a89a0(param_3 + (ulonglong)*puVar5 * 4);
      param_2 = *puVar5;
    }
    if (*(char *)(param_1 + 0x401) == '\0') {
      if (param_2 != 0) {
        lVar1 = *(longlong *)(*(longlong *)(puVar5 + 6) + 0x10);
        lVar4 = 0;
        do {
          *(undefined4 *)(param_3 + lVar4) = *(undefined4 *)(lVar1 + 0xc + lVar4 * 8);
          lVar4 = lVar4 + 4;
        } while ((ulonglong)param_2 << 2 != lVar4);
        return 0;
      }
    }
    else if (param_2 != 0) {
      uVar3 = 0;
      do {
        *(undefined4 *)(param_3 + uVar3 * 4) =
             *(undefined4 *)(*(longlong *)(puVar5 + 2) + uVar3 * 4);
        uVar3 = uVar3 + 1;
      } while (param_2 != uVar3);
      return 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

