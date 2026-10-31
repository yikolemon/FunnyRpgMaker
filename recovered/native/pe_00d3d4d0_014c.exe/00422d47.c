/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00422d47 */

int __fastcall FUN_00422d47(int *param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  uVar2 = FUN_004209e8(param_1,&local_18);
  iVar3 = local_18;
  if (local_18 == 0) {
    if (uVar2 == param_2) {
      FUN_004209e8(param_1,&local_18);
      iVar3 = local_18;
      if (((local_18 != 0) || (iVar3 = FUN_004206ea((int)param_1,0x10), iVar3 != 0)) ||
         (uVar1 = FUN_0042070a(param_1,&local_18), iVar3 = local_18, local_18 != 0))
      goto LAB_00422e12;
      if (uVar1 != 0) {
        uVar2 = (uint)uVar1;
        do {
          uVar4 = FUN_004209e8(param_1,&local_18);
          iVar3 = local_18;
          if (local_18 != 0) goto LAB_00422e12;
          if (uVar4 == 2) {
            uVar4 = FUN_004209e8(param_1,&local_18);
            if ((local_18 == 0) && (FUN_004209e8(param_1,&local_18), local_18 == 0)) {
              *param_3 = uVar4;
              iVar3 = 0;
              goto LAB_00422e12;
            }
          }
          else {
            iVar3 = FUN_004206ea((int)param_1,8);
            local_18 = iVar3;
            if (iVar3 != 0) goto LAB_00422e12;
          }
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    iVar3 = 2;
  }
LAB_00422e12:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return iVar3;
}

