/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401313f0 */

undefined8 FUN_1401313f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_2 + 0x68);
  iVar2 = FUN_14012b845(param_2,0x756e6963);
  if (iVar2 == 0) {
    FUN_140132967(param_1,param_2);
    FUN_140132cbb(param_1,param_2);
    FUN_140133126(param_1);
  }
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  return 0;
}

