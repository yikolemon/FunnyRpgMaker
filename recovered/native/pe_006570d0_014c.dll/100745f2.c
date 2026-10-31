/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100745f2 */

uint __fastcall FUN_100745f2(int *param_1)

{
  uint uVar1;
  
  if ((*(byte **)param_1[7] == (byte *)0x0) || (*(int *)param_1[0xb] < 1)) {
    uVar1 = (**(code **)(*param_1 + 0x1c))();
    if (uVar1 == 0xffffffff) {
      uVar1 = 0xffffffff;
    }
    else {
      (**(code **)(*param_1 + 0x10))(uVar1);
    }
  }
  else {
    uVar1 = (uint)**(byte **)param_1[7];
  }
  return uVar1;
}

