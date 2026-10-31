/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180280720 */

void FUN_180280720(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_18042116c != 0) {
    FUN_180280790(param_1,param_2,0);
    return;
  }
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      param_1 = param_1 + 1;
      bVar2 = *param_2;
      uVar4 = (uint)bVar2;
      param_2 = param_2 + 1;
      if ((uint)bVar1 != (uint)bVar2) {
        uVar3 = bVar1 + 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar3 = (uint)bVar1;
        }
        if (bVar2 - 0x41 < 0x1a) {
          uVar4 = bVar2 + 0x20;
        }
      }
      if (uVar3 != uVar4) break;
      if (uVar3 == 0) {
        return;
      }
    }
    return;
  }
  FUN_1802808b0();
  return;
}

