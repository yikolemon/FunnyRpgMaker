/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401558c7 */

undefined8 FUN_1401558c7(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1[1] + 0x1d8);
  if (lVar1 != 0) {
    lVar2 = FUN_1401299f6(*param_1,"pshinter");
    if (lVar2 != 0) {
      uVar3 = (**(code **)(lVar1 + 8))(lVar2);
      *(undefined8 *)(param_1[0x1e] + 0x28) = uVar3;
    }
  }
  return 0;
}

