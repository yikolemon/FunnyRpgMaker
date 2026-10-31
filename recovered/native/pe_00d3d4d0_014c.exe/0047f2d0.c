/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f2d0 */

int * __thiscall FUN_0047f2d0(void *this,int param_1)

{
  *(int *)this = param_1;
  if (param_1 == 0) {
    FUN_0048feea(this);
    return this;
  }
  if (param_1 < 8) {
    FUN_004843d0((LPCRITICAL_SECTION)(&DAT_0051ba68 + param_1 * 0x18));
  }
  return this;
}

