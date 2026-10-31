/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e8a50 */

byte * FUN_1400e8a50(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  if (bVar1 < 0x20) {
    if (bVar1 < 0x18) {
      if (bVar1 < 0x10) {
        if (7 < bVar1) {
          FUN_1400e8c94(param_1 + 2,(uint)bVar1 * 0x100 + (uint)param_1[1] + -0x7ff);
          return param_1 + (ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100 + -0x7fd;
        }
        if (bVar1 == 4) {
          FUN_1400e8c49(~((ulonglong)param_1[3] | (ulonglong)param_1[1] << 0x10 |
                         (ulonglong)param_1[2] << 8) + DAT_140f308f0,
                        (ushort)(*(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8) + 1)
          ;
          return param_1 + 6;
        }
        if (uVar2 != 6) {
          if (uVar2 != 7) {
            return param_1;
          }
          FUN_1400e8c94(param_1 + 3,
                        (ushort)(*(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8) + 1)
          ;
          return param_1 + (ulonglong)param_1[2] + (ulonglong)param_1[1] * 0x100 + 4;
        }
        uVar2 = (uint)param_1[4];
        uVar3 = ~((ulonglong)param_1[3] | (ulonglong)param_1[1] << 0x10 | (ulonglong)param_1[2] << 8
                 );
      }
      else {
        uVar2 = (uint)(ushort)(*(ushort *)(param_1 + 3) << 8 | *(ushort *)(param_1 + 3) >> 8);
        uVar3 = -(ulonglong)
                 (((uint)param_1[1] * 0x100 + ((uint)param_1[2] | (uint)bVar1 << 0x10)) - 0xfffff);
      }
      FUN_1400e8c49(DAT_140f308f0 + uVar3,uVar2 + 1);
      param_1 = param_1 + 5;
    }
    else {
      FUN_1400e8c49(DAT_140f308f0 -
                    (ulonglong)
                    (((uint)param_1[1] * 0x100 + ((uint)param_1[2] | (uint)bVar1 << 0x10)) -
                    0x17ffff),param_1[3] + 1);
      param_1 = param_1 + 4;
    }
  }
  else if ((char)bVar1 < '\0') {
    FUN_1400e8c49(~(ulonglong)param_1[1] + DAT_140f308f0,uVar2 - 0x7f);
    param_1 = param_1 + 2;
  }
  else if (bVar1 < 0x40) {
    FUN_1400e8c94(param_1 + 1,uVar2 - 0x1f);
    param_1 = param_1 + ((ulonglong)*param_1 - 0x1e);
  }
  else {
    FUN_1400e8c49(DAT_140f308f0 - (ulonglong)(((uint)bVar1 * 0x100 + (uint)param_1[1]) - 0x3fff),
                  param_1[2] + 1);
    param_1 = param_1 + 3;
  }
  return param_1;
}

