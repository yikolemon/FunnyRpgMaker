/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180280168 */

undefined8 FUN_180280168(ushort *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  *param_2 = 0;
  uVar1 = *param_1;
  uVar3 = (uint)uVar1;
  if (((uVar1 - 0x41 < 0x1a) || (uVar1 - 0x61 < 0x1a)) && (param_1[1] == 0x3a)) {
    if (param_1[2] == 0) {
      FUN_18027e6b4(2);
      return 0;
    }
    if (uVar1 - 0x41 < 0x1a) {
      uVar3 = uVar1 + 0x20;
    }
    iVar2 = uVar3 - 0x60;
  }
  else {
    iVar2 = FUN_180298774();
  }
  *param_2 = iVar2;
  return 1;
}

