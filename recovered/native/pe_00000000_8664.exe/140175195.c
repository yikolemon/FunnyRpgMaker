/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140175195 */

void FUN_140175195(longlong param_1)

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
    FUN_14012dd2b(uVar3,lVar1 + 0x80);
    FUN_140128b39(uVar2,lVar1);
    return;
  }
  return;
}

