/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100998cd */

void FUN_100998cd(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}

