/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041cbde */

int __fastcall
FUN_0041cbde(undefined4 param_1,uint *param_2,undefined4 param_3,int param_4,char param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  piVar1 = FUN_00421a95((int)param_2);
  if (*piVar1 == 0) {
    puVar2 = (undefined4 *)FUN_0041e773(param_4,8,&local_18);
    if (local_18 == 0) {
      *piVar1 = (int)puVar2;
      *puVar2 = param_3;
      puVar2[1] = param_1;
      uVar3 = param_2[2];
      if (*param_2 <= uVar3) {
        local_18 = FUN_00421ae5(param_2,param_4);
        if (local_18 != 0) goto LAB_0041cc5f;
        uVar3 = param_2[2];
      }
      param_2[2] = uVar3 + 1;
      local_18 = 0;
    }
  }
  else {
    local_18 = 0;
    if (param_5 != '\0') {
      *(undefined4 *)(*piVar1 + 4) = param_1;
    }
  }
LAB_0041cc5f:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

