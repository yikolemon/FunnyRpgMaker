/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044e868 */

uint * __fastcall FUN_0044e868(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int local_20;
  uint local_1c;
  uint *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  puVar2 = (uint *)0x0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x1c);
    local_20 = FUN_0044dedf((int *)(param_1 + 0x24),param_2,(int *)&local_18,&local_1c);
    if (local_20 == 0) {
      puVar2 = (uint *)FUN_0041e773(iVar1,local_1c + 1,&local_20);
      if (local_20 == 0) {
        FUN_004878c0(puVar2,local_18,local_1c);
        *(undefined1 *)((int)puVar2 + local_1c) = 0;
      }
      FUN_0044decc((int *)(param_1 + 0x24),(int *)&local_18);
    }
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_20)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_20);
}

