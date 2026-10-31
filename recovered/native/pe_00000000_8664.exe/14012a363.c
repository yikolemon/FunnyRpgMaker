/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012a363 */

undefined8 FUN_14012a363(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = 0x14;
  if (param_1 != (ushort *)0x0) {
    uVar1 = param_1[1];
    uVar2 = *param_1;
    if (uVar1 == 0 && uVar2 == 0) {
      return 0;
    }
    if ((uVar1 != 0) && (uVar2 != 0)) {
      uVar5 = 0;
      uVar7 = 0xffffffff;
      do {
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0xc) + uVar5 * 2);
        if (uVar1 <= uVar3) {
          return uVar4;
        }
        uVar6 = (uint)uVar3;
        if ((int)uVar6 <= (int)uVar7) {
          return uVar4;
        }
        uVar5 = uVar5 + 1;
        uVar7 = uVar6;
      } while (uVar2 != uVar5);
      if (uVar1 - 1 == uVar6) {
        return 0;
      }
    }
  }
  return uVar4;
}

