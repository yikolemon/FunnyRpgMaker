/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180236f79 */

undefined8 FUN_180236f79(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_180237138();
  uVar2 = 0xfffffffe;
  if (iVar1 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(lVar3 + 0x40) != 0) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(longlong *)(lVar3 + 0x40));
      lVar3 = *(longlong *)(param_1 + 0x28);
    }
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),lVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

