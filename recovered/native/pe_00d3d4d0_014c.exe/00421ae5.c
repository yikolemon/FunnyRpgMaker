/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421ae5 */

int __fastcall FUN_00421ae5(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  uVar1 = param_1[1];
  uVar4 = param_1[5];
  uVar2 = uVar1 * 2;
  param_1[1] = uVar2;
  *param_1 = uVar2 / 3;
  uVar2 = FUN_0041c6b3(param_2,4,0,uVar2,0,&local_18);
  param_1[5] = uVar2;
  if (local_18 == 0) {
    local_20 = local_18;
    if (uVar1 != 0) {
      uVar2 = 0;
      local_1c = uVar4;
      do {
        if (*(int *)(uVar4 + uVar2 * 4) != 0) {
          piVar3 = FUN_00421a95((int)param_1);
          *piVar3 = *(int *)(local_1c + uVar2 * 4);
          uVar4 = local_1c;
        }
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
    FUN_0041c607(param_2,uVar4);
    local_18 = local_20;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_20)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_20);
}

