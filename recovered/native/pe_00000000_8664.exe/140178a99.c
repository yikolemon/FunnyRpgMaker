/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140178a99 */

undefined8 FUN_140178a99(longlong param_1,uint param_2,uint param_3,ushort *param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = (param_2 - uVar1 >> 1) + uVar1;
      uVar4 = (ulonglong)(uVar3 * 6);
      uVar2 = *(ushort *)(param_1 + uVar4) << 8 | *(ushort *)(param_1 + uVar4) >> 8;
      if (uVar2 < param_3) {
        uVar1 = uVar3 + 1;
      }
      else {
        param_2 = uVar3;
        if (uVar2 <= param_3) {
          *param_4 = uVar2;
          uVar2 = *(ushort *)(param_1 + 2 + uVar4);
          param_4[1] = uVar2 << 8 | uVar2 >> 8;
          uVar2 = *(ushort *)(param_1 + 4 + uVar4);
          param_4[2] = uVar2 << 8 | uVar2 >> 8;
          return CONCAT71((uint7)(byte)uVar2,1);
        }
      }
    } while (uVar1 < param_2);
  }
  return 0;
}

