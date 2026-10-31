/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2b76 */

void __thiscall FUN_100f2b76(int param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x75) = 1;
  if (param_3 != '\0') {
    uVar1 = *param_2;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    FUN_1022d470(param_1 + 0x44,uVar1,param_1 + 0x70);
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  FUN_1022c7a0(param_1 + 0x44);
  return;
}

