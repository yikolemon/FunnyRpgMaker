/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00491a1a */

undefined8 __cdecl FUN_00491a1a(short *param_1,short *param_2,char param_3)

{
  bool bVar1;
  uint local_c;
  int iStack_8;
  
  if ((param_3 != '\x01') && (param_3 != '\x02')) {
    iStack_8 = 0;
    local_c = 0;
    for (; param_1 != param_2; param_1 = (short *)((int)param_1 + 1)) {
      if ((char)*param_1 == '\n') {
        bVar1 = 0xfffffffe < local_c;
        local_c = local_c + 1;
        iStack_8 = iStack_8 + (uint)bVar1;
      }
    }
    return CONCAT44(iStack_8,local_c);
  }
  iStack_8 = 0;
  local_c = 0;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (*param_1 == 10) {
      bVar1 = 0xfffffffe < local_c;
      local_c = local_c + 1;
      iStack_8 = iStack_8 + (uint)bVar1;
    }
  }
  return CONCAT44(iStack_8 << 1 | local_c >> 0x1f,local_c * 2);
}

