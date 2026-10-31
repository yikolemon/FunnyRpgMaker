/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00410aae */

ushort * __cdecl FUN_00410aae(int param_1,ushort *param_2,int *param_3)

{
  ushort *puVar1;
  int *local_18;
  uint local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_18;
  puVar1 = (ushort *)(param_1 + 2);
  if (puVar1 != param_2) {
    if ((ushort)(*puVar1 - 0x30) < 10) {
      local_14 = 0;
      puVar1 = (ushort *)FUN_00410736(puVar1,param_2,&local_14);
      if ((*(byte *)(param_3 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_3 + 3) & 0x1f) & 1) != 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0040ba4e(0x504af0);
      }
      *(uint *)(*param_3 + 4) = local_14;
    }
    else {
      if (*puVar1 != 0x7b) goto LAB_00410b5e;
      puVar1 = (ushort *)(param_1 + 4);
      if (puVar1 != param_2) {
        local_18 = param_3;
        puVar1 = FUN_0041130c(puVar1,param_2,&local_18);
      }
      if ((puVar1 == param_2) || (*puVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
        FUN_0040ba4e(0x504ac6);
      }
      puVar1 = puVar1 + 1;
    }
    if (DAT_0050e8c0 == (local_10 ^ (uint)&local_18)) {
      return puVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_10 ^ (uint)&local_18);
  }
LAB_00410b5e:
                    /* WARNING: Subroutine does not return */
  FUN_0040ba4e(0x5049dd);
}

