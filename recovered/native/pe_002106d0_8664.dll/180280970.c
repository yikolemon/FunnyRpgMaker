/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180280970 */

void FUN_180280970(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_18042116c != 0) {
    FUN_1802809a0(param_1,param_2,0);
    return;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
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
  FUN_1802808b0();
  return;
}

