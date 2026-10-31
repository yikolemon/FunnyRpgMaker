/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f150 */

int __fastcall FUN_0045f150(undefined4 *param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  local_18 = (byte *)*param_1;
  iVar4 = 0;
  pbVar3 = local_18;
  local_1c = param_1;
  if (param_2 <= local_18) goto LAB_0045f21d;
  if (*local_18 == 0x5b) {
    local_24 = 0x5d;
LAB_0045f195:
    local_18 = local_18 + 1;
    local_20 = 0;
  }
  else {
    if (*local_18 == 0x7b) {
      local_24 = 0x7d;
      goto LAB_0045f195;
    }
    local_24 = 0;
    local_20 = CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  iVar4 = 0;
  do {
    pbVar3 = local_18;
    if ((param_2 <= local_18) ||
       (FUN_0045ee80(&local_18,param_2), pbVar1 = local_18, pbVar3 = local_18, param_2 <= local_18))
    break;
    if (local_24 == *local_18) {
      pbVar3 = local_18 + 1;
      break;
    }
    if (param_3 <= iVar4 && param_4 != 0) break;
    uVar2 = FUN_0045e1f6((uint *)&local_18,param_2,param_5);
    if (param_4 != 0) {
      *(uint *)(param_4 + iVar4 * 4) = uVar2;
    }
    pbVar3 = local_18;
    if (pbVar1 == local_18) {
      iVar4 = -1;
      break;
    }
    iVar4 = iVar4 + 1;
  } while ((char)local_20 == '\0');
LAB_0045f21d:
  *local_1c = pbVar3;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return iVar4;
}

