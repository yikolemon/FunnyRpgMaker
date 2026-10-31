/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015a8d7 */

undefined8 FUN_14015a8d7(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar3 = 8;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    uVar2 = *(ushort *)(lVar1 + 0x62);
    if (*(uint *)(lVar1 + 8) <= (uint)*(ushort *)(lVar1 + 0x1a) + (uint)uVar2) {
      uVar3 = FUN_140128d2c(lVar1,1,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar2 = *(ushort *)(lVar1 + 0x62);
    }
    *(undefined8 *)(*(longlong *)(lVar1 + 0x68) + (ulonglong)uVar2 * 8) = *param_2;
    *(undefined1 *)(*(longlong *)(lVar1 + 0x70) + (ulonglong)uVar2) = 1;
    *(short *)(lVar1 + 0x62) = *(short *)(lVar1 + 0x62) + 1;
    uVar3 = 0;
  }
  return uVar3;
}

