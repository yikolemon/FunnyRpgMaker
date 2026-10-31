/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3c03 */

void __fastcall FUN_101e3c03(int param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_2 < *(uint *)(param_1 + 0x150)) {
    uVar1 = (**(code **)(param_1 + 500))(param_1,*param_2);
  }
  else {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
      return;
    }
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return;
}

