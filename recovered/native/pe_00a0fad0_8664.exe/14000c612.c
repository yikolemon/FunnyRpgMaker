/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000c612 */

void FUN_14000c612(longlong param_1,undefined8 param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_3 >> 0x1f == 0) {
    uVar4 = param_4 & 0xffffffdf;
    if ((param_3 == 0) || ((param_4 & 6) == 6)) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      lVar2 = FUN_140006280(param_3);
      FUN_140135ff0(lVar2,param_2,param_3);
      *(ulonglong *)(param_1 + 0x68) = lVar2 + param_3;
      if ((param_4 & 4) == 0) {
        **(longlong **)(param_1 + 0x18) = lVar2;
        **(longlong **)(param_1 + 0x38) = lVar2;
        **(undefined4 **)(param_1 + 0x50) = (int)param_3;
      }
      if ((param_4 & 2) == 0) {
        lVar1 = *(longlong *)(param_1 + 0x68);
        lVar3 = lVar2;
        if ((param_4 & 0x18) != 0) {
          lVar3 = lVar1;
        }
        **(longlong **)(param_1 + 0x20) = lVar2;
        **(longlong **)(param_1 + 0x40) = lVar3;
        **(int **)(param_1 + 0x58) = (int)lVar1 - (int)lVar3;
        if ((param_4 & 4) != 0) {
          **(longlong **)(param_1 + 0x18) = lVar2;
          **(longlong **)(param_1 + 0x38) = lVar2;
          **(undefined4 **)(param_1 + 0x50) = 0;
        }
      }
      uVar4 = uVar4 | 1;
    }
    *(uint *)(param_1 + 0x70) = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9cb0();
}

