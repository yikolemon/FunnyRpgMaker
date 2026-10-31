/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10207b88 */

int __fastcall FUN_10207b88(undefined4 *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined2 extraout_var;
  byte *pbVar2;
  int iVar3;
  uint local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_18 = (byte *)*param_1;
  iVar3 = 0;
  pbVar2 = local_18;
  local_1c = param_1;
  if (param_2 <= local_18) goto LAB_10207c57;
  if (*local_18 == 0x5b) {
    local_24 = 0x5d;
LAB_10207bcd:
    local_18 = local_18 + 1;
    local_20 = 0;
  }
  else {
    if (*local_18 == 0x7b) {
      local_24 = 0x7d;
      goto LAB_10207bcd;
    }
    local_24 = 0;
    local_20 = CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  iVar3 = 0;
  do {
    pbVar2 = local_18;
    if ((param_2 <= local_18) ||
       (FUN_10207708(), pbVar1 = local_18, pbVar2 = local_18, param_2 <= local_18)) break;
    if (local_24 == *local_18) {
      pbVar2 = local_18 + 1;
      break;
    }
    if (param_3 <= iVar3 && param_4 != 0) break;
    FUN_10206a7e(0);
    if (param_4 != 0) {
      *(undefined2 *)(param_4 + iVar3 * 2) = extraout_var;
    }
    pbVar2 = local_18;
    if (pbVar1 == local_18) {
      iVar3 = -1;
      break;
    }
    iVar3 = iVar3 + 1;
  } while ((char)local_20 == '\0');
LAB_10207c57:
  *local_1c = pbVar2;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

