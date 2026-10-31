/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3bd9 */

void __fastcall FUN_101e3bd9(int param_1,uint *param_2)

{
  if (*param_2 < *(uint *)(param_1 + 0x150)) {
    (**(code **)(param_1 + 0x1f8))(param_1,*param_2,param_2[1]);
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
    return;
  }
  return;
}

