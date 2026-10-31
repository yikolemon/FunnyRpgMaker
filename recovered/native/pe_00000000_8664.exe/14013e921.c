/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013e921 */

void FUN_14013e921(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  if (uVar1 < *(ushort *)(param_1 + 0xb0)) {
    iVar2 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)uVar1 * 8)
                       ,*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 4 + (ulonglong)uVar1 * 8));
    (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0xb0,uVar1,*(int *)(param_2 + 2) - iVar2);
    if (*(short *)(param_1 + 0x196) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)uVar1 * 8);
    }
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

