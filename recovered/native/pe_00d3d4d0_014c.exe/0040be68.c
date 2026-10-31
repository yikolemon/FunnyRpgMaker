/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040be68 */

void __cdecl FUN_0040be68(ushort *param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_10;
  uVar1 = *param_1;
  if ((uVar1 == 0x7d) || (uVar1 == 0x3a)) {
    uVar3 = *(uint *)(*param_3 + 0xc);
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ba4e(0x5039d2);
    }
    *(uint *)(*param_3 + 0xc) = uVar3 + 1;
LAB_0040bef4:
    param_3[1] = uVar3;
    if (DAT_0050e8c0 == (local_c ^ (uint)&local_10)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_c ^ (uint)&local_10);
  }
  if ((ushort)(uVar1 - 0x30) < 10) {
    local_10 = 0;
    if (uVar1 == 0x30) {
      puVar2 = param_1 + 1;
    }
    else {
      puVar2 = (ushort *)FUN_00410736(param_1,param_2,&local_10);
    }
    if ((puVar2 != param_2) && ((*puVar2 == 0x3a || (*puVar2 == 0x7d)))) {
      if (0 < *(int *)(*param_3 + 0xc)) {
                    /* WARNING: Subroutine does not return */
        FUN_0040ba4e(0x5039a1);
      }
      *(undefined4 *)(*param_3 + 0xc) = 0xffffffff;
      uVar3 = local_10;
      goto LAB_0040bef4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040ba4e(0x504ac6);
}

