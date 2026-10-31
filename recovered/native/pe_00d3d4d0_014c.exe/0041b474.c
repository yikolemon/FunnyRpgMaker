/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b474 */

undefined4 __cdecl FUN_0041b474(undefined2 ****param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  if (param_2 < 1) {
    uVar4 = 0x80070057;
    if (param_2 != 0) {
      *(undefined2 *)param_1 = 0;
    }
  }
  else {
    uVar1 = param_2 - 1;
    local_18 = &stack0x00000010;
    puVar2 = (uint *)FUN_0040a56c();
    uVar3 = FUN_00488dab(*puVar2 | 1,puVar2[1],param_1,uVar1,param_3,(undefined4 *)0x0,
                         &stack0x00000010);
    uVar4 = 0x8007007a;
    if ((((int)uVar3 < 0) || (uVar1 < uVar3)) || (uVar4 = 0, uVar3 == uVar1)) {
      *(undefined2 *)((int)param_1 + param_2 * 2 + -2) = 0;
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return uVar4;
}

