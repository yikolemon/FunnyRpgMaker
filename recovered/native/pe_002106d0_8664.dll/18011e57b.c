/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011e57b */

void FUN_18011e57b(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_180107ef9();
  if (1 < *(int *)(lVar2 + 0x150)) {
    lVar3 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x158) + lVar3 * 8);
      if ((*(byte *)(lVar1 + 5) & 0x10) == 0) {
        if (*(code **)(lVar2 + 0xd8) != (code *)0x0) {
          (**(code **)(lVar2 + 0xd8))(lVar1,param_1);
        }
        if (*(code **)(lVar2 + 0x120) != (code *)0x0) {
          (**(code **)(lVar2 + 0x120))(lVar1,param_2);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(lVar2 + 0x150));
    if (1 < *(int *)(lVar2 + 0x150)) {
      lVar3 = 1;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x158) + lVar3 * 8);
        if ((*(byte *)(lVar1 + 5) & 0x10) == 0) {
          if (*(code **)(lVar2 + 0xe0) != (code *)0x0) {
            (**(code **)(lVar2 + 0xe0))(lVar1,param_1);
          }
          if (*(code **)(lVar2 + 0x128) != (code *)0x0) {
            (**(code **)(lVar2 + 0x128))(lVar1,param_2);
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(lVar2 + 0x150));
    }
  }
  return;
}

