/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401051e0 */

longlong FUN_1401051e0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) || (uVar2 = 4, param_3 != 0)) {
    uVar2 = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    iVar1 = FUN_140117998(*(longlong *)(param_1 + 0x80),param_2,uVar2,param_3 * 2);
    if (iVar1 == 0) {
      *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
      *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
      *(undefined4 **)(param_1 + 0x50) = (undefined4 *)(param_1 + 0x48);
      *(undefined1 *)(param_1 + 0x7c) = 1;
      *(undefined1 *)(param_1 + 0x72) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x74) = DAT_1401d4998;
      *(undefined8 *)(param_1 + 0x68) = 0;
      return param_1;
    }
  }
  return 0;
}

