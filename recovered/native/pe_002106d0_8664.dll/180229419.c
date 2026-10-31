/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180229419 */

undefined8 FUN_180229419(longlong param_1,uint param_2,uint param_3,ushort *param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    uVar3 = (param_2 - uVar1 >> 1) + uVar1;
    uVar2 = *(ushort *)(param_1 + 4 + (ulonglong)(uVar3 * 6));
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < param_3) {
      uVar1 = uVar3 + 1;
    }
    else {
      param_2 = uVar3;
      if (uVar2 <= param_3) {
        *param_4 = uVar2;
        uVar1 = *(uint *)(param_1 + 6 + (ulonglong)(uVar3 * 6));
        uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        *(uint *)(param_4 + 2) = uVar1;
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  } while (uVar1 < param_2);
  return 0;
}

