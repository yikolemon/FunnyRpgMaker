/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e01f */

undefined4 __cdecl FUN_0041e01f(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)auStack_14;
  uVar5 = 0xffffffff;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    piVar1 = *(int **)(*param_1 + 0x60);
    pcVar2 = *(code **)(*piVar1 + 0x20);
    if (pcVar2 != (code *)0x0) {
      puVar3 = (undefined4 *)(*pcVar2)(piVar1,"tt-cmaps");
      if (puVar3 != (undefined4 *)0x0) {
        iVar4 = (*(code *)*puVar3)(param_1,auStack_14);
        if (iVar4 == 0) {
          uVar5 = uStack_10;
        }
      }
    }
  }
  if (DAT_0050e8c0 == (local_c ^ (uint)auStack_14)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)auStack_14);
}

