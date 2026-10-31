/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5a5d */

int __fastcall FUN_101c5a5d(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  uVar1 = param_1[1];
  uVar4 = param_1[5];
  uVar2 = uVar1 * 2;
  param_1[1] = uVar2;
  *param_1 = uVar2 / 3;
  uVar2 = FUN_101c00c3(param_2,4,0,uVar2,0,&local_18);
  param_1[5] = uVar2;
  if (local_18 == 0) {
    local_20 = local_18;
    if (uVar1 != 0) {
      uVar2 = 0;
      local_1c = uVar4;
      do {
        puVar3 = *(undefined4 **)(uVar4 + uVar2 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)FUN_101c5a0d(*puVar3);
          *puVar3 = *(undefined4 *)(local_1c + uVar2 * 4);
          uVar4 = local_1c;
        }
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
    FUN_101c0017(param_2,uVar4);
    local_18 = local_20;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

