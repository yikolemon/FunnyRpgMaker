/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234510 */

void __thiscall FUN_10234510(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  *(bool *)(param_1 + 0x48) = param_3 == 1;
  *(undefined4 **)(param_1 + 0xc) = (undefined4 *)(param_1 + 4);
  *(undefined4 **)(param_1 + 0x10) = (undefined4 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined4 **)(param_1 + 0x20) = (undefined4 *)(param_1 + 0x18);
  *(undefined4 **)(param_1 + 0x1c) = (undefined4 *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x2c) = (undefined4 *)(param_1 + 0x24);
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  uVar1 = DAT_1039d748;
  *(undefined4 *)(param_1 + 0x40) = DAT_1039d744;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

