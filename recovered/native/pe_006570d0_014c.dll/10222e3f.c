/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10222e3f */

int FUN_10222e3f(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 unaff_EBX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  local_18 = 0;
  if (param_1 == (int *)0x0) {
    iVar5 = 0x21;
  }
  else {
    iVar5 = 6;
    if ((param_3 != (int *)0x0 && param_2 != (int *)0x0) && (iVar5 = 0, param_2 != param_3)) {
      if (param_2[2] < 0) {
        uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),0 < param_3[2]);
      }
      else if (param_2[2] == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)param_3[2] >> 0x1f;
      }
      local_20 = *param_1;
      FUN_101c0017(local_20,param_3[3]);
      param_3[3] = 0;
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
      iVar4 = param_2[1];
      iVar1 = param_2[2];
      iVar3 = param_2[3];
      *param_3 = *param_2;
      param_3[1] = iVar4;
      param_3[2] = iVar1;
      param_3[3] = iVar3;
      if ((char)uVar2 != '\0') {
        param_3[2] = -param_3[2];
      }
      if (param_2[3] != 0) {
        iVar4 = -param_2[2];
        if (iVar4 < 0) {
          iVar4 = param_2[2];
        }
        local_1c = uVar2;
        iVar1 = FUN_101c2a50(local_20,iVar4,0,*param_3,0,&local_18);
        param_3[3] = iVar1;
        iVar5 = local_18;
        if (local_18 == 0) {
          if ((char)local_1c == '\0') {
            FUN_1025b2d0(iVar1,param_2[3],iVar4 * *param_2);
            iVar5 = local_18;
          }
          else {
            iVar3 = *param_3;
            if (iVar3 != 0) {
              iVar1 = iVar1 + (iVar3 + -1) * iVar4;
              iVar6 = param_2[3];
              local_20 = -iVar4;
              do {
                FUN_1025b2d0(iVar1,iVar6,iVar4);
                iVar6 = iVar6 + iVar4;
                iVar1 = iVar1 + local_20;
                iVar3 = iVar3 + -1;
                iVar5 = local_18;
              } while (iVar3 != 0);
            }
          }
        }
      }
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar5;
}

