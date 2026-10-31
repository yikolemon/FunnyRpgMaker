/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b726e */

undefined8 * __thiscall FUN_100b726e(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  uVar1 = *param_3;
  *(undefined4 *)((int)param_3 + 4) = 0;
  *(undefined4 *)param_3 = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  uVar2 = *(undefined4 *)((int)param_3 + 0x14);
  *(undefined4 *)((int)param_3 + 0x14) = 0;
  uVar1 = *(undefined8 *)((int)param_3 + 0xc);
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined4 *)((int)param_3 + 0xc) = 0;
  *(undefined8 *)((int)param_1 + 0xc) = uVar1;
  *(undefined4 *)((int)param_1 + 0x14) = uVar2;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}

