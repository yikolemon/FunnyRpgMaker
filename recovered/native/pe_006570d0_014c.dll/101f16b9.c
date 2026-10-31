/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f16b9 */

int __fastcall FUN_101f16b9(undefined4 param_1,short *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  *param_2 = 0;
  *param_3 = 0;
  sVar1 = FUN_101c4692(param_1,&local_18);
  iVar3 = local_18;
  if (local_18 == 0) {
    iVar3 = 0;
    if ((ushort)(sVar1 + 0x7fffU) < 2) {
      uVar2 = FUN_101c4ecd(param_1,&local_18);
      iVar3 = local_18;
      if (local_18 == 0) {
        *param_3 = uVar2;
        iVar3 = 0;
      }
    }
    *param_2 = sVar1;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

