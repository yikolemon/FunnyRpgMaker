/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401316d4 */

undefined8 FUN_1401316d4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_2 + 0x68);
  iVar2 = FUN_14012b845(param_2,0x756e6963);
  if (iVar2 == 0) {
    FUN_1401360d9(param_1,param_2);
    iVar2 = FUN_14013643f(param_1,param_2);
    uVar3 = 0xffffffff;
    if (iVar2 != 0) goto LAB_140131731;
    FUN_140133126(param_1);
  }
  FUN_140136f9e(param_1 + 0x38,param_1);
  uVar3 = 0;
LAB_140131731:
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  return uVar3;
}

