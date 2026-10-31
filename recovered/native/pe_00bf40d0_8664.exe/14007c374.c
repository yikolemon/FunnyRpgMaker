/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007c374 */

int FUN_14007c374(byte *param_1)

{
  int iVar1;
  
  FUN_14007c44f((undefined4 *)param_1,*(uint *)(param_1 + 0x98) & 0x100);
  param_1[0x3c] = (*(uint *)(param_1 + 0x98) & 0x20) == 0 | (byte)*(uint *)(param_1 + 0x98) >> 2 & 6
  ;
  *(undefined1 **)(param_1 + 0xc0) = &LAB_14007c4a3;
  *(code **)(param_1 + 200) = FUN_14007c4c3;
  *(undefined1 **)(param_1 + 0xd0) = &LAB_14007c580;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_14007c606;
  iVar1 = FUN_14007c615(param_1,0,*(int *)(param_1 + 0xa0));
  if (iVar1 == 0) {
    if ((param_1[0x99] & 2) == 0) {
      *(code **)(param_1 + 0xc0) = FUN_1400074a8;
      *(code **)(param_1 + 200) = FUN_14007c6f4;
      *(undefined1 **)(param_1 + 0xd0) = &LAB_14007c79b;
      *(code **)(param_1 + 0xd8) = FUN_1400074a8;
      iVar1 = FUN_14007c615(param_1,1,*(int *)(param_1 + 0xa4));
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

