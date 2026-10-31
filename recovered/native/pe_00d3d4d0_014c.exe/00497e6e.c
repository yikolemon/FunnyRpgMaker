/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497e6e */

wchar_t * __cdecl FUN_00497e6e(int param_1)

{
  if (param_1 == 0x3a4) {
    return (wchar_t *)PTR_u_ja_JP_004f99c0;
  }
  if (param_1 == 0x3a8) {
    return (wchar_t *)PTR_u_zh_CN_004f99c4;
  }
  if (param_1 == 0x3b5) {
    return (wchar_t *)PTR_u_ko_KR_004f99c8;
  }
  if (param_1 != 0x3b6) {
    return (wchar_t *)0x0;
  }
  return (wchar_t *)PTR_u_zh_TW_004f99cc;
}

