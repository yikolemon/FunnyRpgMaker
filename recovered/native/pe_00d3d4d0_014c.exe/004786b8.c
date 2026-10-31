/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004786b8 */

int __fastcall FUN_004786b8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_10;
  local_10 = 0;
  if (param_1 == 0) {
    iVar2 = 6;
  }
  else {
    puVar1 = (undefined4 *)FUN_0041e773(param_1,0x28,&local_10);
    iVar2 = local_10;
    if (local_10 == 0) {
      *(undefined8 *)(puVar1 + 8) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *param_2 = puVar1;
      iVar2 = 0;
    }
  }
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_10)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_10);
}

