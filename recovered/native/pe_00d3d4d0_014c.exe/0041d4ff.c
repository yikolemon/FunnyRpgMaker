/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041d4ff */

int __cdecl FUN_0041d4ff(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  if (param_1 == 0) {
    local_18 = 0x23;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      local_18 = 6;
    }
    else {
      iVar2 = *(int *)(iVar1 + 8);
      piVar3 = FUN_0041c507(iVar2,*(size_t *)(*(int *)(iVar1 + 0xc) + 0x2c),&local_18);
      if (local_18 == 0) {
        piVar3[1] = param_1;
        local_18 = FUN_0041d5b8(piVar3);
        if (local_18 == 0) {
          piVar3[2] = *(int *)(param_1 + 0x54);
          *(int **)(param_1 + 0x54) = piVar3;
          local_18 = 0;
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = piVar3;
          }
        }
        else {
          FUN_0041d67b((int)piVar3);
          FUN_0041c607(iVar2,(int)piVar3);
        }
      }
      else if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
    }
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

