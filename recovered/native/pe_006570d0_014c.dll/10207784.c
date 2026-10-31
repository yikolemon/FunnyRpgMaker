/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10207784 */

int __fastcall FUN_10207784(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  pbVar4 = (byte *)*param_1;
  iVar3 = 0;
  local_18 = pbVar4;
  if (pbVar4 < param_2) {
    iVar5 = 0;
    do {
      bVar1 = *local_18;
      if (bVar1 < 0x3c) {
        if (bVar1 == 0x25) {
          FUN_10207960();
        }
        else if (bVar1 == 0x28) {
          iVar2 = FUN_1020783d();
          goto LAB_102077f8;
        }
LAB_102077f6:
        iVar2 = 0;
      }
      else if (bVar1 == 0x3c) {
        iVar2 = FUN_102078d3();
      }
      else {
        if (bVar1 != 0x7d) {
          if (bVar1 == 0x7b) {
            iVar5 = iVar5 + 1;
          }
          goto LAB_102077f6;
        }
        iVar2 = 0;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          pbVar4 = local_18 + 1;
          iVar3 = 0;
          goto LAB_10207811;
        }
      }
LAB_102077f8:
      pbVar4 = local_18 + 1;
      local_18 = pbVar4;
    } while ((pbVar4 < param_2) && (iVar2 == 0));
    iVar3 = 3;
    if (iVar5 == 0) {
      iVar3 = iVar2;
    }
  }
LAB_10207811:
  *param_1 = pbVar4;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

