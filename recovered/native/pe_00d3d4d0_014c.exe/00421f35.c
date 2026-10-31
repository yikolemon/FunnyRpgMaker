/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421f35 */

int __fastcall
FUN_00421f35(int *param_1,int param_2,uint *param_3,uint *param_4,undefined1 *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  uVar2 = FUN_004209e8(param_1,&local_18);
  iVar3 = local_18;
  if ((local_18 == 0) && (iVar3 = 2, uVar2 == 0x74797031)) {
    uVar1 = FUN_0042070a(param_1,&local_18);
    iVar3 = local_18;
    if (local_18 == 0) {
      local_20 = CONCAT22(local_20._2_2_,uVar1);
      iVar3 = FUN_004206ea((int)param_1,6);
      if (iVar3 == 0) {
        *param_5 = 0;
        if ((short)local_20 != 0) {
          uVar2 = local_20 & 0xffff;
          local_24 = -1;
          do {
            local_1c = uVar2;
            local_20 = FUN_004209e8(param_1,&local_18);
            iVar3 = local_18;
            if (local_18 != 0) goto LAB_00422094;
            iVar3 = FUN_004206ea((int)param_1,4);
            if (iVar3 != 0) goto LAB_00422094;
            uVar2 = FUN_004209e8(param_1,&local_18);
            *param_3 = uVar2;
            iVar3 = local_18;
            if (local_18 != 0) goto LAB_00422094;
            uVar2 = FUN_004209e8(param_1,&local_18);
            *param_4 = uVar2;
            iVar3 = local_18;
            if (local_18 != 0) goto LAB_00422094;
            if (local_20 == 0x54595031) {
              *param_3 = *param_3 + 0x18;
              *param_4 = *param_4 - 0x18;
              *param_5 = 0;
LAB_00422070:
              if (-1 < param_2) {
                local_24 = local_24 + 1;
                goto LAB_00422077;
              }
LAB_00422092:
              iVar3 = 0;
              goto LAB_00422094;
            }
            if (local_20 == 0x43494420) {
              *param_3 = *param_3 + 0x16;
              *param_4 = *param_4 - 0x16;
              *param_5 = 1;
              goto LAB_00422070;
            }
LAB_00422077:
            if ((-1 < param_2) && (local_24 == param_2)) goto LAB_00422092;
            uVar2 = local_1c - 1;
          } while (uVar2 != 0);
        }
        iVar3 = 0x8e;
      }
    }
  }
LAB_00422094:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_24)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_24);
}

