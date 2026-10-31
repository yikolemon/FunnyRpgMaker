/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045eefc */

int __fastcall FUN_0045eefc(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  pbVar4 = (byte *)*param_1;
  iVar3 = 0;
  local_18 = pbVar4;
  if (pbVar4 < param_2) {
    iVar5 = 0;
    do {
      bVar1 = *local_18;
      if (bVar1 < 0x3c) {
        if (bVar1 == 0x25) {
          FUN_0045f0d8(&local_18,(char *)param_2);
        }
        else if (bVar1 == 0x28) {
          iVar2 = FUN_0045efb5((uint *)&local_18,param_2);
          goto LAB_0045ef70;
        }
LAB_0045ef6e:
        iVar2 = 0;
      }
      else if (bVar1 == 0x3c) {
        iVar2 = FUN_0045f04b((int *)&local_18,param_2);
      }
      else {
        if (bVar1 != 0x7d) {
          if (bVar1 == 0x7b) {
            iVar5 = iVar5 + 1;
          }
          goto LAB_0045ef6e;
        }
        iVar2 = 0;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          pbVar4 = local_18 + 1;
          iVar3 = 0;
          goto LAB_0045ef89;
        }
      }
LAB_0045ef70:
      pbVar4 = local_18 + 1;
      local_18 = pbVar4;
    } while ((pbVar4 < param_2) && (iVar2 == 0));
    iVar3 = 3;
    if (iVar5 == 0) {
      iVar3 = iVar2;
    }
  }
LAB_0045ef89:
  *param_1 = pbVar4;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return iVar3;
}

