/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022ed34 */

undefined8 FUN_18022ed34(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_18022ee0f(param_1,*(uint *)(param_1 + 0x98) & 0x100);
  *(byte *)(param_1 + 0x3c) =
       (*(uint *)(param_1 + 0x98) & 0x20) == 0 | (byte)*(uint *)(param_1 + 0x98) >> 2 & 6;
  *(undefined1 **)(param_1 + 0xc0) = &LAB_18022ee63;
  *(code **)(param_1 + 200) = FUN_18022ee83;
  *(undefined1 **)(param_1 + 0xd0) = &LAB_18022ef40;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_18022efc6;
  uVar1 = FUN_18022efd5(param_1,0,*(undefined4 *)(param_1 + 0xa0));
  if ((int)uVar1 == 0) {
    if ((*(byte *)(param_1 + 0x99) & 2) == 0) {
      *(code **)(param_1 + 0xc0) = FUN_18004187e;
      *(code **)(param_1 + 200) = FUN_18022f0b4;
      *(undefined1 **)(param_1 + 0xd0) = &LAB_18022f15b;
      *(code **)(param_1 + 0xd8) = FUN_18004187e;
      uVar1 = FUN_18022efd5(param_1,1,*(undefined4 *)(param_1 + 0xa4));
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

