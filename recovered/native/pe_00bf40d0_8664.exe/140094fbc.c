/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140094fbc */

undefined8 FUN_140094fbc(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  undefined8 in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *(ushort *)(param_1 + uVar3 * 2);
      lVar2 = FUN_14008ec04();
      in_RAX = 0;
      if ((0xff < uVar1) || ((*(ushort *)(lVar2 + (ulonglong)uVar1 * 2) & 0x103) == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

