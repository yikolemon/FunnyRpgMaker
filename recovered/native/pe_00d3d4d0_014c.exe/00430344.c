/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00430344 */

undefined4 __fastcall
FUN_00430344(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  iVar2 = *(int *)(param_1 + 0x24);
  iVar1 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x198) + 0x38) + 0x18))(param_2,&local_18);
  iVar2 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x198) + 0x38) + 0x1c))(param_2,&local_18);
  uVar3 = 0;
  if (param_3 < local_18) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(iVar2 + param_3 * 0x14);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(iVar2 + 0xc + param_3 * 0x14);
    }
    uVar3 = *(undefined4 *)(iVar1 + param_3 * 0x14);
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

