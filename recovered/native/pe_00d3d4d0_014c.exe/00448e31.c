/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00448e31 */

int __fastcall FUN_00448e31(int *param_1,ushort *param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  *param_2 = 0;
  *param_3 = 0;
  uVar1 = FUN_0042070a(param_1,&local_18);
  iVar3 = local_18;
  if (local_18 == 0) {
    iVar3 = 0;
    if ((ushort)(uVar1 + 0x7fff) < 2) {
      uVar2 = FUN_00420f45(param_1,&local_18);
      iVar3 = local_18;
      if (local_18 == 0) {
        *param_3 = uVar2;
        iVar3 = 0;
      }
    }
    *param_2 = uVar1;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

