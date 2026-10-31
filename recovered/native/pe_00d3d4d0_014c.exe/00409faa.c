/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00409faa */

int __cdecl FUN_00409faa(undefined1 ****param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  local_18 = (int *)&stack0x00000010;
  puVar1 = (uint *)FUN_0040a56c();
  iVar2 = FUN_00488dec(*puVar1,puVar1[1],param_1,param_2,param_3,(undefined4 *)0x0,
                       (int *)&stack0x00000010);
  iVar3 = -1;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

