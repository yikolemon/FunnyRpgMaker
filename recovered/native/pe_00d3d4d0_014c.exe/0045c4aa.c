/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045c4aa */

void __cdecl FUN_0045c4aa(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint unaff_ESI;
  byte *local_14;
  
  local_14 = (byte *)(DAT_0050e8c0 ^ (uint)&stack0xffffffe8);
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_0045c20e(param_1);
  local_14 = (byte *)*param_1;
  pbVar4 = (byte *)param_1[2];
  if (pbVar4 <= local_14) goto LAB_0045c5c1;
  bVar1 = *local_14;
  if (bVar1 == 0x7b) {
    param_2[2] = 3;
    *param_2 = local_14;
    iVar2 = FUN_0045eefc(&local_14,pbVar4);
LAB_0045c57b:
    pbVar3 = local_14;
    if (iVar2 == 0) goto LAB_0045c5ae;
LAB_0045c5a9:
    local_14 = pbVar3;
    pbVar4 = (byte *)param_2[1];
  }
  else {
    if (bVar1 == 0x5b) {
      param_2[2] = 3;
      *param_2 = local_14;
      *param_1 = local_14 + 1;
      FUN_0045c20e(param_1);
      pbVar3 = (byte *)*param_1;
      if (pbVar3 < pbVar4) {
        iVar2 = 1;
        do {
          if (param_1[3] != 0) break;
          if (*pbVar3 == 0x5d) {
            iVar5 = iVar2 + -1;
            if (iVar5 == 0 || iVar2 < 1) {
              local_14 = pbVar3 + 1;
              param_2[1] = local_14;
              goto LAB_0045c5bc;
            }
          }
          else {
            iVar5 = iVar2;
            if (*pbVar3 == 0x5b) {
              iVar5 = iVar2 + 1;
            }
          }
          FUN_0045c21a(param_1);
          FUN_0045c20e(param_1);
          pbVar3 = (byte *)*param_1;
          iVar2 = iVar5;
        } while (pbVar3 < pbVar4);
      }
      goto LAB_0045c5a9;
    }
    if (bVar1 == 0x28) {
      param_2[2] = 2;
      *param_2 = local_14;
      iVar2 = FUN_0045efb5((uint *)&local_14,pbVar4);
      goto LAB_0045c57b;
    }
    *param_2 = local_14;
    param_2[2] = (uint)(*local_14 == 0x2f) * 3 + 1;
    FUN_0045c21a(param_1);
    local_14 = (byte *)*param_1;
    pbVar3 = local_14;
    if (param_1[3] != 0) goto LAB_0045c5a9;
LAB_0045c5ae:
    param_2[1] = local_14;
    pbVar4 = local_14;
  }
  if (pbVar4 == (byte *)0x0) {
    *param_2 = 0;
    param_2[2] = 0;
  }
LAB_0045c5bc:
  *param_1 = local_14;
LAB_0045c5c1:
  if (DAT_0050e8c0 != (unaff_ESI ^ (uint)&local_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(unaff_ESI ^ (uint)&local_14);
  }
  return;
}

