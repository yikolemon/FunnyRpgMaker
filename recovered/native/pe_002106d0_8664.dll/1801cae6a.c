/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cae6a */

void FUN_1801cae6a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar3 = *(longlong *)(lVar1 + 0x78);
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x90) + 0x10);
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
      FUN_1801cad8c(param_1);
      FUN_1801c9b65(uVar2,param_1);
      return;
    }
  }
  return;
}

