/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00448d85 */

int __fastcall FUN_00448d85(int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  undefined4 uStack_1c;
  ushort local_16;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&uStack_1c;
  iVar1 = FUN_00420696((int)param_1,0);
  if ((((iVar1 == 0) && (iVar1 = FUN_00448e31(param_1,&local_16,&uStack_1c), iVar1 == 0)) &&
      ((local_16 == 0x8001 || (iVar1 = FUN_00420696((int)param_1,0), iVar1 == 0)))) &&
     (iVar1 = FUN_00420be1(param_1,param_3), iVar1 == 0)) {
    iVar1 = FUN_00485bd0((uint *)param_1[8],param_2,param_3);
    iVar1 = (uint)(iVar1 != 0) * 2;
    FUN_00420cde(param_1);
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&uStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&uStack_1c);
  }
  return iVar1;
}

