/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100faa51 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100faa51(uint *param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = (byte)param_2;
  if (param_2 < 0x80) {
    *(byte *)param_1 = bVar2;
    iVar1 = 1;
  }
  else if (param_2 < 0x800) {
    *(byte *)param_1 = (byte)(param_2 >> 6) | 0xc0;
    *(byte *)((int)param_1 + 1) = bVar2 & 0x3f | 0x80;
    iVar1 = 2;
  }
  else if (param_2 < 0x10000) {
    *(byte *)param_1 = (byte)(param_2 >> 0xc) | 0xe0;
    *(byte *)((int)param_1 + 1) = (byte)(param_2 >> 6) & 0x3f | 0x80;
    *(byte *)((int)param_1 + 2) = bVar2 & 0x3f | 0x80;
    iVar1 = 3;
  }
  else {
    iVar1 = 0;
    if (param_2 < 0x110000) {
      *param_1 = (param_2 << 0x18 |
                 (param_2 & 0x3fc0) << 10 | param_2 >> 4 & 0xff00 | param_2 >> 0x12) &
                 (uint)DAT_102b89d0 | (uint)DAT_102b89e0;
      iVar1 = 4;
    }
  }
  *(undefined1 *)((int)param_1 + iVar1) = 0;
  return;
}

