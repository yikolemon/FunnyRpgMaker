/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180225aa9 */

void FUN_180225aa9(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    lVar4 = *(longlong *)(param_1 + 0x2e0);
    (**(code **)(lVar4 + 0x80))(param_1,lVar1 + 0x68);
    (**(code **)(lVar4 + 0x78))(param_1,lVar1 + 0x48);
    FUN_1801ced57(uVar3,lVar1 + 0x80);
    FUN_1801c9b65(uVar2,lVar1);
    return;
  }
  return;
}

