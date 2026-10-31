/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014ff46 */

undefined8 FUN_14014ff46(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1[1] + 0x3e0) + 0x10d0);
  if (lVar1 != 0) {
    lVar2 = FUN_1401299f6(*param_1,"pshinter");
    if (lVar2 != 0) {
      uVar3 = (**(code **)(lVar1 + 0x10))(lVar2);
      *(undefined8 *)(param_1[0x1e] + 0x28) = uVar3;
    }
  }
  return 0;
}

