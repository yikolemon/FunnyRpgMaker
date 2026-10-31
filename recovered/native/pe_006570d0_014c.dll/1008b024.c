/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008b024 */

void __thiscall
FUN_1008b024(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = param_2[4];
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  *(undefined4 **)((int)param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)param_1 = 0xc0000000;
  *(undefined4 *)((int)param_1 + 4) = 8;
  uVar1 = param_3[4];
  if (7 < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  *(undefined4 **)((int)param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((int)param_1 + 4) = 0xc0000008;
  *(undefined4 *)(param_1 + 1) = 0x10;
  uVar1 = param_4[4];
  if (7 < (uint)param_4[5]) {
    param_4 = (undefined4 *)*param_4;
  }
  *(undefined4 **)((int)param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = 0xc0000010;
  return;
}

