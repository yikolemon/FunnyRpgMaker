/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488fdd */

undefined4 * __thiscall FUN_00488fdd(void *this,undefined4 *param_1)

{
  FUN_00495f00(*(LPVOID *)this);
  *(undefined4 *)this = 0;
  *(undefined4 *)this = *param_1;
  *param_1 = 0;
  return this;
}

