/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00438c3b */

int __fastcall FUN_00438c3b(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_10;
  if (param_1 == 0) {
    iVar1 = 0x23;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x74);
    if (*(int *)(param_1 + 0x74) == 0) {
      iVar1 = FUN_00437807(param_1,&local_10,param_3);
      if (iVar1 != 0) goto LAB_00438c7b;
      *(int *)(param_1 + 0x74) = local_10;
      *(undefined1 **)(param_1 + 0x78) = &LAB_004378fb;
      iVar1 = local_10;
    }
    *param_2 = iVar1;
    iVar1 = 0;
  }
LAB_00438c7b:
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_10)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_10);
}

