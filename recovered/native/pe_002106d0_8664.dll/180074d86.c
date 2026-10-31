/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180074d86 */

uint FUN_180074d86(longlong *param_1)

{
  uint uVar1;
  
  if ((*(byte **)param_1[7] == (byte *)0x0) || (*(int *)param_1[10] < 1)) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    if (uVar1 == 0xffffffff) {
      uVar1 = 0xffffffff;
    }
    else {
      (**(code **)(*param_1 + 0x20))(param_1,uVar1);
    }
  }
  else {
    uVar1 = (uint)**(byte **)param_1[7];
  }
  return uVar1;
}

