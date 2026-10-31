/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ff0f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ff0f0(uint *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = (byte)param_2;
  if (param_2 < 0x80) {
    *(byte *)param_1 = bVar2;
    uVar1 = 1;
  }
  else if (param_2 < 0x800) {
    *(byte *)param_1 = (byte)(param_2 >> 6) | 0xc0;
    *(byte *)((longlong)param_1 + 1) = bVar2 & 0x3f | 0x80;
    uVar1 = 2;
  }
  else if (param_2 < 0x10000) {
    *(byte *)param_1 = (byte)(param_2 >> 0xc) | 0xe0;
    *(byte *)((longlong)param_1 + 1) = (byte)(param_2 >> 6) & 0x3f | 0x80;
    *(byte *)((longlong)param_1 + 2) = bVar2 & 0x3f | 0x80;
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
    if (param_2 < 0x110000) {
      *param_1 = (param_2 << 0x18 |
                 (param_2 & 0x3fc0) << 10 | param_2 >> 4 & 0xff00 | param_2 >> 0x12) &
                 (uint)DAT_1802de580 | (uint)DAT_1802de590;
      uVar1 = 4;
    }
  }
  *(undefined1 *)((longlong)param_1 + (ulonglong)uVar1) = 0;
  return;
}

