/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102078d3 */

undefined4 __fastcall FUN_102078d3(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = (byte *)(*param_1 + 1);
  while (((local_14 < param_2 && (FUN_10207708(), local_14 < param_2)) &&
         ((bVar1 = *local_14, (byte)(bVar1 - 0x30) < 10 ||
          ((bVar1 - 0x41 < 6 || (bVar1 - 0x61 < 6))))))) {
    local_14 = local_14 + 1;
  }
  if ((param_2 <= local_14) || (uVar2 = 3, pbVar3 = local_14, *local_14 == 0x3e)) {
    pbVar3 = local_14 + 1;
    uVar2 = 0;
  }
  *param_1 = (int)pbVar3;
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

