/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017e420 */

undefined8 FUN_14017e420(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_14017e4fb(param_1,*(uint *)(param_1 + 0x98) & 0x100);
  *(byte *)(param_1 + 0x3c) =
       (*(uint *)(param_1 + 0x98) & 0x20) == 0 | (byte)*(uint *)(param_1 + 0x98) >> 2 & 6;
  *(undefined1 **)(param_1 + 0xc0) = &LAB_14017e54f;
  *(code **)(param_1 + 200) = FUN_14017e56f;
  *(undefined1 **)(param_1 + 0xd0) = &LAB_14017e62c;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_14017e6b2;
  uVar1 = FUN_14017e6c1(param_1,0,*(undefined4 *)(param_1 + 0xa0));
  if ((int)uVar1 == 0) {
    if ((*(byte *)(param_1 + 0x99) & 2) == 0) {
      *(code **)(param_1 + 0xc0) = FUN_1400151ba;
      *(code **)(param_1 + 200) = FUN_14017e7a0;
      *(undefined1 **)(param_1 + 0xd0) = &LAB_14017e847;
      *(code **)(param_1 + 0xd8) = FUN_1400151ba;
      uVar1 = FUN_14017e6c1(param_1,1,*(undefined4 *)(param_1 + 0xa4));
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

