/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140493230 */

undefined8 FUN_140493230(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *(ushort *)(param_1 + uVar3 * 2);
      lVar2 = FUN_140483a64();
      if ((0xff < uVar1) || ((*(ushort *)(lVar2 + (ulonglong)uVar1 * 2) & 0x103) == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return 1;
}

