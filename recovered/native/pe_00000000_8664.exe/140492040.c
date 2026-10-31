/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140492040 */

void FUN_140492040(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    uVar1 = *param_1;
    uVar3 = (uint)uVar1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar4 = (uint)uVar2;
    if ((uint)uVar1 != (uint)uVar2) {
      uVar3 = uVar1 + 0x20;
      if (0x19 < uVar1 - 0x41) {
        uVar3 = (uint)uVar1;
      }
      uVar4 = uVar2 + 0x20;
      if (0x19 < uVar2 - 0x41) {
        uVar4 = (uint)uVar2;
      }
    }
  } while ((uVar3 == uVar4) && (uVar3 != 0));
  return;
}

