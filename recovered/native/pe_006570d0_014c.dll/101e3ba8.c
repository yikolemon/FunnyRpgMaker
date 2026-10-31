/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3ba8 */

void __fastcall FUN_101e3ba8(int param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_2 < (uint)*(ushort *)(param_1 + 0x1b0)) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x1b4) + *param_2 * 4);
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

