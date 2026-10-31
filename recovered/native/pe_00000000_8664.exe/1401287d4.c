/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401287d4 */

undefined8 FUN_1401287d4(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    uVar3 = 0x23;
  }
  else if (param_4 == 0) {
    uVar3 = 6;
  }
  else {
    uVar3 = 0x10;
    if (param_2 < *(uint *)(param_1 + 0x10)) {
      pcVar2 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0x90);
      if ((pcVar2 != (code *)0x0) && ((param_3 & 3) != 0 || (param_3 & 0xf0000) == 0x10000)) {
        uVar3 = (*pcVar2)(param_1,param_2,1,param_3,param_4);
        if ((int)uVar3 == 0) {
          if ((param_3 & 1) == 0) {
            if (*(longlong *)(param_1 + 0x80) == 0) {
              return 0x24;
            }
            iVar1 = *(int *)((ulonglong)((param_3 & 0x10) >> 2) + 0x1c +
                            *(longlong *)(param_1 + 0x80));
            lVar4 = 0;
            do {
              lVar5 = (longlong)*(int *)(param_4 + lVar4 * 4) * (longlong)iVar1 * 0x400;
              *(int *)(param_4 + lVar4 * 4) =
                   (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
              lVar4 = lVar4 + 1;
            } while (lVar4 != 1);
          }
          return 0;
        }
        if ((char)uVar3 != '\a') {
          return uVar3;
        }
      }
      uVar3 = 7;
      if ((param_3 >> 0x1d & 1) == 0) {
        uVar3 = FUN_14012890d(param_1,param_2,1,param_3,param_4);
      }
    }
  }
  return uVar3;
}

