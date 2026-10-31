/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00493fc1 */

short __cdecl FUN_00493fc1(short param_1,uint *param_2)

{
  short *psVar1;
  uint uVar2;
  
  if (*param_2 < param_2[1] + 2) {
    if ((param_2[2] != 0) || (param_2[6] < 2)) {
      return -1;
    }
    *param_2 = param_2[1] + 2;
  }
  uVar2 = *param_2;
  psVar1 = (short *)(uVar2 - 2);
  *param_2 = (uint)psVar1;
  if ((param_2[3] >> 0xc & 1) == 0) {
    *psVar1 = param_1;
  }
  else if (*psVar1 != param_1) {
    *param_2 = uVar2;
    return -1;
  }
  param_2[2] = param_2[2] + 2;
  LOCK();
  param_2[3] = param_2[3] & 0xfffffff7;
  UNLOCK();
  LOCK();
  param_2[3] = param_2[3] | 1;
  UNLOCK();
  return param_1;
}

