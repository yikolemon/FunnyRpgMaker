/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235a80 */

undefined4 * __thiscall FUN_10235a80(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  param_1[1] = 1;
  param_1[2] = 1;
  *param_1 = _anon_6E02EFE5::_ExceptionPtr_normal::vftable;
  param_1[0x17] = 0;
  param_1[3] = *param_2;
  uVar1 = param_2[1];
  param_1[5] = 0;
  param_1[4] = uVar1 | 1;
  param_1[6] = 0;
  uVar1 = param_2[4];
  param_1[7] = uVar1;
  if (0xf < uVar1) {
    uVar1 = 0xf;
  }
  FUN_1025b2d0(param_1 + 8,param_2 + 5,uVar1 * 4);
  _memset(param_1 + uVar1 + 8,0,uVar1 * -4 + 0x3c);
  return param_1;
}

