/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001d842 */

void FUN_14001d842(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar3 = *(longlong *)(lVar1 + 0x78);
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x90) + 0x10);
      if (lVar3 == param_1) {
        lVar4 = 0;
      }
      else {
        do {
          lVar4 = lVar3;
          lVar3 = *(longlong *)(lVar4 + 0x10);
          if (lVar3 == 0) {
            return;
          }
        } while (lVar3 != param_1);
      }
      if (lVar4 == 0) {
        *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar3 + 0x10);
      }
      else {
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      FUN_14001d764(param_1);
      FUN_14001c53d(lVar2,param_1);
      return;
    }
  }
  return;
}

