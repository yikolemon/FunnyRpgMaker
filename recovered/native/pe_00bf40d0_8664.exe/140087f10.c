/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140087f10 */

longlong FUN_140087f10(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  if ((param_2 != 0) || (iVar2 = 4, param_3 != 0)) {
    iVar2 = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar1 = FUN_14009b230(*(longlong *)(param_1 + 0x80),param_2,iVar2,param_3 * 2);
    if ((int)uVar1 == 0) {
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
      *(undefined8 *)(param_1 + 0x74) = DAT_14013cca0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      return param_1;
    }
  }
  return 0;
}

