/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016bcc0 */

ulonglong FUN_14016bcc0(longlong param_1,uint param_2)

{
  short sVar1;
  ulonglong uVar2;
  
  if ((param_2 < 0x100) && (*(longlong *)(param_1 + 0x4d8) != 0)) {
    sVar1 = (*(code *)**(undefined8 **)(param_1 + 0x10e0))(param_2);
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar2 = 0;
      do {
        if (*(short *)(*(longlong *)(param_1 + 0x4d8) + uVar2 * 2) == sVar1) {
          return uVar2 & 0xffffffff;
        }
        uVar2 = uVar2 + 1;
      } while (*(int *)(param_1 + 0x20) != (int)uVar2);
    }
  }
  return 0xffffffff;
}

