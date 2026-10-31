/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00492980 */

float10 __cdecl FUN_00492980(double param_1)

{
  uint uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined8 local_c;
  
  local_c._4_4_ = (uint)((ulonglong)param_1 >> 0x20);
  uVar1 = local_c._4_4_ >> 0x14 & 0x7ff;
  if (0x432 < uVar1) {
    return (float10)param_1;
  }
  if (uVar1 < 0x3ff) {
    if (uVar1 < 0x3fe) {
      local_c = (double)(((ulonglong)local_c._4_4_ & 0x80000000) << 0x20);
      return (float10)local_c;
    }
    local_c = (double)(((ulonglong)local_c._4_4_ & 0xbff00000) << 0x20 | 0x3ff0000000000000);
    return (float10)local_c;
  }
  uVar2 = (ulonglong)param_1 >> (ulonglong)(0x432 - uVar1);
  local_c._0_4_ = (uint)uVar2;
  local_c._4_4_ = (uint)(uVar2 >> 0x20);
  dVar3 = (double)__allshl((byte)(0x432 - uVar1),
                           local_c._4_4_ + CARRY4((uint)local_c & 1,(uint)local_c));
  return (float10)dVar3;
}

