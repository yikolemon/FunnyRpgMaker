/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019da0c */

undefined8 FUN_14019da0c(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *(ushort *)(param_1 + uVar3 * 2);
      puVar2 = __pctype_func();
      if ((0xff < uVar1) || ((puVar2[uVar1] & 0x103) == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return 1;
}

